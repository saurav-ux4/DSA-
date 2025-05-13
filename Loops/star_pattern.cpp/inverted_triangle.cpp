#include<iostream>
using namespace std;

void InvertTrinagle(int n){
    for(int i = 0; i < n; i++ ){

         //for spaces
          for(int j=0; j<i; j++){
            cout<<" ";
          }

        //for number
          for(int k=0; k<n-i; k++){
            cout<<"*";
          }
          cout<<endl;
    }
         
}
int main(){
    int n;
    cout<<"enter an number: ";
    cin>>n;

    InvertTrinagle(n);

    return 0;
}
