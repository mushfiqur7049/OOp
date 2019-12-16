#include"delete.h"

namespace D
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
//template<class T>
void deleteItem(string mdl,int n)
{

    if(n==1)
    {
        vector<Laptop>v;
        Laptop a;
        ifstream fin("laptop.txt");
        while(fin)
        {
            D::operator>>(fin,a);
            v.push_back(a);
        }

        fin.close();
        ofstream fout("laptop.txt");
        for(int i=0; i<v.size(); i++)
        {
            if(v[i].model==mdl) {cout<<mdl;continue;}
            else
                D::operator<<(fout,v[i]);
        }
    }

    else if(n==2)
    {
        vector<Apple>v;
        Apple a;
        ifstream fin("apple computer.txt");
        while(fin)
        {
            D::operator>>(fin,a);
            v.push_back(a);
        }
        fin.close();
        ofstream fout("apple computer.txt");
        for(int i=0; i<v.size(); i++)
        {
            if(v[i].model==mdl) continue;
            else
                D::operator<<(fout,v[i]);
        }
    }
    else if(n==3)
    {
        Super a;
        vector<Super>v;
        ifstream fin("super computer.txt");
        while(fin)
        {
            D::operator>>(fin,a);
            v.push_back(a);
        }

        fin.close();
        ofstream fout("super computer.txt");
        for(int i=0; i<v.size(); i++)
        {
            if(v[i].model==mdl) continue;
            else
                D::operator<<(fout,v[i]);
        }
    }
    cout<<"WANT TO RETURN TO MENU??(YES/NO): "<<endl;
    string s;
    cin>>s;
    if(s=="YES") menu();
}
