#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
  ordered_set p;
  // 1 3 5 8 10
  // * find_by_order(index) - return the value of index on log(n) time complexity and 0 based
  // order_of_key(value) - return the index of value on log(n) time complexity
                         // it actually return the count of value that is strictly
                         // less than that value
  p.insert(5);
  p.insert(8);
  p.insert(1);
  p.insert(3);
  p.insert(3);
  p.insert(10);
  cout << * p.find_by_order(3) << "\n";
  cout << * p.find_by_order(1) << "\n";
  cout << p.order_of_key(4) << "\n";
  cout << p.order_of_key(9) << "\n";
}
