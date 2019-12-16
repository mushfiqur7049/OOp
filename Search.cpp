
#include"Search.h"

vector<Laptop>android_;
vector<Apple>iphone_;
vector<Super>windows_;
namespace Y
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
    return out;
}
}








template<class T>
vector<T> in(istream &fin,T temp)
{
    vector<T>t;
    while(fin)
    {
        Y::operator>>(fin,temp);
        t.push_back(temp);
    }
    return t;
}
void searchitem()
{
    char choice;
    cout<<"SEARCHING FOR FINDING "<<endl;
    cout<<"PLEASE ENTER 1 FOR SEARCHING LAPTOP"<<endl;
    cout<<"PLEASE ENTER 1 FOR SEARCHING APPLE LAPTOP"<<endl;
    cout<<"PLEASE ENTER 3 FOR SEARCHING SUPER COMPUTER"<<endl;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice;
    if(choice =='1')
    {
        //cout<<"llll";
        string modl;
        int f=0;
        Laptop android;
        ifstream fin("laptop.txt");
        android_=in<Laptop>(fin,android);
        cout<<"PLEASE ENTER THE MODEL:";
        cin>>modl;
        for(int i=0; i<android_.size(); i++)
        {
            if(modl==android_[i].model)
            {
                cout<<"AVAILABLE"<<endl;
                f=1;
                buyphone(1);
            }
        }
        if(f==0)
        {
            cout<<"NOT AVAILABLE TRY AGAIN\n";
            system("CLS");
            searchitem();
        }
    }
    else if(choice=='2')
    {
        string modl;
        int f=0;
        Apple iphone;
        ifstream fin("apple computer.txt");
        iphone_=in<Apple>(fin,iphone);
        cout<<"PLEASE ENTER THE MODEL:";
        cin>>modl;
        for(int i=0; i<iphone_.size(); i++)
        {
            if(modl==iphone_[i].model)
            {
                cout<<"AVAILABLE"<<endl;
                f=1;
               buyphone(2);
            }
        }
        if(f==0)
        {
            cout<<"NOT AVAILABLE. TRY AGAIN\n";
            system("CLS");
            searchitem();
        }

    }
    else if(choice=='3')
    {
        string modl;
        int f=0;
        Super windows;
        ifstream fin("super computer.txt");
        windows_=in<Super>(fin,windows);
        cout<<"PLEASE ENTER THE MODEL:";
        cin>>modl;
        for(int i=0; i<windows_.size(); i++)
        {
            if(modl==windows_[i].model)
            {
                cout<<"AVAILABLE"<<endl;
                cout<<windows_[i].price;
                f=1;
                buyphone(3);
            }
        }
        if(f==0)
        {
            cout<<"NOT AVAILABLE. TRY AGAIN\n";
            system("CLS");
            searchitem();
        }

    }
}
