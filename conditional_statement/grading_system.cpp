#include <iostream>
using namespace std;

//a ---> mark > 90
//b ---> mark >= 80 && mark < 90
//c ---> mark >= 70 && mark <= 80
//d ---> mark below 70
void grade(int mark){
          
         if(mark >= 90){
            cout<<"grade A"<<endl;
         }else if(mark >= 80 && mark < 90){
            cout<<"grade B"<<endl;
         }else if(mark >= 70 && mark <= 80){
            cout<<"grade C"<<endl;
         }else{
            cout<<"grade D"<<endl;
         }
}
int main(){
    int mark;
    cout<<"enter your marks"<<endl;
    cin>>mark;

    grade(mark);

    return 0;
}