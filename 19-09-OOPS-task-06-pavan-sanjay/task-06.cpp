#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<string>
using namespace std;
class PersonalData{
  protected:
   string Name,surname,address;
   int mobile_no,dd,mm,yy;
   public:
   PersonalData(){
      Name='\0';
      surname='\0';
      address='\0';
      mobile_no=0;
      dd=0;
      mm=0;
      yy=0;
   }
   void getdata1(){
       string test;
       getline(cin,test);
       cout<<"enter name:";
       getline(cin,Name);
       cout<<"enter surname:";
       getline(cin,surname);
       cout<<"enter Address:";
       getline(cin,address);
       cout<<"enter mobile number:";
       cin>>mobile_no;
       cout<<"enter date of birth in (dd-mm-yy) of birth:";//enter value of dd,mm and yy seperately
       cin>>dd>>mm>>yy;/*for example : enter date of birth in (dd-mm-yy) of birth:23
                        *05
                        *2002*/
   }
  
   
};
class ProfessionalData{
protected:
   string NOF;
   string job_profile;
   string project;
   public:
   ProfessionalData(){
      NOF='\0';
      job_profile='\0';
      project='\0';
   }
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
class AcademicData{
    protected:
    int yop,cgpa;
    string college,branch;
    public:
    AcademicData(){
       yop=0;
       cgpa=0.0;
       college='\0';
       branch='\0';
    }
    void getdata3(){
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
int main(){
   BioData c;
   int s;
   cout<<"||1-press to enter and display personal data||"<<endl;
   cout<<"||2-press to enter and display professional data||"<<endl;
   cout<<"||3-press to enter and display academic data||\n\n"<<endl;
   cin>>s;
   if(s==1){
       c.getdata1();
       cout<<endl;
       cout<<"Name:"<<c.retname()<<endl;
       cout<<"surName:"<<c.retsurname()<<endl;
       cout<<"address:"<<c.retaddress()<<endl;
       cout<<"mobileno:"<<c.retmobilno()<<endl;
       cout<<"Date-of-birth:"<<c.retdd()<<"-"<<c.retmm()<<"-"<<c.retyy()<<endl;
   }
   if(s==2){
       c.getdata2();
       cout<<endl;
       cout<<"Name-of-organisation:"<<c.retnof()<<endl;
       cout<<"job_profile:"<<c.retjob()<<endl;
       cout<<"project:"<<c.retproject()<<endl;
       
   }
   if(s==3){
       c.getdata3();
       cout<<endl;
       cout<<"year-of-passing:"<<c.yeop()<<endl;
       cout<<"CGPA:"<<c.retj()<<endl;
       cout<<"college name:"<<c.coll()<<endl;
       cout<<"branch name:"<<c.bran()<<endl;
   }
   
}
