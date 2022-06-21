#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int age;

  cout<<"Enter your age : ";
  cin>>age;

  if (age == 0){
    cout<<"You haven't born yet! ";
  }
  else if(age>0 && age<=12){
    cout<<"You are a child! ";
  }
  else if(age>12 && age<=24){
    cout<<"You are a teenager! ";
  }
  else if(age>24 && age<=140){
    cout<<"You are young! ";
  }
  else if(age>40 ){
    cout<<"Wish your long life! ";
  }
  else if(age<0){
    cout<<"Invalid age !";
  }else{
  cout<<"Invalid age !";
  }


    getch();
}
