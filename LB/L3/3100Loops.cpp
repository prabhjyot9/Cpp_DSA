// // Print 1 to N.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 1;
//     while(i <= n){
//         cout << i <<endl;
//         i = i+1;
//     }
// }


// Print SUM of N Natural Number.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 1;
//     int sum = 0;
//     while(i <= n){
//         sum = sum + i;
//         i = i + 1;
//     }
//     cout << "The sun of " << n << " Natural Numbers is : " << sum << endl;
// }


// // Print Factorial Of Number.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 1;
//     int fac = 1;
//     while(i <= n){
//         fac = fac * i;
//         i = i + 1;
//     }
//     cout << "The Factorial of " << n << " is : " << fac << endl;
// }


// // Print Sum of even numbers between 1 To N.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 2;
//     int sum = 0;
//     while(i <= n){
//         sum = sum + i;
//         i = i + 2;
//     }
//     cout << "The sun of Even Numbers Between 1 and " << n << " is : " << sum << endl;
// }


// Print Sum of odd numbers between 1 To N.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 1;
//     int sum = 0;
//     while(i <= n){
//         sum = sum + i;
//         i = i + 2;
//     }
//     cout << "The sun of Odd Numbers Between 1 and " << n << " is : " << sum << endl;
// }


// Print even numbers between 1 To N.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 2;
//     cout << "The Even Numbers Between 1 and " << n << " are : " << endl;
//     while(i <= n){
//         cout << i <<" "; 
//         i = i + 2;
//     }
// }


// Print Odd numbers between 1 To N.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 1;
//     cout << "The Odd Numbers Between 1 and " << n << " are : " << endl;
//     while(i <= n){
//         cout << i <<" "; 
//         i = i + 2;
//     }
// }

// // Print numbers of even numbers between 1 To N.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 2;
//     int count = 0;
   
//     while(i <= n){
//         count = count + 1; 
//         i = i + 2;
//     }
//     cout << "The number of Even Numbers Between 1 and " << n << " are : " << count << endl;
// }

// // Print numbers of Odd Numbers Between 1 to N.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 1;
//     int count = 0;
   
//     while(i <= n){
//         count = count + 1; 
//         i = i + 2;
//     }
//     cout << "The number of Odd Numbers Between 1 and " << n << " are : " << count << endl;
// }


// // Check whether the number is Prime or Not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number : " ;
//     cin >> n;
//     int i = 2;
//     while((i < n) && (n % i != 0)){ 
//         i = i + 1;
//     }
//     if(i==n){
//         cout << n << " is a Prime Number.";
//     }
//     else{
//          cout << n << " is a Not Prime Number.";
//     }
// }