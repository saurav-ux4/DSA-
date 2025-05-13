#include<iostream>
using namespace std;

void Square(int n){

     for(int i=0; i<n; i++){

         for(int j=0; j<n; j++){
            cout<<"*";
         }
         cout<<endl;
     }
}
int main(){
    int n;
    cout<<"enter an number: ";
    cin>>n;

    if(n<0){
        cout<<"enter valid input";
    }

    Square(n);
    return 0;
}




//ouput
//n=4
// ****
// ****
// ****
// ****