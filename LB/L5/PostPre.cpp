// #include<iostream>               // // Pehle agar if true ho gaya toh else pe nahi jayenge!!!!!!!
// using namespace std;
// int main(){

//     int a, b=1;
//     a = 10;
//     if(a)
//         cout <<++b;
//     else
//         cout << ++b;
// }

// #include<iostream>           // // Dono True honge tabhi aage badenge                     
// using namespace std;
// int main()
// {
//     int a=1;
//     int b=2;
//     if(a-->0 && ++b>2){
//     cout <<"Stage1-Inside If" << endl;
//     }
//     else{
//     cout <<"Stage2-Inside else" << endl;
//     }
//     cout <<a<<" "<<b<< endl;
// }

// #include<iostream>                              // // Agar OR ke saath pehli condition true ho jaaye toh aage wali condition nahi dekhenge
// using namespace std;                           // //  Aur usme kuchh increment decrement nahi hoga !!!!!!!!!
// int main()
// {
//     int a=1;
//     int b=2;
//     if(a-->0 || ++b>2){
//     cout <<"Stage1-Inside If" << endl;
//     }
//     else{
//     cout <<"Stage2-Inside else" << endl;
//     }
//     cout <<a<<" "<<b<< endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//         int number=3;
//         cout <<(25*(number++))<< endl;          // Yaha pe use number = 3 hoga..... Par number = 4 ho chuka hai !!!!
//         cout <<(25*(++number))<< endl;          // Yaha pe number = 4 se 5 hoga toh ...... aur use bhi number = 5 hua hai !!!!!!!
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 1;              // a = 1
//     int b = a++;            // b = 1, a = 2
//     int c = ++a;            // c = 3 , a = 3
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = ++a;           // b =  2 , a = 2
//     int c = a++;           // c = 2 , a = 3
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
// }