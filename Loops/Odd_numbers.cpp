#include <iostream>
using namespace std;

void OddNum(int n){
     
     for(int i=1; i <= n;i++){
        if(i % 2 != 0){
            cout<<i<<endl;

        }
     }
}
int main(){
    int n;
    cout<<"Enter an number"<<endl;
    cin>>n;

    if(n<0){
        cout<<"enter valid input"<<endl;

    }
     OddNum(n);
    return 0;
}