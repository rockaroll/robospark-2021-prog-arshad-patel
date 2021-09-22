#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<string>
using namespace std;
#define CURRENTYEAR 2021
#define CURRENTMONTH 9
#define CURRENTDATE 20
//in bool year the condition will return true if the year is less than or equal to 2021 and greater than 0
bool year(int yy){
    return (yy<=CURRENTYEAR && yy>0);
}
// this function works on the same basis as the previous one
bool monthvalidcheck(int mt, int yr){
    if(mt>12 || mt<1) return false;
    if(yr<CURRENTYEAR) return true;
    if(yr==CURRENTYEAR && mt<=CURRENTMONTH) return true;
    return false;
}
//this will return true for months 1,3,5,7,8,10,12 otherwise it returns false
bool is31(int mt){
    if(mt==1 || mt==3 || mt==5 || mt==7 || mt==8 || mt==10 || mt==12) return true;
    return false;
}
//this function deals with returning true if the year inputted is a leap year and false if not
bool isLeap(int year){
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}
//this deals with different conditions involving all 3 parameters
bool isDateValid(int dt, int mt, int yr){
    if(yr==CURRENTYEAR && mt==CURRENTMONTH && is31(mt) && dt<=CURRENTDATE && dt>0) return true;
    if(yr==CURRENTYEAR && mt==CURRENTMONTH && !is31(mt) && dt<=CURRENTDATE && dt>0) return true;
    if(yr==CURRENTYEAR && mt<CURRENTMONTH && mt!=2 && is31(mt) && dt<=31 && dt>0) return true;
    if(yr==CURRENTYEAR && mt<CURRENTMONTH && mt!=2 && !is31(mt) && dt<=30 && dt>0) return true;
    if(yr==CURRENTYEAR && mt==2 &&  dt<=28 && dt>0) return true;
    if(yr<CURRENTYEAR && mt!=2 &&  is31(mt) && dt<=31 && dt>0) return true;
    if(yr<CURRENTYEAR && mt!=2 &&  !is31(mt) && dt<=30 && dt>0) return true;
    if(yr<CURRENTYEAR && mt==2 && isLeap(yr) && dt<=29 && dt>0) return true;
    if(yr<CURRENTYEAR && mt==2 && !isLeap(yr) && dt<=28 && dt>0) return true;
    return false;
}
/*personal data class*/
class PersonalData{
  //variable declaration  
  protected:
   string Name,surname,address;
   int mobile_no,dd,mm,yy;
   public:
   //default constructor
   PersonalData(){
      Name='\0';
      surname='\0';
      address='\0';
      mobile_no=0;
      dd=0;
      mm=0;
      yy=0;
   }
   //enter parameters
   void getdata1(){
       string test;
       bool h;
       getline(cin,test);
       cout<<"enter name:";
       getline(cin,Name);
       cout<<"enter surname:";
       getline(cin,surname);
       cout<<"enter Address:";
       getline(cin,address);
       cout<<"enter mobile number:";
       cin>>mobile_no;
       cout<<"enter year of birth:";
       cin>>yy;
       h=year(yy);
       if(h==false){//false condition incase year input is invalid
       bool notValid=true;
       while(notValid){
        cout<<"Please Enter Valid Date!"<<endl;
        cout<<"Enter year of birth"<<endl;
        cin>>yy;
        cout<<"Enter month of birth"<<endl;
        cin>>mm;
        cout<<"Enter date of birth"<<endl;
        cin>>dd;
        if(year(yy) && monthvalidcheck(mm,yy) && isDateValid(dd,mm,yy)) notValid=false;
    }
       }
       else{//else condition for next parameter
           bool u;
           cout<<"enter month of birth:";
           cin>>mm;
           u=monthvalidcheck(mm,yy);
           if(u==false){
           bool noValid=true;
           while(noValid){
           cout<<"Please Enter Valid Date!"<<endl;
           cout<<"Enter month of birth"<<endl;
           cin>>mm;
           cout<<"Enter date of birth"<<endl;
           cin>>dd;
           if( monthvalidcheck(mm,yy) && isDateValid(dd,mm,yy)) noValid=false;
       }
           }
        else{//else condition for next parameter
           bool v; 
           cout<<"enter date of birth:";
           cin>>dd;
           v=isDateValid(dd,mm,yy);
           if(v==false){
            bool nValid=true;
            while(nValid){
            cout<<"Please Enter Valid Date!"<<endl;   
            cout<<"Enter date of birth"<<endl;
             cin>>dd;
           if(isDateValid(dd,mm,yy)) nValid=false;      
           }
        }
        else{
            return ;
        }
       }
       }
           }
      
      
  
   
};
//professional data class
class ProfessionalData{
protected:
   string NOF;
   string job_profile;
   string project;
   public:
   //professional default constructor
   ProfessionalData(){
      NOF='\0';
      job_profile='\0';
      project='\0';
   }
  //professional data class input
   void getdata2(){
       string test;
       getline(cin,test);
       cout<<"enter Name_of_organisation:";
       getline(cin,NOF);
      
  
       cout<<"enter job_profile:";
       getline(cin,job_profile);
       
       cout<<"enter project:";
       getline(cin,project);
       
   }
  
    
};
//academic data input 
class AcademicData{
    protected:
    int yop,cgpa;
    string college,branch;
    public:
    //academic data default constructor
    AcademicData(){
       yop=0;
       cgpa=0.0;
       college='\0';
       branch='\0';
    }
    void getdata3(){//academic data input
        cout<<"enter year of passing:";
        cin>>yop;

        cout<<"enter CGPA:";
        cin>>cgpa;
        string test;
        getline(cin,test);
        cout<<"enter college name:";
        getline(cin,college);

        cout<<"enter branch:";
        getline(cin,branch);
    }
};

