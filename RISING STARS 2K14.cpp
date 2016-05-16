/*C++ Project
FOOTBALL ACADEMY
Anurag Joshi
12-C
*/
#include <iostream.h>
#include <conio.h>
#include <process.h>
#include <string.h>
#include <fstream.h>
#include <stdlib.h>
class features
{
private:
int A;
int overall;
char name[30];
int passing;
int dribbling;
int midfield;
int forward;
int defence;
char trait[30];
int spspeed;
public:
void getdetails();
void potential();
void awardcounter();
void getage();
void extra();
void giveteam();
}F1;
void features::getdetails()
{
A=0;
ofstream obj;
obj.open("details.txt",ios::app);
long int ids;
randomize();
cout<<"Your GR No is-"<<random(ids)<<"\n";
cout<<"Please enter your scores ranging from 0 to 100 below""\n";
cout<<"Enter your name here\t";
cin>>name;
obj<<name;
cout<<"Enter your Passing score\t";
cin>>passing;
obj<<passing;
cout<<"Enter your sprint speed\t";
cin>>spspeed;
obj<<spspeed;
cout<<"Enter your Dribbling\t";
cin>>dribbling;
obj<<dribbling;
cout<<"Enter your midfield score\t";
cin>>midfield;
obj<<midfield;
cout<<"Enter your forward score\t";
cin>>forward;
obj<<forward;
cout<<"Enter your defence score\t";
cin>>defence;
obj<<defence;
cout<<"Enter your desired trait(Defender,Midfielder,Forward)\t";
cin>>trait;
obj<<trait;
obj.close();
}
void features::potential()
{
overall=(passing+spspeed+dribbling+midfield+forward+defence)/6;
cout<<"Your overall is=\t"<<overall<<"\n";
if(forward>midfield && forward>defence)
{
cout<<" You have the potential to be a forward""\n";
}
else if(midfield>forward && midfield>defence)
{
cout<<"You have the potential to be a midfielder""\n";
}
else if(defence>midfield && defence> forward)
{
cout<<"You have the potential to be a defender""\n";
}
else if(forward==midfield)
{
cout<<"You have the potential to be an Attacking Midfielder""\n";
}
else if(midfield==defence)
{
cout<<"You have the potential to be a Defensive Midfielder""\n";
}
else if(forward==defence)
{
cout<<"You have the potential to play both as a forward and a defender""\n";
}
endi:
}
void features::awardcounter()
{
beg:
cout<<"Select the number(s) adjacent to the awards mentioned""\n";
cout<<"1)FIFA Rising Star(2013)""\n";
cout<<"2)Young Talent of the Year""\n";
cout<<"3)Golden Boot for the Local Premier League""\n";
cout<<"4)Rising Talented Buddy""\n";
cout<<"5)Speculated Star Award""\n";
int Z[10];
int N;
cout<<"Enter the number of awards you have won from the list mentioned above""\n";
cin>>N;
int i;
if(N>5)
{
cout<<"Wrong choice";
getch();
}
else if(N==5)
{
A=A+50;
goto end;
}
else if(N==0)
{
goto end;
}
cout<<"Enter the number adjacent to the awards you have won""\n";
for(i=0;i<N;i++)
{
cin>>Z[i];
if(Z[i]>5)
{
cout<<"Wrong Choice\n Please reenter your details.\n";
goto beg;
}
}
{
for(i=0;i<N;i++)
{
if (Z[i]==1)
{
A=A+10;
}
else if(Z[i]==2)
{
A=A+7;
}
else if(Z[i]==3)
{
A=A+11;
}
else if(Z[i]==4)
{
A=A+4;
}
else if(Z[i]==5)
{
A=A+9;
}
}
}
end:
}
void features::getage()
{
int age;
cout<<"Enter the number adjacent to your Age group here""\n";
cout<<"1)15-19""\n";
cout<<"2)20-23""\n";
cout<<"3)23-27""\n";
cout<<"4)27+""\n";
cin>>age;
if(age==1)
{
A=A+11;
}
else if(age==2)
{
A=A+8;
}
else if(age==3)
{
A=A+5;
}
else if(age==4)
{
A=A+2;
}
}
void features::extra()
{
if(A==0)
{
cout<<"Since your details haven't been registered yet,your overall score cannot be calculated\n";
cout<<"Kindly enter your details for further results";
}
if(passing>70)
{
A=A+15;
}
else if(passing>0 && passing<=50)
{
A=A+4;
}
else if(passing>50 && passing<=70)
{
A=A+9;
}
if(spspeed>80)
{
A=A+12;
}
else if(spspeed>0 && spspeed<=50)
{
A=A+5;
}
else if(spspeed>51 && spspeed<=80)
{
A=A+9;
}
if(dribbling>0 && dribbling<50)
{
A=A+9;
}
else if(dribbling>=50 && dribbling<75)
{
A=A+12;
}
else if(dribbling>=75)
{
A=A+15;
}
if(overall>=80)
{
A=A+11;
}
else if (overall>50 && overall<80)
{
A=A+8;
}
else if(overall>25 && overall<=50)
{
A=A+5;
}
else if(overall==0)
{
cout<<"\n\nError";
getch();
}
else if(overall<=25)
{
A=A+2;
}
A=A*2;
cout<<"Your overall score is:\t"<<A<<"\n";
}
void features::giveteam()
{
int E;
int G;
int K;
int H;
int M;
char P;
if(A>0 && A<=30)
{
am:
cout<<"The following clubs are interested to gain your services""\n";
cout<<"1)Portsmouth FC""\n""2)FC Levante""\n";
cout<<"Enter the number adjacent to your desired team to view the offers""\n";
cin>>E;
{
if(E==1)
{
cout<<"Club:Portsmouth FC""\n""Wage Offered:4590$""\n""Contract Duration-5 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto am;
else if(P=='N')
goto pic;
}
else if(E==2)
{
cout<<"Club:FC Levante""\n""Wage Offered:4700$""\n""Contract Duration-3 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto am;
else if(P=='N')
goto pic;
}
}
}
else if(A>31 && A<=70)
{
pk:
cout<<"The following clubs are interested to gain your services""\n";
cout<<"1)BSC Young Boys FC""\n""2)Parma""\n";
cout<<"Enter the number adjacent to your desired team to view the offers""\n";
cin>>G;
{
if(G==1)
{
cout<<"Club:BSC Young Boys FC""\n""Wage Offered=11400$""\n""Contract Duration-3 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto pk;
else if(P=='N')
goto pic;
}
else if(G==2)
{
cout<<"Club:Parma""\n""Wage Offered:11500$""\n""Contract Duration-4 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto pk;
else if(P=='N')
goto pic;
}
}
}
else if(A>70 && A<=110)
{
ba:
cout<<"The following clubs are interested to gain your services""\n";
cout<<"1)FC Koln""\n""2)Feyenoord""\n";
cout<<"Enter the number adjacent to your desired team to view the offers""\n";
cin>>K;
{
if(K==1)
{
cout<<"Club:FC Koln""\n""Wage Offered:21000$""\n""Contract Duration-5 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto ba;
else if(P=='N')
goto pic;

}
else if(K==2)
{
cout<<"Club:Feyenoord""\n""Wage Offered:20000$""\n""Contract Duration-3 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto ba;
else if(P=='N')
goto pic;
}
}
}
else if(A>110 && A<=150)
{
jk:
cout<<"The following clubs are interested to gain your services""\n";
cout<<"1)Manchester City FC""\n""2)Borussia Dortmund""\n""3)Juventus FC""\n""4)Real Madrid CF""\n";
cout<<"Enter the number adjacent to your desired team to view the offers""\n";
cin>>H;
{
if(H==1)
{
cout<<"Club:Manchester City FC""\n""Wage Offered:56000$""\n""Contract Duration-5 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto jk;
else if(P=='N')
goto pic;
}
else if(H==2)
{
cout<<"Club:Borussia Dortmund""\n""Wage Offered=49000$""\n""Contract Duration-3 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto jk;
else if(P=='N')
goto pic;
}
else if(H==3)
{
cout<<"Club:Juventus""\n""Wage Offered:51000$""\n""Contract Duration-4 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto jk;
else if(P=='N')
goto pic;
}
else if(H==4)
{
cout<<"Club:Real Madrid CF""\n""Wage Offered:60000$""\n""Contract Duration-6 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto jk;
else if(P=='N')
goto pic;
}
}
}
else if(A>150)
{
amp:
cout<<"The following clubs are interested to gain your services""\n";
cout<<"1)Paris Saint Germain""\n""2)FC Barcelona""\n""3)Chelsea FC""\n";
cout<<"Enter the number adjacent to your desired team to view the offer""\n";
cin>>M;
if(M==1)
{
cout<<"Club:PSG""\n""Wage Offered:67000$""\n""Contract Duration-5 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto amp;
else if(P=='N')
goto pic;
}
else if(M==2)
{
cout<<"Club:FC Barcelona""\n""Wage Offered:64000$""\n""Contract Duration-4 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto amp;
else if(P=='N')
goto pic;
}
else if(M==3)
{
cout<<"Club:Chelsea FC""\n""Wage Offered:66000$""\n""Contract Duration-3 Years""\n";
cout<<"Press 'Y' to view other offers and 'N' if you are satisfied with the mentioned offer";
cin>>P;
if(P=='Y')
goto amp;
else if(P=='N')
goto pic;
}
}
pic:
cout<<"Your total points are="<<A<<"\n";
cout<<"We hope this program helps you and has found you your destination.Your feedbacks are much awaited""\n";
char feedback[100];
cin>>feedback;
ofstream fout;
fout.open("sample.txt",ios::app);
fout<<feedback;
fout.close();
getch();
}
void main()
{
char login[5];
start:
cout<<"\t       WELCOME TO EUROPEAN FOOTBALL ACADEMY!YOUNG HUNT(2014-15)\t""\n\n";
cout<<"Enter the 4 letter login ID given to you during your physical test""\n";
char a;
int inc=0 ;
do
{
a=getch();
if(a!='\r')
{
login[inc] =a;
cout<<"*";
inc++;
}
}while(a!='\r');
login[inc]='\0';
if(strcmp(login,"ABCD")!=0)
{
cout<<"\nWrong password\nPress enter to Try again";
getch();
clrscr();
goto start;
}
clrscr();
starting:
int cho;
cout<<"Enter your choice from the given options\n\n\n\n";
cout<<"1)Enter your test details\n2)Calculate your overall potential\n";
cout<<"3)Calculate your overall on the basis of your awards\n4)Enter your age group\n";
cout<<"5)Calculate your net score through bonuses\n6)Assigning you a team on the basis of your scores\n";
cout<<"7)Exit the programme\n";
cin>>cho;
if(cho==1)
{
F1.getdetails();
goto starting;
}
if(cho==2)
{
F1.potential();
goto starting;
}
if(cho==3)
{
F1.awardcounter();
goto starting;
}
if(cho==4)
{
F1.getage();
goto starting;
}
if(cho==5)
{
F1.extra();
goto starting;
}
if(cho==6)
{
F1.giveteam();
goto starting;
}
if(cho==7)
{
cout<<"Thank You for using this program!";
getch();
exit(0);
}
if(cho>7)
{
cout<<"Wrong Choice\n";
goto starting;
}
getch();
}
