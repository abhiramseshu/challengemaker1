// #include <bits/stdc++.h>
// using namespace std;
// #define fast                        \
//   ios_base::sync_with_stdio(false); \
//   cin.tie(NULL);                    \
//   cout.tie(NULL);
// bool is_prime(int a)
// {
//   if (a == 1)
//     return 0;
//   for (int i = 2; i <= round(sqrt(a)); ++i)
//     if (a % i == 0)
//       return 0;
//   return 1;
// }
// int main()
// {
//   fast;
//   int total;
//   cin >> total;
//   int n;
//   cin >> n;
//   int pieces;
//   pair<int, int> temp;
//   vector<vector<pair<int, int>>> v(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> pieces;
//     for (int j = 0; j < pieces; j++)
//     {
//       cin >> temp.first >> temp.second;
//       v[i].push_back(temp);
//     }
//   }
//   int mc, tempi;
//   cin >> mc;
//   vector<int> mango_physics(mc), mango_location(total + 1, 0);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> mango_physics[i];
//   }
//   for (int i = 1; i <= total; i++)
//   {
//     if (is_prime(i))
//     {
//       for (int j = 0; j < mc; j++)
//       {
//         tempi = i + mango_physics[j];
//         if (tempi >= 1 && tempi <= total)
//           mango_location[tempi] = 1;
//       }
//     }
//   }
//   vector<int> no_of_mangos(n, 0);
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < v[i].size(); j++)
//     {
//       for (int k = v[i][j].first; k <= v[i][j].second; k++)
//       {
//         if (mango_location[k])
//         {
//           no_of_mangos[i]++;
//         }
//       }
//     }
//   }
//   int _max = 0;
//   for (auto x : no_of_mangos)
//     _max = max(_max, x);
//   cout << _max;
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
bool is_prime(int a)
{
  if (a == 1)
    return 0;
  for (int i = 2; i <= round(sqrt(a)); ++i)
    if (a % i == 0)
      return 0;
  return 1;
}
int main()
{
  fast;
  int total;
  cin >> total;
  int n;
  cin >> n;
  int pieces;
  pair<int, int> temp;
  vector<vector<pair<int, int>>> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> pieces;
    for (int j = 0; j < pieces; j++)
    {
      cin >> temp.first >> temp.second;
      v[i].push_back(temp);
    }
  }
  int mc, tempi;
  cin >> mc;
  vector<int> mango_physics(mc), mango_location(total + 1, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> mango_physics[i];
  }
  for (int i = 1; i <= total; i++)
  {
    if (is_prime(i))
    {
      for (int j = 0; j < mc; j++)
      {
        tempi = i + mango_physics[j];
        if (tempi >= 1 && tempi <= total)
          mango_location[tempi] += 1;
      }
    }
  }
  vector<int> no_of_mangos(n, 0);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < v[i].size(); j++)
    {
      for (int k = v[i][j].first; k < v[i][j].second; k++)
      {
        if (mango_location[k] > 0)
        {
          no_of_mangos[i] += mango_location[k];
        }
      }
    }
  }
  int _max = 0;
  for (auto x : no_of_mangos)
    _max = max(_max, x);
  cout << _max;
  return 0;
}