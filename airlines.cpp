#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
#include<iomanip.h>                                                                                                                                                                                                                                                                     ar dl[5],dr[5],yy[5],d[5],m[5],y[5];
 int option;

 void book_ticket();
 void display();

 void report_display(int i);
 void update(char *c)
 {
 strcpy(dest,c);}

 void date(char *e)
 {
 strcpy(dl,e);
 }

 void date2(char *a)
 {
 strcpy(dr,a);
 }

 char* s_name()
 {return (name);}

 char* s_pnr()
 {return(pnr);
 }
   long phone;
   char pnr[10];
   char name[20];
  long flight;
};


void plane( );
void flight::book_ticket()
{

  int i=2345765;
  cout<<endl;
  gotoxy(6,9);
cout<<"\tENTER YOUR NAME\n";
gotoxy(35,9);
cin>>name;


int login();
void border3( );
void border2( );
void deleted_design ( );
void designbox() ;
int WORLDCLOCK();

			
void delay();
void delay()
{
  for(double i=0;i<39999;i++)
  {
  }

}


int login()
{
char uname[]="arsproject" , password[]="ars1234" ;
char username[15];
char pswd[10] ,ch;
int i=0,k ;
gotoxy (23,5);
	 cout<<">>>>WELCOME TO AIRLINE RESERVATION  <<<<"<<endl;
	 gotoxy(28,7);
	 cout<<" >> .... login.... << "<<endl;
gotoxy(30,9);
cout<<"USERNAME:" ;
gotoxy(40,9);
gets ( username) ;

gotoxy (30,11);
cout<<"PASSWORD: ";
k=40;

do
{
gotoxy(k,11);
ch=getch();
if(ch==13)
break;
cout<<"*";
pswd[i]=ch;
i++;
k++;
}
  while(ch!=13);
pswd[i]='\0'___________________________|"<<endl;
}


void ticket_1()  //function for ticket box
{ cout<<endl;
	int width=76;
	int height=16;
   int k;

	for (k = 0; k < width+3; k++)
	{
	cout<<"*";
   }
cout<<endl;



for(k = 0; k< height-6; k++)//k=dots
{
	cout<<"*";
	for(int j=0;j<width-30;j++)
	cout<<" ";
	cout<<"#";
	for(int i = 0; i < width-46; i++)
	cout<<" ";
	cout<<"*"<<endl;
}

for (k = 0; k < width+3; k++)
{
	cout<<"*";
}

}
void flight::display()
{
 clrscr();
ticket_1();
gotoxy(30,3);
cout<<"CARTER AIRWAYS";
gotoxy(12,4);
cout<<"Boarding Pass";
gotoxy(35,5);

if(cab=='F'||cab=='f')
cout<<"FIRST CLASS";
else
if(cab=='e'||cab=='E')
cout<<"ECONOMY";
else
if(cab=='B'||cab=='b')
cout<<"BUSINESS";



cout<<"\n\n\n";
gotoxy(3,6);
cout<<"PASSENGER NAME:";
gotoxy(3,7);
cout<<name;
gotoxy(3,8);
cout<<"FROM:";
 gotoxy(3,9);
cout<<origin;
gotoxy(3,10);
cout<<"TO:";
gotoxy(3,11);
cout<<dest;
gotoxy(30,6);
cout<<"DATE:";
gotoxy(30,7);
cout<<dl;
gotoxy(40,6);
cout<<"TIME:";
gotoxy(40,7);
cout<<time;
gotoxy(30,8);
cout<<"FLIGHT:";
gotoxy(30,9);
cout<<"CA"<<flight;



//small boarding pass
gotoxy(55,4);
cout<<"Boarding Pass";
gotoxy(55,5);

if(cab=='F'||cab=='f')
cout<<"FIRST CLASS";
else
if(cab=='e'||cab=='E')
cout<<"ECONOMY";
else
if(cab=='B'||cab=='b')
cout<<"BUSINESS";

cout<<"\n\n\n";
gotoxy(5t<<"You Are Travelling From\n";
gets(origin);
gotoxy(30,4);
cout<<"**************";
gotoxy(30,5);
cout<<"FLIGHT DETAILS";
gotoxy(30,6);
cout<<"**************";
cout<<endl;
cout<<endl;


cout<<"SR.NO\t FLIGHT NUMBER\t DESTINATION\t PRICE\t BOARDING TIME\t  TIME\t\n ";
cout<<"1.\t\tCA123\tMumbai\t\tRs.21000\t2:00pm\t2:15pm\n";
cout<<"2.\t\tCA234\tCochin\t\tRs.25000\t4:00am\t4:10am\n";
cout<<"3.\t\tCA456\tSan Francisco\tRs.30000\t5:00pm\t5:15pm\n";
cout<<"4.\t\tCA768\tDubai\t\tRs.12000\t7:00am\t7:13am\n";
cout<<"5.\t\tCA987\tCochin\t\tRs.35000\t8:00am\t8:10am\n";

 cout<<"Enter Your Options\n ";
cin>>option;

switch(option)
{
case 1 :
	 charge=21000;
	 flight=123;

	 strcpy(dest,"mumbai");
	 strcpy(time,"2:00pm");


  break;
case 2 : charge=25000;
	   flight=234;

	 strcpy(dest,"Cochin");
	 strcpy(time,"4:00am");
   break;

case 3 : charge=30000;
	flight=456;

	strcpy(dest,"San Franciso");
	 strcpy(time,"5:00pm");

	break;

case 4 : charge=15000;
	  flight=768;

	 strcpy(dest,"Dubai");
	 strcpy(time,"7:00am");



   break;
case 5 : charge=35000;
	  flight=987;

	 strcpy(dest,"Cochin");
	 strcpy(time,"8:00am");


break;
default :cout<<"\tTravelling Not Possible\n";
}

cout<<"SELECT"<<endl;
cout<<"1.RETURN"<<" "<<"OR"<<"2.ONE WAY"<<endl;
cout<<"ENTER YOUR CHOICE\n";
int source;
cin>>source;

cout<<"OUTBOUND (Date Of Departure) (*)\n";
cout<<"dd/mm/yy"<<endl;
gets(dl);

if(source==1)
{
cout<<"REURN(*):\n";
cout<<"dd/mm/yy"<<endl;
gets(dr);
}


cout<<"YOUR PNR NUMBER IS ";
cout<<"JHK"<<((++i)+789)+i++;


getch();
clrscr();

}

int gate(int &opt)
{
if(opt==1)
return 12;
else
if(opt==2)
return 13;
else
if(opt==3)
return 20;
else
if(opt==4)
return 10;
else
if(opt==5)
return 30;

}

void plane()   //function for plane
{   cout<<" "<<endl;

	 cout<<" "<<endl;
	 cout<<" "<<endl;
cout<<" "<<endl;
	cout<<"                                                            /|"<<endl;
	cout<<"                                                           / |"<<endl;
	cout<<"                                                          /  |"<<endl;
	cout<<"                                                         /   |"<<endl;
	cout<<"         _______________________________________________/    |"<<endl;
	cout<<"        /                                                    |"<<endl;
	cout<<"       /                                                     |"<<endl;
	cout<<"      /      THANK YOU FOR CHOOSING CARTER AIRWAYS!!!        |"<<endl;
	cout<<"     /                                                       |"<<endl;
	cout<<"    /_____________________________
gotoxy(17,14);
cin>>tel;
search_tel(tel);
}
else

cout<<"DETAILS NOT FOUND!!!";
//gotoxy(15,22);
cout<<"\t\tWOULD YOU LIKE TO SEARCH AGAIN-(Y/N)";
cin>>ch;

if(ch=='y'||ch=='Y')
clrscr();
border3( );
}
while(ch=='y'||ch=='Y');

}




