// https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin>>n;
  // create the dynamic array (vector)
  vector<int> v(n);
  long long moves = 0;
  // read the values
  for (int i = 0; i < n; i++) cin >> v[i];
  // v[3, 2, 5, 1, 7]
  //logic of the problem
  for (int i = 0; i < n - 1; i++)
  {
    if (v[i+1] < v[i]) { // [3, 2]
      // de la diferencia de los dos elementos sale el num de "movimientos"
      moves +=   v[i] - v[i+1]; 
      // ahora cambiamos el segundo elemento al valor del primero para satisfacer las condiciones del problema
      v[i+1] = v[i]; // [3, 3]
    }
  }
  cout << moves;
}