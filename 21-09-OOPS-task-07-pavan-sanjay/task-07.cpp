#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<string>
using namespace std;
//declaration of box class
class box{
    private:
    float length,breadth,height;
    public:
    box(){
        length=0;
        breadth=0;
        height=0;
    }
    box(float l,float b,float h){
        length=l;
        breadth=b;
        height=h;
    }
    //to input values set function used
    void setl(){
       cout<<"enter length:";
       cin>>length;   
    }
    void setb(){
       cout<<"enter breadth:";
       cin>>breadth;   
    }
    void seth(){
       cout<<"enter height:";
       cin>>height;   
    }
    //to return values get function used
    float getl(){
        return length;
    }
    float getb(){
        return breadth;
    }
    float geth(){
        return height;
    }
   float getvolume(){
        return length*breadth*height;
    }
    
};
//compare function with menu
void compare1(float s,float u){
int k;
cout<<"enter operator of your choice\n";
cout<<"press:\n";
cout<<"1:>\n";
cout<<"2:<\n";
cout<<"3:==\n";
cout<<"4:>=\n";
cout<<"5:<=\n";
cin>>k;
//here if condition satisfied it returns true else it is false for all 5
if(k==1){
if(s>u){
    cout<<"true";
    cout<<"\n\n";
}
else{
    cout<<"false";
    cout<<"\n\n";
}
}
else if(k==2){
if(s<u){
    cout<<"true";
    cout<<"\n\n";
}
else{
    cout<<"false";
    cout<<"\n\n";
}
}
else if(k==3){
 if(s==u){
   cout<<"true";
    cout<<"\n\n";
}
else{
    cout<<"false";
    cout<<"\n\n";
}
}
else if(k==4){
    if(s>=u){
    cout<<"true";
    cout<<"\n\n";
}
else{
     cout<<"false";
    cout<<"\n\n";
}
}
else if(k==5){
    if(s<=u){
    cout<<"true";
    cout<<"\n\n";
}
else{
    cout<<"false";
    cout<<"\n\n";
}
}
    
}

void loop(){
    //main loop condition involving inputting values
    box c1,c2;
    int d,k=1;
    cout<<"input dimensions of first box\n";
    c1.setl();
    c1.setb();
    c1.seth();
    cout<<"\n\n";
    cout<<"input dimensions of second box\n";
    c2.setl();
    c2.setb();
    c2.seth();
    cout<<"\n\n";
    //here the switch menu will keep on appearing as per your choice you can quit if you want
    while(k=1){
    cout<<"press:\n";
    cout<<"1-to print details of first box\n";
    cout<<"2-to print details of second box\n";
    cout<<"3-to compare the volume of the two boxes\n";
    cin>>d;
    cout<<"\n";
    //to print dimensions of first box
    if(d==1){
       cout<<"length of box-1="<<c1.getl()<<endl;
       cout<<"breadth of box-1="<<c1.getb()<<endl;
       cout<<"height of box-1="<<c1.geth()<<endl;
       cout<<"volume of box-1="<<c1.getvolume()<<endl;
       cout<<"\n\n";
       int w;
       //code that goes back to switch menu above or leaves void loop
       cout<<"do you want to check the other parameters?";
       cout<<"1-Yes\n 2-No";
       cin>>w;
       if(w==1){
           continue;
       }
       else if(w==2){
           break;
       }
    }
    //code that prints details of box-2
    else if(d==2){
        cout<<"length of box-2="<<c2.getl()<<endl;
       cout<<"breadth of box-2="<<c2.getb()<<endl;
       cout<<"height of box-2="<<c2.geth()<<endl;
       cout<<"volume of box-2="<<c2.getvolume()<<endl;
       cout<<"\n\n";
       int w;
       //code that goes back to switch menu above or leaves void loop
       cout<<"do you want to check the other parameters?";
       cout<<"1-Yes\n 2-No";
       cin>>w;
       if(w==1){
           continue;
       }
       else if(w==2){
           break;
       }
    }
    //code that compares volumes and is linked to compare function
    else if(d==3){
        
         compare1(c1.getvolume(),c2.getvolume());
         
        int w;
        //code that goes back to switch menu above or leaves void loop
       cout<<"do you want to check the other parameters?\n";
       cout<<"1-Yes\n 2-No";
       cin>>w;
       if(w==1){
           continue;
       }
       else if(w==2){
           break;
       }
    }
    }
    
}
    
int main(){
    int y;
    //main loop which repeats entire code how muchever you desire.
    cout<<"Welcome To Our Volume Calculation And Comparison Program\n ";
    cout<<"Press:1 (To Execute)\n";
    cout<<"Press:2 (To Quit)\n";
    cin>>y;
    if(y==1){
        loop();
        main();
    }
    else if(y==2){
        exit(1);
    }
}