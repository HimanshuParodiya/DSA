#include <iostream>
using namespace std;

//- 1) // void update(int a)
// {
//     a = a / 2;
// }

// int main()
// {
//     int a = 10;
//     update(a);
//     cout << a; // 10
//     return 0;
// }

//- 2) int update(int a)
// {
//     a -= 5;
//     return a;
// }

// int main()
// {
//     int a = 15;
//     int ans = update(a);
//     cout << ans; // 10 => (15-5)
//     return 0;
// }

//- 3) int update(int a)
// {
//     int ans = a * a;
//     return ans;
// }

// int main()
// {
//     int a = 14;
//     a = update(a);
//     cout << a; // 196 ( a= update(14) then function run and function return 196 so the new value of a is 196)
// }