// Topic: 2D Prefix Sum
// Source: https://usaco.guide/silver/more-prefix-sums?lang=cpp
// Complexity: build - O(n * m) get - O(1)
// Problem: https://cses.fi/problemset/task/1652

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

// Note: For 3D, 4D .. prefix sum 
// https://atcoder.jp/contests/abc366/editorial/10654