void modify_destination(char sa[])
{
flight g;
char c[15];
gotoxy(20,20);
cout<<"ENTER THE NEW DESTINATION";
	gets(c);
	fstream file;
file.open("flight_pass.dat",ios::in|ios::out|ios::binary);
if(!file)
cout<<"file not created!!!	";
while(file.read((char*)&g,sizeof(g)))
{

if(strcmpi(sa,g.name)==0)
{
	g.update(c);
	int pos=file.tellg();
file.seekp(pos-sizeof(g));
file.write((char*)&g,sizeof(g));}
}
clrscr();
g.display();
getch();
clrscr();
file.close();
	}

void modify_dd(char sa[])/////DATE OF DEPARTURE
{

flight g; char c[5];
gotoxy(20,20);
cout<<"ENTER THE NEW DATE OF DEPARTURE";
	gets(c);
	fstream file;
file.open("flight_pass.dat",ios::in|ios::out|ios::binary);
if(!file)
cout<<"file not created!!!	";
while(file.read((char*)&g,sizeof(g)))
{
if(strcmpi(sa,g.name)==0)
	   {	g.d;
cout<<"FLIGHT:";
gotoxy(30,9);
cout<<"CA"<<flight;



//small boarding pass
gotoxy(55,4);
cout<<"Boarding Pass";
gotoxy(55,5);

if(cab=='F'||cab=='f')
cout<<"FIRST CLASS";
else
if(cab=='e'||cab=='E')
cout<<"ECONOMY";
else
if(cab=='B'||cab=='b')
cout<<"BUSINESS";

cout<<"\n\n\n";
gotoxy(50,6);
cout<<"Passenger Name:\t";
gotoxy(65,6);
cout<<name;
gotoxy(50,7);
cout<<"Nationality:";
gotoxy(63,7);
cout<<nation;
gotoxy(50,8);
cout<<"From:";
gotoxy(56,8);
cout<<origin;
gotoxy(50,9);
cout<<"To:";
gotoxy(54,9);
cout<<dest;
gotoxy(50,10);
cout<<"Time:";
gotoxy(55,10);
cout<<time;
gotoxy(50,11);
cout<<"Gate:";
gotoxy(56,11);
cout<<gate(option);
plane();
}


void booking()
{
border2( );
flight f;
ofstream file;

file.open("flight_pass.dat",ios::out|ios::binary);

if(!file)
cout<<"file not created!!";
char ch[12];
//clrscr();
gotoxy(40,6);
cout<<"*-Required Details";
cout<<endl;

f.book_ticket();
file.write((char*)&f,sizeof(f));
designbox( );
gotoxy(20,10);
cout<<"   **************************************";
gotoxy(19,11);
cout<<"\tThank You For Choosing Carter Airways"<<endl;
gotoxy(23,12);
cout<<"\tWISHING YOU A HAPPY JOURNEY\n";
gotoxy(23,13);
cout<<"\tPRESS ANY KEY TO CONTINUE!!\n";
gotoxy(20,14);
cout<<"   **************************************";
getch();
clrscr();
file.close();
}

void search_pnr(char p[])
{ flight f;
ifstream file;
file.open("flight_pass.dat",ios::in|ios::binary);
 if(!file)
 cout<<"file not created";

while(!file.eof())
{
file.read((char*)&f,sizeof(f));
if(strcmpi(p,f.s_pnr())==0)
{
f.display();
cout<<endl;
}

}
file.close();
}

void search_name(char na[])
{flight f;
ifstream file;
file.open("flight_pass.dat",ios::in|ios::binary);
 if(!file)
 cout<<"file not created";
while(!file.eof())
{
file.read((char*)&f,sizeof(f));
if(strcmpi(na,f.s_name())==0)
{f.display();
cout<<endl;
}

}
file.close();
}

void  search_tel(long tel)
{flight f;
ifstream file;
file.open("flight_pass.dat",ios::in|ios::binary);
 if(!file)
 cout<<"file not created";
while(!file.eof())
{
file.read((char*)&f,sizeof(f));
if(tel==f.phone)
{f.display();
cout<<endl;
}

}
file.close();
}

void search()
{

long tel;
char na[30],p[10];
char ch;
int opt;
do
{cout<<endl;

gotoxy(20,9);
cout<<"     SEARCH BY:"<<endl;
gotoxy(20,11);
cout<<"     1.Passenger Number Record(PNR)"<<endl;
gotoxy(20,13);
cout<<"     2.Name Of The Passenger"<<endl;
gotoxy(20,15);
cout<<"     3.Telephone Number Of The Passenger \n";
gotoxy(20,17);
cout<<"      Enter Your Option";

cin>>opt;
if(opt==1)

{
	clrscr();
border3();
gotoxy(17,13);
cout<<"Enter Your PNR:\n";
gotoxy(17,14);
gets(p);
search_pnr(p);
}

else
if(opt==2)
{clrscr();
border3();
gotoxy(17,13);

cout<<"Enter Your Name:\n";
gotoxy(17,14);
gets(na);
search_name(na);
}

else
if(opt==3)
{
	clrscr();
border3();
gotoxy(17,13);
cout<<"Enter Telephone Number:\n";
    "<<"NAME"<<"     "<<"FLIGHT NO."<<"  "<<"PLACE OF DEPARTURE"<<" "<<"PLACE OF ARRIVAL"<<"   "<<"CHARGE"<<endl;
while(file.read((char*)&f,sizeof(f)))
{
f.report_display(i);
 cout<<endl;
 i++;
}
getch();
}




void main()
{
border3( );
int k;
int opt;
char ch;
/* k=login();
getch();
clrscr();
if(k==1) */
do
{border3( );
gotoxy(20,4);
cout<<"   +++++WELCOME TO CARTER AIRWAYS+++++";
gotoxy(20,5);
cout<<"------------------------------------";
gotoxy(25,6);
cout<<"\tMAIN MENU\n";
gotoxy(20,7);
cout<<"------------------------------------";
gotoxy(8,9);
cout<<"\t1.BOOK A TICKET\n";
gotoxy(8,11);
cout<<"\t2.SEARCH YOUR TICKET\n";
gotoxy(8,13);
cout<<"\t3.MODIFY YOUR TICKET\n";
gotoxy(8,15);
cout<<"\t4.CANCEL YOUR BOOKING\n";
gotoxy(8,17);
cout<<"\t5.PASSENGER DETAILS\n";
gotoxy(8,19);
cout<<"\t6.EXIT\n";
gotoxy(8,21);
cout<<"\tENTER THE YOUR OPTION\n";
gotoxy(20,22);
cin>>opt;
clrscr();
border3( );
switch(opt)
{

case 1: gotoxy(20,4);
	cout<<">>>>>>WELCOME TO CARTER AIRWAYS<<<<<<";
	cout<<endl;
	cout<<endl;
	booking();
break;

case 2 :gotoxy(20,4);
	cout<<">>>>>>WELCOME TO CARTER AIRWAYS<<<<<<";
	cout<<endl;
	search();

break;

 case 3:gotoxy(20,4);
	cout<<">>>>>>WELCOME TO CARTER AIRWAYS<<<<<<";
	cout<<endl;
	modify();

 break;
case 4:gotoxy(20,4);
	cout<<">>>>>>WELCOME TO CARTER AIRWAYS<<<<<<";
	cout<<endl;
	delete_a_ticket();
break;

case 5 : gotoxy(27,4);
	cout<<">>>>>>WELCOME TO CARTER AIRWAYS<<<<<<";
	cout<<endl;
	report();

break;

case 6: exit(0);
break;

default:cout<<"INVALID OPTION";
break;
}   clrscr();
border2();
gotoxy(17,13);
cout<<"\tWOULD YOU WISH TO CONTINUE-(Y/N)";
cin>>ch;
clrscr();
}while(ch=='Y'||ch=='y');
}

void border3()
{
  int d;
  for(d=2;d<78;d++)
  {
	 gotoxy(d,2);
	 cout<<">";
	 gotoxy(d,24);
	 cout<<">";
  }
  for(d=2;d<25;d++)
  {
	 gotoxy(2,d);
	 cout<<"*";
	 gotoxy(77,d);
	 cout<<"*";
  }
}


 void deleted_design ( )
{
 designbox();
//cout<<"Enter size of  Daimond:  ";

    int size=10;
  //cin>>size;

    int z=1;

  for ( int i=0; i<=size; i++)
  { gotoxy(31,i+3);
    for (int j=size; j>i; j--)
    {
      cout<<" "; // printing space here
    }

    cout<<"*";  // printing asterisk here

    if ( i>0)
    {
      for ( int k=1; k<=z; k++)
      {
	cout<<" ";
      }
      z+=2;
      cout<<"*";
    }
    cout<<endl; // end line similar  to \n
  }

  z-=4;

  for (int i=0; i<=size-1; i++)
  { gotoxy(31,i+(size+4));
    for (int j=0; j<=i; j++)
    {
      cout<<" ";
    }

    cout<<"*";

    for (int k=1; k<=z; k++)
    {
      cout<<" ";
    }
    z-=2;

    if (i!=size-1)
    {
      cout<<"*";
    }
    cout<<endl;
  }
 gotoxy(35,13);
 cout<<"ticket deleted ";

}

void designbox ()
      {
      for(int x=0;x<79;x++)
	 { cout<<"*";
	     }

	  for(int y=0;y<25;y++)
	   {int x=79;
	   gotoxy(x,y);
	   cout<<"*";}
  int y=25,x=79;
  for(;x>0;x--)
	    { gotoxy(x,y);
	    cout<<"*";
		 }

   for(;y>0;y--)
   { gotoxy(0,y);
   cout<<"*";
   }
   }

void border2()
{
  int d;
  for(d=2;d<78;d++)
  {
	 gotoxy(d,2);
	 cout<<"+";
	 gotoxy(d,24);
	 cout<<"+";
  }
  for(d=2;d<25;d++)
  {
	 gotoxy(2,d);
	 cout<<"#";
	 gotoxy(77,d);
	 cout<<"#";
  }
}



int WORLDCLOCK()
{
	 int h=4,m=39,s=12,a,err;
	 err=a=0;
	 while(err==0)
	 {
	 /*cout<<"enetr hour:"<<endl;
	 cin>>h;
	 cout<<"enter minutes:"<<endl;
	 cin>>m;
	 cout<<"enter the seconds:"<<endl;
	 cin>>s;
	 */
	 if(h<24&&m<60&&s<60)
	 err++;
	 else
	 clrscr();
	 
	 }
	 while(a==0)
	 {
	 	clrscr();
	 	gotoxy(70,1);
	 	cout<<h<<":"<<m<<":"<<s<<endl;
	 	Sleep(1000);
	 	s++;
	 	if(s>59)
	 	{
	 		s=0;
	 		m++;
		 }
		 if(m>59)
		 {
		 	m=0;
		 	h++;
		 }
		 if(h>24)
		 {h=0;
		 }
		 
		 }
		 return 0;
}
