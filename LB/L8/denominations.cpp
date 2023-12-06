#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b=1;
    cout << "Enter amount :" <<endl;
    cin >> a;
    while(b<=6){
        switch(b){
            case (1) :    cout << "Number of 500 Rs notes = " << (a/500) << endl;
                            a = a % 500;
                            break;

            case (2) :    cout << "Number of 100 Rs notes = " << (a/100) << endl;
                            a = a % 100;
                            break;
                                    
            case (3) :     cout << "Number of 50 Rs notes = " << (a/50) << endl;
                            a = a % 50;
                            break;
                                    
            case (4) :     cout << "Number of 10 Rs notes = " << (a/10) << endl;
                            a = a % 10;
                            break;

            case (5) :      cout << "Number of 5 Rs coins = " << (a/5) << endl;
                            a = a % 5;
                            break;
                                    
            case (6) :      cout << "Number of 1 Rs coins = " << (a) << endl;
                            break;
        }
        b++;
    }

}

// #include <iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cout<<"Enter the amount"<<endl;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
//            }
// }