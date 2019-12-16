#include"insert.h"

namespace X
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






 int  n;
template<class T>
void input(ostream & fout,T temp)
{
    X::operator<<(fout,temp);
        cout<<"     IF YOU WANT TO INSERT MORE PLEASE ENTER 1 ELSE 0 : ";
        cin>>n;

        if(n==1)
            addItem();
        else if(n==0)
        menu();
            ///procedure();

}
void addItem()
{
    int choice;

    system("CLS");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<right<<setw(25)<<""<<""<<""<<"PLEASE ENTER 1 FOR INSERT LAPTOP'S DETAILS"<<endl;
    cout<<right<<setw(25)<<""<<""<<""<<"PLEASE ENTER 2 FOR INSERT APPLE'S COMPUTER DETAILS"<<endl;
    cout<<right<<setw(25)<<""<<""<<""<<"PLEASE ENTER 3 FOR INSERT SUPER COMPUTER DETAILS"<<endl;
    cout<<right<<setw(50)<<" PLEASE ENTER YOUR OPTION:";
    cin>>choice;
    if(choice==1)
    {
         system("CLS");
        Laptop android;
        ifstream fin("laptop.txt");
        fin.close();
        ofstream fout("laptop.txt",fstream::app);
        cin>>android;
        //android_.push_back(android);
        input<Laptop>(fout,android);
    }

    else if(choice == 2)
    {
         system("CLS");
        Apple iphone;
        ifstream fin("apple computer.txt");
        fin.close();
        ofstream fout("apple computer.txt",fstream::app);
        cin>>iphone;
        //iphone_.push_back(iphone);
       input<Apple>(fout,iphone);
    }
    else if(choice==3)
    {  system("CLS");
        Super windows;
        ifstream fin("super computer.txt");
        fin.close();;
        ofstream fout("super computer.txt",fstream::app);
        cin>>windows;
        //windows_.push_back(windows);
        input<Super>(fout,windows);
    }
}
