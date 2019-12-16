#ifndef CHILDCLASS_H
#define CHILDCLASS_H
#include"Computer.h"
#include"main.h"


using namespace std;




class Desktop : public Computer
{
protected:
    string screen_display;
    string resolution;
public:
    Desktop();
    Desktop(const Desktop &a);
     Desktop(int p,int w,int r,int s,string m,string s1, string s2);
    void getScreenDisplay(string s);
    string putScreenDisplay();
    void getResolution(string s);
    string putResolution();
    friend istream& operator>>(istream& in,Desktop & b);
    friend ostream& operator<<(ostream& out,Desktop &b);

};
class Laptop:public Desktop
{
protected:
    string company;
    string version;
public:
    Laptop();
    Laptop(const Laptop &a);
    Laptop(int p,int w,int r,int s,string m,string s1, string s2,string s3,string s4);
    void getCompany(string s);
    string putCompany();
    void getVersion(string s);
    string putVersion();
    friend istream& operator>>(istream& in,Laptop & b);
    friend ostream& operator<<(ostream& out,Laptop &b);


};
class Apple:public Desktop
{
protected:
    string ios;
public:
    Apple();
    Apple(const Apple &a);
    Apple(int p,int w,int r,int s,string m,string s1, string s2,string s3);
    void getIos(string s);
    string putIos();
    friend istream& operator>>(istream& in,Apple & b);
    friend ostream& operator<<(ostream& out,Apple &b);
};
class Super:public Desktop
{
protected:
    string version;
public:
    Super();
    Super(const Super &a);
    Super(int p,int w,int r,int s,string m,string s1, string s2,string s3);
    void getVersion(string s);
    string putVersion();
    friend istream& operator>>(istream& in,Super & b);
    friend ostream& operator<<(ostream& out,Super &b);
};
#endif // CHILDCLASS_H
