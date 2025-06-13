#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, gon = 0; cin >> n >> x;
  vector<int> w(n);
  // fill the kids' weight in the vector w
  for (int i = 0; i < n; i++) cin >> w[i];
  // sort the weights so we can compare them from lighten to heavier
  sort(w.begin(), w.end());
  // two pointer technique again
  int i = 0, j = n - 1;
  while(i <= j){
    if(w[i] + w[j] <= x) {
      i++;
      j--;
    } else {
      j--;
    }
    gon++;
  }
  cout << gon << endl;
}