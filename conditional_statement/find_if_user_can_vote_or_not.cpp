#include<iostream>
using namespace std;

void vote(int age){

    if(age >= 18){
        cout<<"you can vote!"<<endl;
    }else{
        cout<<"you cannot vote!"<<endl;
    }

}
int main(){
    int age ;
    cout<<"enter your age"<<endl;
    cin>>age;

    if(age<0){
        cout<<"enter invalid age"<<endl;
    }

    vote(age);

    return 0;

}