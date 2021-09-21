#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
//this is the class rectangle with one default constructor and two parameterised constructors
class rectangle{
    public:
    int length,breadth;
    //default constructor
    rectangle(){
        length=0;
        breadth=0;
    }
    //single value parameterised constructor
    rectangle(int a){
        length=a;
        breadth=a;
    }
    //two valued parameterised constructor
    rectangle(int a,int b){
        
        length=a;
        breadth=b;
    }
   //set functions for length,breadth and height
    void setlength(int inputl){
      length=inputl;
    }
    void setbreadth(int inputb){

      breadth=inputb;
    }
    //get functions to return values
   int getlength(){
        return length;
    }
   int getbreadth(){
        return breadth;
    }
   
    int getarea(){
        return length*breadth;
    }

};


int main(){
  int h;
  rectangle b;
  //menu to implement different constructors  
  cout<<"what kind of consturctor do you want to implement?\n";
  cout<<"1-default constructor\n";
  cout<<"2-parameterised constructor with one parameter\n";
  cout<<"3-parameterised constructor with two parameters\n";
  cout<<"4-set parameters through directly through set functions\n";
  cin>>h;
  //default constructor option 
  if(h==1){
  cout<<"length="<<b.getlength()<<endl;
  cout<<"breadth="<<b.getbreadth()<<endl;;
  cout<<"area="<<b.getarea()<<endl;
  }
  //single value constructor option
  else if(h==2){
   int x;
   cout<<"enter value of both length and breadth";
   cin>>x;
   rectangle b(x);
    cout<<"length="<<b.getlength()<<endl;
  cout<<"breadth="<<b.getbreadth()<<endl;;
  cout<<"area="<<b.getarea()<<endl;
  }
  //multiple value constructor option
  else if(h==3){
      int s,v;
    cout<<"enter values of both length and breadth";
   cin>>s>>v;
   rectangle b(s,v);
    cout<<"length="<<b.getlength()<<endl;
  cout<<"breadth="<<b.getbreadth()<<endl;;
  cout<<"area="<<b.getarea()<<endl;
  }
   // input through set functions
  else if(h==4){
      int x,y;
      cout<<"input length and breadth";
      cin>>x>>y;
      b.setlength(x);
      b.setbreadth(y);
      cout<<"length="<<b.getlength()<<endl;
  cout<<"breadth="<<b.getbreadth()<<endl;;
  cout<<"area="<<b.getarea()<<endl;

  }
}
