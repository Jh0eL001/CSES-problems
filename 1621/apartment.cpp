#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m, k;
  cin >> n >> m >> k;

  // vectors from applicants an available apartments
  vector<int> app(n), apt(m);
  /*We use vectors because:

    They’re easy to work with

    We can sort them

    We can access items by index (app[i])
  */
  // fill the data 
  for (int i = 0; i < n; i++) cin >> app[i];
  for (int i = 0; i < m; i++) cin >> apt[i];

  // sort both vectors
  sort(app.begin(), app.end());
  sort(apt.begin(), apt.end());

  int i = 0, j = 0, count = 0;
  // This loop continues as long as we have applicants and apartments to consider.
  while (i < n && j < m)
  {
    /* code */
    if (abs(app[i] - apt[j]) <= k)
    {
      count++;
      i++;
      j++;
    } else if (apt[j] < app[i] - k){
      j++;
    } else {
      i++;
    }
  }
  cout << count;

}

// WRONG APPROACH 

// int main() {
//   // n applicantes, m apartments, k allowed diff.
//   int n, k , m, count = 0; cin >> n >> m >> k;
//   // desired ap size for each app.
//   vector<int> app, v2;
//   // number of applicants
//   for (int i = 0; i < n; i++) {
//     int x; cin >> x;
//     app.push_back(x);
//   }
//   // size of the actual departments available
//   for (int i = 0; i < m; i++) {
//     int x; cin >> x;
//     v2.push_back(x);
//   }
//   /*
//     Input
//     4 3 5
//     60 45 80 60
//     30 60 75
//     app = {60, 45, 80, 60}
//     v2  = {30, 60, 75}
//   */
//   for(int e : v2) {
//     for(int e2 : app){
//       if(e == e2 || e == e2 + 5 || e == e2 - 5) {
//         count++;
//       }
//     }
//   }
// }