
#include"procedure.h"

void menu()
{
    system("CLS");
    cout<<"                      WELCOME TO COMPUTER MANAGMENT SYSTEM IN LABORATORY"<<endl;
    cout<<"         C             **************************************************            S"<<endl;
    cout<<"         O             __________________________________________________            Y"<<endl;
    cout<<"         M              **************************************************           S"<<endl;
    cout<<"         P             **     PLEASE ENTER 1 FOR INSERT  ELEMENTS      **            T"<<endl;
    cout<<"         U             **     PLEASE ENTER 2 FOR SEARCH  ELEMENTS      **            E"<<endl;
    cout<<"         T             **     PLEASE ENTER 1 FOR UPDATE  ELEMENTS      **            M"<<endl;
    cout<<"         E             **     PLEASE ENTER OTHER INTEGER FOR EXIST     **            "<<endl;
    cout<<"         R            __________________________________________________             "<<endl;
    cout<<"                      **************************************************             "<<endl;

    cout<<"                       ENTER YOUR CHOICE:  ";
    int n;
    cin>>n;
    if(n==1)
    {
        system("CLS");
        cout<<"ENTER PASSWORD: ";
        string pass;
        cin>>pass;
        if(pass=="open")
        {
            addItem();
        }
        else
        {
            cout<<"*****WRONG PASSWORD*****"<<endl;
            cout<<"*******PLEASE TRY AGAIN******"<<endl;
            menu();
        }
    }
    else if(n==2)
    {
        system("CLS");
        cout<<"ENTER PASSWORD: ";
        string pass;
        cin>>pass;
        if(pass=="open")
        {
            searchitem();

        }
        else
        {
            cout<<"*****WRONG PASSWORD*****"<<endl;
            cout<<"*******PLEASE TRY AGAIN******"<<endl;
            menu();
        }
    }
    else if(n==3)
    {
        system("CLS");
        cout<<"ENTER PASSWORD: ";
        string pass;
        cin>>pass;
        if(pass=="open")
        {
            update();

        }
        else
        {
            cout<<"*****WRONG PASSWORD*****"<<endl;
            cout<<"*******PLEASE TRY AGAIN******"<<endl;
            menu();
        }





    }




}
