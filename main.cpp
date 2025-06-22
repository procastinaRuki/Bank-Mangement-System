#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
class BANK
{

 private:
     int total,cashh;
     string id,id_for_login,password_for_login;
     struct PERSON
     {
        string name,ID,address,password;
        int contract,cash;


    } person[100] ;
 public:
     BANK()
     {
         total=0;
     }

    void Front_Page();
    void Create_page();
    void Login_Page();
    void Choice_Page();
    void Update_Information();
    void Transactions();
    void Show_Information();
    void Delete_Information();
    void Exit_Page();

};

void BANK::Front_Page()
{
    system("CLS");
    cout<<"\n\n";
    cout<<"\t\t*******************************"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*          OPTIONS            *"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*******************************"<<endl;
    cout<<"\n\n";
    cout<<"\n\n\t\tPRESS 1 TO CREATE ACCOUNT"<<endl;
    cout<<"\n\n\t\tPRESS 2 TO LOGIN EXISTING ACCOUNT"<<endl;
    cout<<"\n\n\t\tPRESS 3 TO EXIT"<<endl;

    char ch;
    ch=getch();
    switch(ch)
    {
    case '1':
        BANK::Create_page();
        break;
    case '2':
        BANK::Login_Page();
        break;
    case '3':
        BANK::Exit_Page();
        break;

    default:
        cout<<"\n\n\n\t\t\aINVALID INPUT"<<endl;
        Sleep(2000);
        break;
    }


}
void BANK::Create_page()
{
    system("CLS");
    cout<<"\n\n";
    cout<<"\t\t*******************************"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*     CREATE ACCOUNT          *"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*******************************"<<endl;
    cout<<"\n\n";
    cout<<"\n\t\tENTER NAME     : ";
    cin>>ws;
    getline(cin,person[total].name);
    cout<<"\n\t\tENTER ID       : ";
    getline(cin,person[total].ID);
    cout<<"\n\t\tENTER ADDRESS  : ";
    cin>>ws;
    getline(cin,person[total].address);
    cout<<"\n\t\tENTER CONTRACT : 0";
    cin>>ws;
    cin>>person[total].contract;
    cout<<"\n\t\tENTER CASH     : ";
    cin>>person[total].cash;
    cout<<"\n\t\tENTER PASSWORD : ";
    cin>>ws;
    getline(cin,person[total].password);
    total++;
    cout<<"\n\n\n\t\tYOUR ACCOUNT IS CREATING";
    for(int n=1;n<=5;n++)
    {
        cout<<".";
        Sleep(1000);
    }
    BANK::Front_Page();

}
void BANK::Login_Page()
{
    system("CLS");
    int flag1=0;
    cout<<"\n\n";
    cout<<"\t\t*******************************"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*     LOGIN IN YOUR ACCOUNT   *"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*******************************"<<endl;
    cout<<"\n\n\n\t\tENTER YOUR ID       : ";
    cin>>ws;
    getline(cin,id_for_login);
    cout<<"\n\n\n\t\tENTER YOUR PASSWORD : ";
    cin>>ws;
    getline(cin,password_for_login);
    for(int i=0;i<total;i++)
    {
        if(id_for_login==person[i].ID&&password_for_login==person[i].password)
        {
            flag1=1;

        }

    }
    if(flag1==1)
    {
      cout<<"\n\n\n\t\tYOU ARE SUCCESSFULLY LOGGED IN";
      for(int n=1;n<=5;n++)
      {
          cout<<".";
          Sleep(1000);
      }

            BANK::Choice_Page();
    }

    else
    {
        cout<<"\n\n\n\t\t\a WRONG ID OR WRONG PASSWORD !! "<<endl;
        Sleep(2000);
            BANK::Front_Page();
    }




}
void BANK::Choice_Page()
{
    system("CLS");
    char ch;
    cout<<"\n\n";
    cout<<"\t\t*******************************"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*      SELECT OPTION          *"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*******************************"<<endl;
    cout<<"\n\n\n\t  PRESS 1 FOR UPDATE INFORMATION OF YOUR EXISTING ACCOUNT "<<endl;
    cout<<"\n\n\n\t  PRESS 2 FOR CHECK THE DETAILS OF YOUR EXISTING ACCOUNT  "<<endl;
    cout<<"\n\n\n\t  PRESS 3 FOR TRANSACTIONS"<<endl;
    cout<<"\n\n\n\t  PRESS 4 FOR REMOVE YOUR EXISTING ACCOUNT "<<endl;
    cout<<"\n\n\n\t  PRESS 5 FOR LOGOUT YOUR ACCOUNT "<<endl;
    ch=getch();
    switch(ch)
    {
    case '1':
        BANK::Update_Information();
        break;
    case '2':
        BANK::Show_Information();
        break;
    case '3':
        BANK::Transactions();
        break;
    case '4':
        BANK::Delete_Information();
        break;
    case '5':
        BANK::Front_Page();
        break;
    default:
        cout<<"INVALID INPUT "<<endl;
        break;

    }


}
void BANK::Update_Information()
{
    system("CLS");
    int flag=0;
    cout<<"\n\n";
    cout<<"\t\t*******************************"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*    UPDATE INFORMATION       *"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*******************************"<<endl;
    cout<<"\n\n\n\t\t ENTER YOUR ID FOR UPDATING THE INFORMATION "<<endl;
    cout<<"\n\t\tID : ";
    cin>>ws;

    getline(cin,id);
    for(int i=0;i<total;i++)
    {
        if(id==person[i].ID)
        {
            flag=1;
           cout<<"\n\t\tPREVIOUS INFORMATION : "<<endl;
           cout<<"\n\n";
    cout<<"\t NAME     : "<<person[i].name<<endl;
    cout<<"\t ID       : "<<person[i].ID<<endl;
    cout<<"\t ADDRESS  : "<<person[i].address<<endl;
    cout<<"\t CONTRACT : 0"<<person[i].contract<<endl;
    cout<<"\t CASH     : "<<person[i].cash<<endl;
    cout<<"\t PASSWORD : "<<person[i].password<<endl;
    Sleep(3000);
          cout<<"\n\n";
          cout<<"\n\t\t ENTER NEW INFORMATION : "<<endl;
          cout<<"\n\n";
    cout<<"\tENTER NAME     : ";
    cin>>ws;
    getline(cin,person[i].name);
    cout<<"\tENTER ID       : ";
    cin>>ws;

    getline(cin,person[i].ID);
    cout<<"\tENTER ADDRESS  : ";
    cin>>ws;

    getline(cin,person[i].address);
    cout<<"\tENTER CONTRACT : 0";
    cin>>person[i].contract;
    cout<<"\tENTER CASH     : ";
    cin>>person[i].cash;
    cout<<"\tENTER PASSWORD : ";
    cin>>ws;

    getline(cin,person[i].password);
    Sleep(3000);

    BANK::Choice_Page();

   }
}
        if(flag==0)
        {
            cout<<"\n\n\t\t\aTHERE IS NO SUCH RECORD FOUND"<<endl;
            Sleep(2000);

            BANK::Choice_Page();
        }


}



