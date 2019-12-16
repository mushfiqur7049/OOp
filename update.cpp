#include"update.h"
namespace U
{
int p;
int s;
string s1;
istream& operator>>(istream& in, Laptop & a)
{
    in>>p;
    a.getPrice(p);
    in>>s1;
    a.getCompany(s1);
    in>>s1;
    a.getVersion(s1);
    in>>s1;
    a.getModel(s1);
    in>>s;
    a.getWarranty(s);
    in>>s;
    a.getRAM(s);
    in>>s;
    a.getStorage(s);
    in>>s1;
    a.getResolution(s1);
    in>>s1;
    a.getScreenDisplay(s1);
    return in;
}
ostream& operator<< (ostream& out,Laptop & a)
{
    out<<a.putPrice()<<endl;
    out<<a.putCompany()<<endl;
    out<<a.putVersion()<<endl;
    out<<a.putModel()<<endl;
    out<<a.putWarranty()<<endl;
    out<<a.putRAM()<<endl;
    out<<a.putStorage()<<endl;
    out<<a.putResolution()<<endl;
    out<<a.putScreenDisplay()<<endl;
    return out;
}

istream& operator >>(istream &in, Apple & i)
{
    in>>p;
    i.getPrice(p);
    in>>s1;
    i.getIos(s1);
    in>>s;
    i.getWarranty(s);
    in>>s;
    i.getRAM(s);
    in>>s;
    i.getStorage(s);
    in>>s1;
    i.getModel(s1);
    in>>s;
    i.getResolution(s1);
    in>>s1;
    i.getScreenDisplay(s1);
    return in;

}
ostream& operator<< (ostream &out, Apple & i)
{
    out<<i.putPrice()<<endl;
    out<<i.putIos()<<endl;
    out<<i.putWarranty()<<endl;
    out<<i.putRAM()<<endl;
    out<<i.putStorage()<<endl;
    out<<i.putModel()<<endl;
    out<<i.putResolution()<<endl;
    out<<i.putScreenDisplay()<<endl;
    return out;
}
istream& operator >> (istream &in, Super & w)
{
    in>>p;
    w.getPrice(p);
    in>>s1;
    w.getVersion(s1);
    in>>s;
    w.getWarranty(s);
    in>>s;
    w.getRAM(s);
    in>>s;
    w.getStorage(s);
    in>>s1;
    w.getModel(s1);
    in>>s1;
    w.getResolution(s1);
    in>>s1;
    w.getScreenDisplay(s1);
    return in;
}

ostream & operator << (ostream &out, Super & w)
{
    out<<w.putPrice()<<endl;
    out<<w.putVersion()<<endl;
    out<<w.putWarranty()<<endl;
    out<<w.putRAM()<<endl;
    out<<w.putStorage()<<endl;
    out<<w.putModel()<<endl;
    out<<w.putResolution()<<endl;
    out<<w.putScreenDisplay()<<endl;

}

}

void update()
{
    cout<<"FOR UPDATING ANDROID PHONES PRESS 1"<<endl;
    cout<<"FOR UPDTING IPHONES PRESS 2"<<endl;
    cout<<"FOR UPDATING WINDOWS PHONES PRESS 3"<<endl;
    cout<<"ENTER YOUR CHOICE:  "<<endl;
    int i;
    cin>>i;
    if(i==1)
    {
        vector<Laptop>a;
        Laptop x;
        ifstream fin("laptop.txt");
        while(fin)
        {
            U::operator>>(fin,x);
            a.push_back(x);
        }
        int n;
        string s;
        cout<<"WHICH ITEM'S PRICE YOU WANT TO UPDATE? "<<endl;
        cin>>s;
        cout<<"WHAT WILL BE THE UPDATED PRICE? "<<endl;
        cin>>n;
        for(int j=0; j<a.size(); j++)
        {
            if(a[j].model == s)
            {
                a[j].price=n;
            }
        }
        fin.close();
        ofstream fout("laptop.txt");
        for(int j=0; j<a.size(); j++)
        {
            U::operator<<(fout,a[j]);
        }
        cout<<"*******UPDATE IS DONE SUCCESSFULLY*****"<<endl;

        cout<<"WANT TO RETURN TO MENU??(YES/NO): "<<endl;
        //string s;
        cin>>s;
        if(s=="YES") menu();

    }
    else if(i==2)
    {
      vector<Apple>a;
        Apple x;
        ifstream fin("apple computer.txt");
        while(fin)
        {
            U::operator>>(fin,x);
            a.push_back(x);
        }
        int n;
        string s;
        cout<<"WHICH ITEM'S PRICE YOU WANT TO UPDATE? "<<endl;
        cin>>s;
        cout<<"WHAT WILL BE THE UPDATED PRICE? "<<endl;
        cin>>n;
        for(int j=0; j<a.size(); j++)
        {
            if(a[j].model == s)
            {
                a[j].price=n;
            }
        }
        fin.close();
        ofstream fout("apple computer.txt");
        for(int j=0; j<a.size(); j++)
        {
            U::operator<<(fout,a[j]);
        }
        cout<<"*******UPDATE IS DONE SUCCESSFULLY*****"<<endl;

        cout<<"WANT TO RETURN TO MENU??(YES/NO): "<<endl;
        //string s;
        cin>>s;
        if(s=="YES") menu();

    }
    else if(i==3)
       {
      vector<Super>a;
        Super x;
        ifstream fin("super computer.txt");
        while(fin)
        {
            U::operator>>(fin,x);
            a.push_back(x);
        }
        int n;
        string s;
        cout<<"WHICH ITEM'S PRICE YOU WANT TO UPDATE? "<<endl;
        cin>>s;
        cout<<"WHAT WILL BE THE UPDATED PRICE? "<<endl;
        cin>>n;
        for(int j=0; j<a.size(); j++)
        {
            if(a[j].model == s)
            {
                a[j].price=n;
            }
        }
        fin.close();
        ofstream fout("super computer.txt");
        for(int j=0; j<a.size(); j++)
        {
            U::operator<<(fout,a[j]);
        }
        cout<<"*******UPDATE IS DONE SUCCESSFULLY*****"<<endl;

        cout<<"WANT TO RETURN TO MENU??(YES/NO): "<<endl;
        //string s;
        cin>>s;
        if(s=="YES") menu();

    }
}
