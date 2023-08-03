class node {
public:
  bool endmark;
  node *next[26];
  node() {
    for (int i = 0; i < 26; i++) {
      next[i] = NULL;
      endmark = false;
    }
  }
};

void add(string &s, node *root) {
  int n = s.size();
  node *cur = root;
  for (int i = 0; i < n; i++) {
    int id = s[i] - 'a';
    if (cur -> next[id] == NULL) {
      cur -> next[id] = new node();
    }
    cur = cur -> next[id];
  }
  cur -> endmark = true;
}

bool search(string &s, node *root) {
  int n = s.size();
  node *cur = root;
  for (int i = 0; i < n; i++) {
    int id = s[i] - 'a';
    if (cur -> next[id] == NULL) {
      return false;
    }
    cur = cur -> next[id];
  }
  return cur -> endmark;
}
