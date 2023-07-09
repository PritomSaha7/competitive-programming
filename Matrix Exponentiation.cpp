const long long N = 2;
const long long MOD = 1e9 + 7;

class matrix {
public:
  long long a[N][N];
  matrix() {
    memset(a, 0, sizeof a);
  }
  void format() {
    for (int i = 0; i < N; i++) {
      a[i][i] = 1;
    }
  }
  matrix operator + (matrix &other) {
    matrix result;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        result.a[i][j] = (a[i][j] + other.a[i][j]) % MOD;
      }
    }
    return result;
  }
  matrix operator * (matrix &other) {
    matrix result;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        for (int k = 0; k < N; k++) {
          result.a[i][j] = (result.a[i][j] + (a[i][k] * other.a[k][j]) % MOD) % MOD;
        }
      }
    }
    return result;
  }
};

matrix binexp(matrix a, long long b) {
  matrix result;
  result.format();
  while(b > 0) {
    if (b & 1) {
      result = result * a;
    }
    a = a * a;
    b /= 2;
  }
  return result;
}
