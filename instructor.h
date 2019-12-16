#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include<iostream>
#include<string>
#include<map>
#include<utility>
using namespace std;
class instructor
{
protected:

    map<string,int> item_list;
    int total;

public:
    string name;
    string phone_no;
    string model;
    instructor();
    instructor(const instructor &c);
    instructor(string s1,string s2, string m1,int m2,int t,string m);
    void getName(string a);
    string putName();
    void getPhone_no(string a);
    string putPhone_no();
   void getItemlist(string s,int n);
    map<string,int> putItemlist();
    void getTotal(int t);
    int putTotal();

    void putModel(string m);
    string getModel();
    friend istream& operator>>(istream& in,instructor & b);
    friend ostream& operator<<(ostream& out,instructor &b);
};


#endif // INSTRUCTOR_H