//child class with return values
class BioData:public PersonalData,public ProfessionalData,public AcademicData{
   public:
    string retname(){
       return Name;
   }
   string retsurname(){
       return surname;
   }
  string retaddress(){
       return address;
   }
   int retmobilno(){
       return mobile_no;
   }
   int retdd(){
       return dd;
   }
   int retmm(){
       return mm;
   }
   int retyy(){
       return yy;
   }
   string retnof(){
       return NOF;
   }
   string retjob(){
       return job_profile;
   }
   string retproject(){
       return project;
   }
   int retj(){
       return cgpa;
   }
   int yeop(){
       return yop;
   }
   string coll(){
       return college;
   }
   string bran(){
       return branch;
   }
    
};
void loop(){
   BioData c;
   int s,p,a;
   //switch case menu to switch between different outputs
   cout<<"||1-press to enter and display personal data||"<<endl;
   cout<<"||2-press to enter and display professional data||"<<endl;
   cout<<"||3-press to enter and display academic data||\n\n"<<endl;
   cin>>s;

   if(s==1){
       //output for personal data
       c.getdata1();
       cout<<endl;

      
       cout<<"Name:"<<c.retname()<<endl;
       cout<<"surName:"<<c.retsurname()<<endl;
       cout<<"address:"<<c.retaddress()<<endl;
       cout<<"mobileno:"<<c.retmobilno()<<endl;
       cout<<"Date-of-birth:"<<c.retdd()<<"-"<<c.retmm()<<"-"<<c.retyy()<<endl;
       cout<<"\n\n";
       int w;
       cout<<"Press 1:if you want to check out our other facilities\n";
       cout<<"Press any key :if you want to quit";
       cin>>w;
       if(w==1){
           loop();
       }
       else{
           exit(1);
       }
       
    }
   if(s==2){
       //output for professional data
       c.getdata2();
       cout<<endl;
       cout<<"Name-of-organisation:"<<c.retnof()<<endl;
       cout<<"job_profile:"<<c.retjob()<<endl;
       cout<<"project:"<<c.retproject()<<endl;
       cout<<"\n\n";
       int wo;
       cout<<"Press 1:if you want to check out our other facilities\n";
       cout<<"Press 0:if you want to quit";
       cin>>wo;
       if(wo==1){
           loop();
       }
       else{
           exit(1);
       }
       
       
   }
   if(s==3){
       //output for academic data
       c.getdata3();
       cout<<endl;
       cout<<"year-of-passing:"<<c.yeop()<<endl;
       cout<<"CGPA:"<<c.retj()<<endl;
       cout<<"college name:"<<c.coll()<<endl;
       cout<<"branch name:"<<c.bran()<<endl;
       cout<<"\n\n";
       int wt;
       cout<<"Press 1:if you want to check out our other facilities\n";
       cout<<"Press 0:if you want to quit";
       cin>>wt;
       if(wt==1){
           loop();
       }
       else{
           exit(1);
       }
   }
   
}
int main(){//this is the main console for the program 
    int f;
    cout<<"Welcome\n";
    cout<<"press 1:to use our facilities\n";
     cout<<"press 0:to quit\n";
     cin>>f;
     if(f==1){
         loop();
     }
     else{
         cout<<"thank you and come back next time\n";
         exit(1);
     }
}
