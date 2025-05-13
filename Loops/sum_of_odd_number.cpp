#include <iostream>
using namespace std;

void OddNumSum(int n){
     int sum=0;
     for(int i=1; i <= n;i++){
        if(i % 2 != 0){
           sum = sum + i;
          
        }

     }
     cout<<"sum of odd number:"<<sum;
}
int main(){
    int n;
    cout<<"Enter an number"<<endl;
    cin>>n;

    if(n<0){
        cout<<"enter valid input"<<endl;

    }
     OddNumSum(n);
    return 0;
}