void BANK::Show_Information()
{
    system("CLS");
    int flag=0;
    cout<<"\n\n";
    cout<<"\t*******************************"<<endl;
    cout<<"\t*                             *"<<endl;
    cout<<"\t*      SHOW INFORMATION       *"<<endl;
    cout<<"\t*                             *"<<endl;
    cout<<"\t*******************************"<<endl;
    cout<<"\n\n\n\t\t ENTER YOUR ID FOR CHECK YOUR INFORMATION "<<endl;
    cout<<"\n\t\tID : ";
    cin>>ws;
    getline(cin,id);
    for(int i=0;i<total;i++)
    {
        if(id==person[i].ID)
        {
            flag=1;
           cout<<"\n\tEXISTING INFORMATION : "<<endl;
    cout<<"\t NAME     : "<<person[i].name<<endl;
    cout<<"\t ID       : "<<person[i].ID<<endl;
    cout<<"\t ADDRESS  : "<<person[i].address<<endl;
    cout<<"\t CONTRACT : 0"<<person[i].contract<<endl;
    cout<<"\t CASH     : "<<person[i].cash<<endl;
    cout<<"\t PASSWORD : "<<person[i].password<<endl;
    Sleep(5000);
          BANK::Choice_Page();


       }
    }
    if(flag==0)
    {
        cout<<"\n\n\t\a THERES IS NO SUCH RECORD FOUND !!"<<endl;
            Sleep(2000);
            BANK::Choice_Page();

    }
}


