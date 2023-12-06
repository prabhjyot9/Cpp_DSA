// /*
//       1 
//     2 3
//   4 5 6
// 7 8 9 10
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     int k =1;
//     while(i<=n){
        
//         int space = n - i;
//         while (space)
//         {
//             cout << " "<< " ";
//             space = space-1;
//         }
//         int j = i;
//         while(j){
//             cout << k  << " ";
//             j = j-1;
//             k =k+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int space1 =n-i;
//         while(space1){
//           cout << " " << " ";
//           space1 = space1-1;
//         }
//         int j = 1;
//         while(j<=i){
//             cout << j <<" ";
//             j = j+1; 
//         }    
//         int k = i-1;
//         while(k){
//             cout << k << " ";
//             k = k-1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout << j << " ";
            j = j+1;
        }
        int stars1 = i-1;
        while (stars1)
        {
            cout << "* ";
            stars1 = stars1 - 1;
        }

        int stars2 = i-1;
        while (stars2)
        {
            cout << "* ";
            stars2 = stars2 - 1;
        }

        int k = n-i+1;
        while(k){
            cout << k << " ";
            k = k-1;
        }

        i = i+1;
        cout <<endl;
    }
}