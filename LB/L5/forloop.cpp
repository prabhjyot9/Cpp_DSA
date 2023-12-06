// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter The Number :" << endl;
//     cin >> n;
//     for (int i = 1; i <= n ; i++)
//     {
//         cout << i << endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter The Number :" << endl;
//     cin >> n;
//     int i = 1;
//     for (; i <= n ; i++)
//     {
//         cout << i << endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter The Number :" << endl;
//     cin >> n;
//     int i = 1;
//     for (; i <= n ; )
//     {
//         cout << i << endl;
//         i++;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter The Number :" << endl;
//     cin >> n;
//     int i = 1;
//     for ( ; ; )
//     {
//         if (i<=n)
//         {
//             cout << i << endl;
//         }
//         else{
//            break;
//         } 
        
//         i++;
//     }
//     cout << "DONE";
    
// }

// #include<iostream>
// using namespace std;
// int main(){

//     for(int a=0,b=1,c=2;a>=0 && b>=1 && c>=2 ; a--,b--,c--){
//     cout <<a<<"" <<b <<""<< c << endl;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){

//     for(int a=0; a<=5; ++a){
//     cout << a << endl;
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter The Number :" << endl;
//     cin >> n;
//     int sum = 0;
//     for (int i = 1; i <= n ; i++)
//     {
//         sum += i;
//     }
//     cout << "Sum of numbers is: " << sum ;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter The Number :" << endl;
//     cin >> n;
//     int first = 0;
//     int second = 1;
//     cout << first << " "; 
//     cout << second << " "; 
//     int next;
//     for (int i = 2; i < n ; i++)
//     {
//        cout << (first + second) << " ";
//        next = second;
//        second = second + first;
//        first = next;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, count = 0;
//     cout << "Enter The Number :" << endl;
//     cin >> n;
//     for (int i = 2; i < n ; i++)
//     {
//        if((n%i)==0){
//            count++;
//        }
//     }
//     if(count>0){
//         cout << "Not a Prime!";
//     }
//     else{
//         cout << "Prime!";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0 ;i <= 5 ;i++){
//         cout <<i<<" ";
//         i--;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=15;i+=2){
//         cout << i <<" ";
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             cout << i <<" "<< j << endl;
//         }
//     } 
// }


#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j == 5){
                break;
            }
            cout << i <<" "<< j << endl;
        }
    } 
}