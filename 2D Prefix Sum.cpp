const int N = 1e3 + 5;

vector<vector<int>> matrix(N, vector<int>(N, 0));

void build(int n, int m) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      matrix[i][j] += matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1];
    }
  }
}

int get(int rowMin, int colMin, int rowMax, int colMax) {
  return (matrix[rowMax][colMax] - matrix[rowMin - 1][colMax] - 
          matrix[rowMax][colMin - 1] + matrix[rowMin - 1][colMin - 1]);
}
