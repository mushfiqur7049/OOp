#include"Computer.h"

using namespace std;
Computer :: Computer()
{
    price=0;
    warranty=0;
    RAM=0;
    storage=0;
    model="none";
}
Computer:: Computer(const Computer &product)
{

    price=product.price;
    warranty=product.warranty;
    RAM=product.RAM;
    storage=product.storage;
    model=product.model;
}
Computer:: Computer(int p,int w,int r,int s,string m)
{

    price=p;
    warranty=w;
    RAM=r;
    storage=s;
    model=m;
}
void Computer :: getPrice(int a)
{
    price=a;
}
int Computer :: putPrice()
{
    return price;
}
void Computer :: getWarranty(int a)
{
    warranty=a;
}
int Computer :: putWarranty()
{
    return warranty;
}
void Computer :: getRAM(int s)
{
    RAM=s;
}
int Computer :: putRAM()
{
    return RAM;
}
void Computer :: getStorage(int s)
{
    storage=s;
}
int Computer :: putStorage()
{
    return storage;
}
void Computer :: getModel(string s)
{
    model=s;
}
string Computer :: putModel()
{
    return model;
}
