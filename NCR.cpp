const int N = 1e5 + 5;
const int MD = 1e9 + 7;

vector<long long> fac(N), ifac(N);

int expo(long long a, long long b) {
  a = a % MD;
  long long ans = 1;
  while(b > 0) {
    if (b & 1) {
      ans = (ans * a) % MD;
    }
    a = (a * a) % MD;
    b /= 2;
  }
  return ans;
}

void compute() {
  fac[0] = 1;
  for (int i = 1; i < N; i++) {
    fac[i] = (fac[i - 1] * i) % MD;
  }
  ifac[N - 1] = expo(fac[N - 1], MD - 2); // Fermat's little theorem
  for (int i = N - 2; i >= 0; i--) {
    ifac[i] = (ifac[i + 1] * (i + 1)) % MD;
  }
}

int get(int n, int r) {
  if (n < r) {
    return 0;
  }
  long long ans = fac[n];
  ans = (ans * ifac[r]) % MD;
  ans = (ans * ifac[n - r]) % MD;
  return ans;
}
