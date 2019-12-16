#include"childclass.h"
#include"main.h"



using namespace std;







Desktop:: Desktop()
{
    Computer();
    screen_display="0";
    resolution="0";
}
Desktop:: Desktop(const Desktop &a)
{
    price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
}
Desktop::  Desktop(int p,int w,int r,int s,string m,string s1, string s2)
{
    screen_display=s1;
    resolution=s2;
}
void  Desktop:: getScreenDisplay(string s)
{
    screen_display=s;
}
string Desktop::  putScreenDisplay()
{
    return screen_display;
}
void  Desktop:: getResolution(string s)
{
    resolution=s;
}
string  Desktop:: putResolution()
{
    return resolution;
}
istream& operator>>(istream& in,Desktop & b)
{
    cout<<"ENTER PRICE:";
    in>>b.price;
    cout<<endl<<"ENTER WARRANTY TIME:";
    in>>b.warranty;
    cout<<endl<<"ENTER RAM SIZE:";
    in>>b.RAM;
    cout<<endl<<"ENTER INTERNAL STORAGE:";
    in>>b.storage;
    cout<<endl<<"ENTER MODEL:";
    in>>b.model;
    cout<<endl<<"ENTER RESOLUTION:";
    in>>b.resolution;
    cout<<endl<<"ENTER SCREEN DISPLAY SIZE:";
    in>>b.screen_display;
    return in;

}
ostream& operator<<(ostream& out,Desktop &b)
{
    cout<<endl<<"PRICE:" ;
    out<<b.price;
    cout<<endl<<"WARRANTY:" ;
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:" ;
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE" ;
    out<<b.storage;
    cout<<endl<<"MODEL:" ;
    out<<b.model;
    cout<<endl<<"SCREEN DISPLAY:" ;
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:" ;
    out<<b.resolution;
    return out;
}






Laptop:: Laptop()
{
    Desktop();
    company="none";
    version="0";
}
Laptop::    Laptop(const Laptop &a)
{
     price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
    company=a.company;
    version=a.version;
}
Laptop::  Laptop(int p,int w,int r,int s,string m,string s1, string s2,string s3,string s4)
{
    Desktop(p,w,r,s,m,s1,s2);
    company=s3;
    version=s4;
}
void  Laptop:: getCompany(string s)
{
    company=s;
}
string Laptop:: putCompany()
{
    return company;
}
void Laptop:: getVersion(string s)
{
    version=s;
}
string Laptop:: putVersion()
{
    return version;
}
istream& operator>>(istream& in,Laptop & b)
{
    cout<<"INSERTING LAPTOP'S DETAILS "<<endl;
    cout<<"ENTER THE PRICE:" ;
    in>>b.price;
     cout<<endl<<"ENTER THE COMPANY NAME:" ;
    in>>b.company;
    cout<<endl<<"ENTER THE VERSION:" ;
    in>>b.version;
    cout<<endl<<"ENTER THE  MODEL:" ;
    in>>b.model;
    cout<<endl<<"ENTER THE GUARANTEE OR WARRANTY TIME:" ;
    in>>b.warranty;
    cout<<endl<<"ENTER THE RAM SIZE:" ;
    in>>b.RAM;
    cout<<endl<<"ENTER  THE INTERNAL STORAGE:" ;
    in>>b.storage;

    cout<<endl<<"ENTER THE LAPTOP CORE :" ;
    in>>b.resolution;
    cout<<endl<<"ENTER the SCREEN SIZE of laptop:" ;
    in>>b.screen_display;

    return in;
}
ostream& operator<<(ostream& out,Laptop &b)
{
    cout<<"PRICE:" ;
    out<<b.price;
     cout<<endl<<"COMPANY NAME:" ;
    out<<b.company;
    cout<<endl<<"VERSION:" ;
    out<<b.version;
    cout<<endl<<"MODEL:" ;
    out<<b.model;
    cout<<endl<<"WARRANTY:" ;
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:" ;
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE" ;
    out<<b.storage;

    cout<<endl<<"SCREEN DISPLAY:" ;
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:" ;
    out<<b.resolution;

    return out;
}




