
// // Pattern 1
// /*
// A A A A A A 
// B B B B B B
// C C C C C C
// D D D D D D
// E E E E E E
// F F F F F F
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
//             char ch = ('A'+i-1);
//             cout << ch  << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }



// // Pattern 2
// /*
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E
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
//             char ch = ('A'+j-1);
//             cout << ch  << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }



// // Pattern 3
// /*
// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y
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
//         while(j<=n){
//             char ch = ('A'+k-1);
//             cout << ch  << " ";
//             j = j+1;
//             k = k+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }



// // Pattern 4
// /*
// A A A A A A 
// B B B B B B
// C C C C C C
// D D D D D D
// E E E E E E
// F F F F F F
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
//             char ch = ('A'+i+j-2);
//             cout << ch  << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }




// // Pattern 5
// /*
// A 
// B B
// C C C
// D D D D
// E E E E E
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
//             char ch = ('A'+i-1);
//             cout << ch  << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }

// /*
// A B C D 
// B C D E
// C D E F
// D E F G
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     int i =1;
    
//     while (i<=n){
//         int k = i;
//         int j= 1;
//         while (j<=n){
            
//             char ch = 'A' + k - 1;
//             cout << ch << " ";
//             j = j+1;
//             k = k+1;
//         }
//         cout << endl;
//         i = i+1;
//     } 
// }



// /*
//           * 
//         * *
//       * * *
//     * * * *
//   * * * * *
// * * * * * *
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     int i =1;
    
//     while (i<=n){
//         int j = 1;
//         while (j<=n){
//             if((i+j)>n){
//                 cout << "*" << " ";
//             }
//             else{
//                 cout << " "<< " ";
//             }
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     } 
// }


// /*
//           A 
//         A A
//       A A A
//     A A A A
//   A A A A A
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1; 
//     while(i<=n){
//         int space = n - i +1;
//         while (space)
//         {
//             cout << " "<< " ";
//             space = space-1;
//         }
//         int j = 1;
//         while(j<=i){
//             char ch = ('A');
//             cout << ch  << " ";
//             j = j+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }



// /*
// 1 1 1 1 1 
// 2 2 2 2
// 3 3 3
// 4 4
// 5
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1; 
//     while(i<=n){
//         int j = n-i+1;
//         while(j){
//             cout << i <<" ";
//             j = j-1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }


// /*
// * * * * * 
//   * * * *
//     * * *
//       * *
//         *
// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1; 
//     while(i<=n){
//         int space = i-1;
//         while (space)
//         {
//             cout << " "<< " ";
//             space = space-1;
//         }
//         int j = n-i+1;
//         while(j){
//             char ch = ('*');
//             cout << ch  << " ";
//             j = j-1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }

/*
1 2 3 4 5 
  2 3 4 5
    3 4 5
      4 5
        5
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int i = 1; 
//     while(i<=n){
//         int k =i;
//         int space = i - 1;
//         while (space)
//         {
//             cout << " "<< " ";
//             space = space-1;
//         }
//         int j = n-i+1;
//         while(j){
//             cout << k  << " ";
//             j = j-1;
//             k =k+1;
//         }
//         cout << endl;
//         i = i+1;
//     }
// }