void BANK ::Transactions()
{
    system("CLS");
    char ch;
    int flag=0;
    cout<<"\n\n";
    cout<<"\t\t*******************************"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*          TRANSACTION        *"<<endl;
    cout<<"\t\t*                             *"<<endl;
    cout<<"\t\t*******************************"<<endl;
    cout<<"\n\n\n\t\t ENTER YOUR ID FOR TRANSACT YOUR AMOUNT "<<endl;
    cout<<"\n\t\tID : ";
    cin>>ws;
    getline(cin,id);
    for(int i=0;i<total;i++)
    {
        if(id==person[i].ID)
        {
            flag=1;
            system("CLS");
           cout<<"\n\n\n\t\tEXISTING INFORMATION : "<<endl;
           cout<<"\n\n";
    cout<<"\n\t NAME     : "<<person[i].name<<endl;
    cout<<"\n\t ID       : "<<person[i].ID<<endl;
          cout<<"\n\n";
    cout<<"\n\n\t\tEXISTING AMMOUNT"<<endl;
    cout<<"\n\n\t\t CASH     : "<<person[i].cash<<endl;

    cout<<"\n\n\tPRESS 1 FOR DEPOSITE MONEY"<<endl;
    cout<<"\n";
    cout<<"\n\n\tPRESS 2 FOR WITHDRAW MONEY"<<endl;

    ch=getch();
    switch(ch)
    {
    case '1':
    cout<<"\n\n\n";
    cout<<"\t\tENTER HOW MUCH YOU WANT TO DEPOSITE"<<endl;
    cout<<"\n\n\n\t\tAMOUNT : ";
    cin>>cashh;
    person[i].cash+=cashh;
    cout<<"\n\n\n\t\tYOUR NEW CASH IS : "<<person[i].cash<<endl;
    Sleep(3000);
    BANK::Choice_Page();
        break;
    case '2':
        Back:
        system("CLS");
    cout<<"\n\n\n\t\tENTER HOW MUCH YOU WANT TO WITHDRAW"<<endl;
    cout<<"\n\n\t\tAMOUNT : ";
    cin>>cashh;
    if(cashh>person[i].cash)
    {
        cout<<"\n\n\t\tYOUR EXISTING CASH IS JUST : "<<person[i].cash<<endl;
        Sleep(2000);
        goto Back;

    }
    else
    {
        person[i].cash-=cashh;
        cout<<"\n\n\t\tYOUR NEW CASH IS : "<<person[i].cash<<endl;
        Sleep(3000);
        BANK::Choice_Page();
    }

     break;
    default:
     cout<<"\a\n\n\n\t\t\aINVALID INPUT"<<endl;
     Sleep(2000);
     BANK::Choice_Page();
     break;
 }
}
}
if(flag==0)
{
 cout<<"\n\n\t\a NO SUCH RECORD FOUND !!"<<endl;
            Sleep(2000);
}


}



