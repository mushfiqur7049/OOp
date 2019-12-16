#include"storage.h"

namespace Z
{
    ostream& operator<<(ostream& out, instructor c)
    {
        out<<c.name<<endl;
        out<<c.phone_no<<endl;
        out<<c.model<<endl;
        return out;
    }
}
void buyphone(int n)
{
    string ans;
    instructor Instrutor;
    cout<<"ENTER 1 TO STORE  OR 0 TO OTHER "<<endl;
    cin>>ans;
    if(ans=="1")
    {

        cout<<n<<endl;
        ifstream fin("store.txt");
        fin.close();
        cin>>Instrutor;
        ofstream fout("store.txt",fstream::app);
        Z::operator<<(fout,Instrutor);
         cout<<"THANKS FOR PURCHASING "<<Instrutor.model<<endl;
         string s= Instrutor.model;
         deleteItem(s,n);
    }
    else if(ans=="NO")
    {
        menu();
    }
}
