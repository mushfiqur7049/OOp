#include"instructor.h"

instructor:: instructor()
 {
    name="0";
    phone_no="0";
    item_list.insert(pair<string,int>("0",0));
    total=0;
    model="0";
 }
    instructor::  instructor(const instructor &c)
    {
        name=c.name;
    phone_no=c.phone_no;
    item_list=c.item_list;
    total=c.total;
    model=c.model;
    }
    instructor::  instructor(string s1,string s2, string m1,int m2,int t,string m)
    {
        name=s1;
        phone_no=s2;
        item_list.insert(pair<string,int>(m1,m2));
        total=t;
        model=m;
    }
    void instructor::  getName(string a)
    {
        name=a;
    }
    string instructor::  putName()
    {
        return name;
    }
    void  instructor:: getPhone_no(string a)
    {
        phone_no=a;
    }
    string instructor::  putPhone_no()
    {
        return phone_no;
    }
    void instructor::  getItemlist(string s,int n)
    {
        item_list.insert(pair<string,int>(s,n));
    }
    map<string,int>  instructor:: putItemlist()
    {
        return item_list;
    }
    void instructor:: getTotal(int t)
    {
        total=t;
    }
    int  instructor::putTotal()
    {
        return total;
    }

void instructor:: putModel(string m)
{
    model=m;
}
    string instructor:: getModel()
    {
        return model;
    }

istream& operator>>(istream& in,instructor & b)
{
    cout<<endl<<"ENTER YOUR NAME: ";
    in>>b.name;
    cout<<endl<<"ENTER YOUR PHONE NO: ";
    in>>b.phone_no;
    cout<<endl<<"ENTER THE MODEL AGAIN: ";
    in>>b.model;
    return in;
}
ostream& operator<<(ostream& out,instructor &b)
{
    cout<<endl<<"NAME: ";
    out<<b.name;
    cout<<endl<<"PHONE NO: ";
    out<<b.phone_no;
    cout<<endl<<"MODEL THAT IS PURCHASED: ";
    out<<b.model;
    return out;
}

