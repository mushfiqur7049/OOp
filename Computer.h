#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include<string>
using namespace std;
class Computer
{
protected:

    int warranty;
    int RAM;
    int storage;
public:
    int price;
    string model;
public:
    Computer();
    Computer(int p,int w,int r,int s,string m);
    Computer(const Computer &product);
    void getPrice(int a);
    int putPrice();
    void getWarranty(int a);
    int putWarranty();
    void getRAM(int s);
    int putRAM();
    void getStorage(int s);
    int putStorage();
    void getModel(string s);
    string putModel();
};



#endif // COMPUTER_H
