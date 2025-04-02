#include <bits/stdc++.h>

using namespace std;

int main() {
  // pair
  pair<int,int> pii = {1,2};
  pii = make_pair(2,1);
  auto [a,b] = pii; //cria 2 variáveis com os valores dos elementos do pair
  cout << pii.first << ' ' << pii.second << '\n';

  // tuple
  tuple<int,int,int>tup = {1,2,3}; //pode ter mais de 3
  tup = make_tuple(1,2,3);
  auto [x,y,z] = tup; //cria 3 variáveis com os valores dos elementos da tuple 
}