void BANK::Delete_Information()
{
    system("CLS");
    int flag=0;
    char ch;
    cout<<"\n\n";
    cout<<"\t\t\t*******************************"<<endl;
    cout<<"\t\t\t*                             *"<<endl;
    cout<<"\t\t\t*    DELETE INFORMATION       *"<<endl;
    cout<<"\t\t\t*                             *"<<endl;
    cout<<"\t\t\t*******************************"<<endl;
    cout<<"\n\n\n";
    cout<<"\t\t  PRESS 1 FOR DELETE YOUR SPECIFIC INFORMATION"<<endl;
    cout<<"\n";
    cout<<"\t\t  PRESS 2 FOR DELETE FULL BANK RECORD"<<endl;
ch=getch();
switch(ch)
{
case '1':
    cout<<"\n\n\n\t\t ENTER YOUR ID FOR DELETE YOUR ACCOUNT "<<endl;
    cout<<"\n\t\tID : ";
    cin>>ws;
    getline(cin,id);
    for(int i=0;i<total;i++)
    {

     if(id==person[i].ID)
        {
            flag=1;
            for(int j=i;j<total;j++)
            {
                person[j].name=person[j+1].name;
                person[j].ID=person[j+1].ID;
                person[j].address=person[j+1].address;
                person[j].contract=person[j+1].contract;
                person[j].cash=person[j+1].cash;
                person[j].password=person[j+1].password;

            }

        total--;
        BANK::Choice_Page();

        }

    }
    if(flag==0)
    cout<<"\n\n\n\t\t\aTHERE IS NO SUCH RECORD FOUND"<<endl;
    Sleep(2000);
    BANK::Choice_Page();
    break;

case '2':
    total=0;
    cout<<"\n\n\n\t\tALL ACCOUNTS ARE DELETED"<<endl;
    Sleep(2000);
    BANK::Front_Page();
    break;
default:
    cout<<"\n\n\n\t\t\aINVALID INPUT"<<endl;
    Sleep(2000);
    BANK::Delete_Information();
    break;
}
}

void BANK::Exit_Page()
{

    exit(0);

}


int main()
{

    HOME:
        system("CLS");
    char answer;
    cout<<"\n\n";
    cout<<"\t\t\t\t\t_________________________________"<<endl;
    cout<<"\t\t\t\t\t*                               *"<<endl;
    cout<<"\t\t\t\t\t*                               *"<<endl;
    cout<<"\t\t\t\t\t*    BANK MANAGEMENT SYSTEM     *"<<endl;
    cout<<"\t\t\t\t\t*                               *"<<endl;
    cout<<"\t\t\t\t\t*                               *"<<endl;
    cout<<"\t\t\t\t\t_________________________________"<<endl;

    cout<<"\n\n";
    for(int n=0;n<6;n++)
    {
        if(n==0)
        cout<<"\t\t\t\tWELCOME  ";
        else if(n==1)
            cout<<"TO    ";
        else if(n==2)
            cout<<"IIT   ";
        else if(n==3)
            cout<<"BANK  ";
        else if(n==4)
            cout<<"JAHANGIRNAGAR  ";
        else if(n==5)
            cout<<"UNIVERSITY  ";
        Sleep(1000);
    }

     cout<"\n\n";


    cout<<"\n\n\t\t\t\t\t_________________________________"<<endl;
    cout<<"\t\t\t\t\t*                               *"<<endl;
    cout<<"\t\t\t\t\t*        CAPCHA METHOD          *"<<endl;
    cout<<"\t\t\t\t\t*                               *"<<endl;
    cout<<"\t\t\t\t\t_________________________________"<<endl;

    cout<<"\n\n";

    Back:

    cout<<"\n\n\n\t\t\tANSWER THE FOLLOWING QUSETION FOR ENTER"<<endl;
    cout<<"\n\n\t\t\tTHE VALUE OF 3+5 ?"<<endl;
    cout<<"\n\t\t\tSOLUTION : ";
    cin>>answer;
    if(answer=='8')
    {
        cout<<"\n\n\t\tLETS EXPLORE THE BANK";
        for(int n=0;n<15;n++)
        {
            cout<<"*";
            Sleep(100);
        }
       BANK object;
       system("CLS");
       object.Front_Page();

    }
    else
    {
    system("CLS");
    cout<<"\n\n\n\n\t\t\a!!! ROBOTS ARE NOT ALLOWED !!!"<<endl;
    Sleep(3000);
    goto Back;
    }

  getch();


}

