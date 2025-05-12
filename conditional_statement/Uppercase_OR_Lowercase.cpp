#include <iostream>
using namespace std;

// In this question we are comparing two different data types 
// character to integer.
//And we don't need to convert it type manually,compiler will do it automatically

void CASE(char letter ){

    if(letter >= 65 && letter <= 90){//ASCII value of capital letter from A to  Z
      cout<<"UPPPERCASE"<<endl;
    }else{
        cout<<"lowercase"<<endl;
    }
}
int main(){
    char letter;
    cout<<"enter an letter"<<endl;
    cin>>letter;
     
     CASE(letter);
     
    return 0;
}