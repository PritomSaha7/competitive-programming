vector<vector<int>> manacher(string &t) {
  string s;
  s += t[0];
  for (int i = 1; i < t.size(); ++i) {
    s += string("#") + t[i];
  }
  int n = s.size();
  s = "$" + s + "^";
  vector<int> palin(n + 2);
  for (int i = 1, l = 1, r = 1; i <= n; ++i) {
    palin[i] = max(0, min(r - i, palin[l + (r - i)]));
    while(s[i - palin[i]] == s[i + palin[i]]) {
      ++palin[i];
    }
    if (i + palin[i] > r) {
      l = i - palin[i];
      r = i + palin[i];
    }
  }
  vector<int> even{0}, odd;
  for (int i = 1; i <= n; i += 2) {
    odd.push_back(palin[i] - (palin[i] / 2));
  }
  for (int i = 2; i <= n; i += 2) {
    even.push_back(palin[i] - ((palin[i] + 1) / 2));
  }
  return vector<vector<int>> {even, odd};
}
