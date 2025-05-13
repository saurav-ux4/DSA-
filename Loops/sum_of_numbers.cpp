#include<iostream>
using namespace std;

void SumOfNumbers( int n){
         int sum = 0;
     for (int i = 1; i<=n; i++){
        sum = sum + i;
     }

     cout<<sum<<endl;
     //we have written cout statement outside for block,and if we had wrote it inside for block it
     //would reapet for each iteration.

     
}
int main(){
    
    int n;
    cout<<"enter an number(number > 1)"<<endl;
    cin>>n;

    if(n < 1){
        cout<<"enter valid input"<<endl;
    }
    SumOfNumbers(n);

    return 0;
}