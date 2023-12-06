#include<iostream>
using namespace std;
int ques(int arr[],int size){
    int max = -100;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    for (int j = 0; j < size; j++)
    {
        if (max < (arr[j]*2) & max != arr[j])
        {
            return -1;
        }
        
    }
    return index;
   
}
int main(){
    int arr[4] = {0,0,0,1};
    cout << ques(arr,4) << endl;

}