class Hashing {
public:
  vector<long long> hashs;
  vector<long long> pows;
  int p;
  int MOD;
  Hashing() {}
  Hashing(string &s, int p, int MOD) : p(p), MOD(MOD) {
    int n = s.size();
    hashs.resize(n + 1, 0);
    pows.resize(n + 1, 0);
    hashs[0] = 0, pows[0] = 1;
    for (int i = 1; i <= n; i++) {
      pows[i] = (pows[i - 1] * p) % MOD;
      hashs[i] = ((hashs[i - 1] * p) % MOD + s[i - 1]) % MOD;
    }
  }
  int get(int l, int r) {
    long long result = hashs[r + 1] - (hashs[l] * pows[r - l + 1]);
    result = (result % MOD + MOD) % MOD;
    return result;
  }
};
