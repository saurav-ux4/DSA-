#include<iostream>
using namespace std;

void triangle(int n){
    for(int i = 0;  i < n; i++){
          
         for(int j=0; j < i+1; j++){
            cout<<"*";
         }
         cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter an number: ";
    cin>>n;
    
     if(n<3){
        cout<<"enter number greater than 3";
     }

    triangle(n);

    return 0;
}


//output
// n=4
// *
// **
// ***
// ****