Apple:: Apple()
{
    Desktop();
    ios="0";
}
Apple::  Apple(const Apple &a)
{
     price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
    ios=a.ios;
}
Apple::  Apple(int p,int w,int r,int s,string m,string s1, string s2,string s3)
{
    Desktop(p,w,r,s,m,s1,s2);
    ios=s3;
}
void   Apple:: getIos(string s)
{
    ios=s;
}
string   Apple:: putIos()
{
    return ios;
}
istream& operator>>(istream& in,Apple & b)
{
    cout<<"INSERTING  APPLE LAPTOP'S DETAILS "<<endl;
    cout<<"ENTER THE PRICE:";
    in>>b.price;
    cout<<endl<<"ENTER THE IOS NO:";
    in>>b.ios;
    cout<<endl<<"ENTER THE GUARANTEE OR WARRANTY TIME:";
    in>>b.warranty;
    cout<<endl<<"ENTER THE RAM SIZE:";
    in>>b.RAM;
    cout<<endl<<"ENTER THE INTERNAL STORAGE:";
    in>>b.storage;
    cout<<endl<<"ENTER THE  MODEL:";
    in>>b.model;
    cout<<endl<<"ENTER THE APPLE LAPTOP'S CORE:";
    in>>b.resolution;
    cout<<endl<<"ENTER THE SCREEN SIZE OF LAPTOP:";
    in>>b.screen_display;
    return in;
}
ostream& operator<<(ostream& out,Apple &b)
{
    cout<<"PRICE:";
    out<<b.price;
    cout<<endl<<"IOS NO:";
    out<<b.ios;
    cout<<endl<<"WARRANTY:";
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:";
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE";
    out<<b.storage;
    cout<<endl<<"MODEL:";
    out<<b.model;
    cout<<endl<<"SCREEN DISPLAY:";
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:";
    return out;
}





Super :: Super()
{
    Desktop();
    version="0";
}
Super :: Super(const Super &a)
{
     price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
    version=a.version;
}
Super :: Super(int p,int w,int r,int s,string m,string s1, string s2,string s3)
{
    Desktop(p,w,r,s,m,s1,s2);
    version=s3;
}
void  Super :: getVersion(string s)
{
    version =s;
}
string   Super :: putVersion()
{
    return version ;
}
istream& operator>>(istream& in,Super & b)
{
    cout<<"INSERTING SUPER COMPUTER DETAILS "<<endl;
    cout<<"ENTER THE PRICE:" ;
    in>>b.price;
    cout<<endl<<"ENTER THE VERSION:" ;
    in>>b.version;
    cout<<endl<<"ENTER THE GUARANTEE OR WARRANTY TIME:" ;
    in>>b.warranty;
    cout<<endl<<"ENTER THE RAM SIZE:" ;
    in>>b.RAM;
    cout<<endl<<"ENTER THE INTERNAL STORAGE:" ;
    in>>b.storage;
    cout<<endl<<"ENTER THE MODEL:" ;
    in>>b.model;
    cout<<endl<<"ENTER THE CORE OF  COMPUTER :" ;
    in>>b.resolution;
    cout<<endl<<"ENTER THE SCREEN SIZE COMPUTER :" ;
    in>>b.screen_display;

    return in;
}
ostream& operator<<(ostream& out,Super &b)
{
    cout<<"PRICE:" ;
    out<<b.price;
    cout<<endl<<"VERSION:" ;
    out<<b.version;
    cout<<endl<<"WARRANTY:" ;
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:" ;
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE" ;
    out<<b.storage;
    cout<<endl<<"MODEL:" ;
    out<<b.model;
    cout<<endl<<"SCREEN DISPLAY:" ;
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:" ;
    out<<b.resolution;

    return out;
}
