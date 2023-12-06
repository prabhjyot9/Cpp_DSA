// // Patern 1
// /*
// * * * *
// * * * *            Number of rows = number of columns 
// * * * *
// * * * *
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << "* ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }

// // Patern 2
// /*
// 1 1 1 1
// 2 2 2 2            Number of rows = number of columns 
// 3 3 3 3
// 4 4 4 4
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << i << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }


// // Patern 3
// /*
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << j << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }


// // Patern 4
// /*
// 5 4 3 2 1 
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = n;
//         while(j>=1){
//             cout << j << " ";
//             j = j-1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }


// // Pattern 5
// /*
// 1 2 3 
// 4 5 6
// 7 8 9
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     int k= 1;
//     while(i<=n){
//         int j = 1;
        
//         while(j<=n){
//             cout << k << " ";
//             k = k+1;
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }



// // Pattern 7
// /*

// * 
// * *
// * * *
// * * * *
// * * * * *

// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << "* ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }



// // Pattern 8
// /*
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
//     int k = 1;
//     while(i<=n){
//         int j = 1; 
//         while(j<=i){
//             cout << k << " ";
//             j = j+1;
//             k = k+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }


// // Pattern 9
// /*
// 1 
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
    
//     while(i<=n){
//         int j = 1;
//         int k= i;
//         while(j<=i){
            
//             cout << k << " ";
//             k = k+1;
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }


// // Pattern 10
// /*
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1;
    
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << (i-j+1) << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }