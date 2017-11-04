#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<process.h>
using namespace std;
void calc()
{
    cout<<"\n\n  Yes. Thats correct !! ";
    getch();
}

void wrong()
{
    cout<<"\n\n  Sorry !! Your Answer is wrong!!";
    getch();
}

int c1()
{
    char k;
    int a=0;
    system("cls");
    cout<<"\n1.THE AREA OF CIRCLE OF RADIUS 5(CM) IS:- "<<endl;
    cout<<"\n (a) 25pi "<<endl;
    cout<<"\n (b) 16 pi"<<endl;
    cout<<"\n (c) 10pi "<<endl;
    cout<<"\n (d) 15pi "<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        a++;
    }
    else
        wrong();
        system("cls");
    cout<<"\n2.THE PERMITER OF CIRCLE OF RADIUS 8(CM) IS:- "<<endl;
    cout<<"\n (a) 16pi "<<endl;
    cout<<"\n (b) 10 pi"<<endl;
    cout<<"\n (c) 11pi "<<endl;
    cout<<"\n (d) 19pi "<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        a++;
    }
    else
        wrong();
        system("cls");
    cout<<"\n3.THE RADIUS OF ANY CIRCLE IS:- "<<endl;
    cout<<"\n (a) HALF OF THE DIAMETER OF CIRCLE"<<endl;
    cout<<"\n (b) TWICE THE DIAMETER OF CIRCLE"<<endl;
    cout<<"\n (c) THE DIAMETER OF CIRCLE "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        a++ ;
    }
    else
        wrong();
        system("cls");
    cout<<"\n4.THE TANGENT OF ANY CIRCLE IS:- "<<endl;
    cout<<"\n (a) PARALLEL TO CIRCLE"<<endl;
    cout<<"\n (b) PERPENDICULAR TO CIRCLE"<<endl;
    cout<<"\n (c) PERPENDICULAR DIAMETER OF CIRCLE "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='b')
    {
        calc();
        a++  ;
    }
    else
        wrong();
         system("cls");
    cout<<"\n5.THE RADIUS OF A CIRCLE IS";
    cout<<"\n (a) NOT CONSTANT"<<endl;
    cout<<"\n (b) VARIABLE"<<endl;
    cout<<"\n (c) ALWAYS CONSTANT "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='c')
    {
        calc();
        a++  ;
    }
    else
        wrong();
         system("cls");
    cout<<"\n6 HALF OF A CIRCLE IS";
    cout<<"\n (a) PARABOLA"<<endl;
    cout<<"\n (b) RECTANGLE"<<endl;
    cout<<"\n (c) SQUARE"<<endl;
    cout<<"\n (d) SEMI CIRCLE"<<endl;
    cin>>k;
    if(k=='d')
    {
        calc();
        a++   ;
    }
    else
        wrong();
         system("cls");
    cout<<"\n7.THE RATIO OF AREA OF CIRCLE AND SEMI-CIRCLE IS";
    cout<<"\n (a) 1:4"<<endl;
    cout<<"\n (b) 1:3"<<endl;
    cout<<"\n (c) 2:1 "<<endl;
    cout<<"\n (d) 4:1"<<endl;
    cin>>k;
    if(k=='c')
    {
        calc();
        a++    ;
    }
    else
        wrong();
         system("cls");
    cout<<"\n8.THE CORD OF CIRCLE CAN BE";
    cout<<"\n (a) RADIUS"<<endl;
    cout<<"\n (b) DIAMETER"<<endl;
    cout<<"\n (c) TANGENT"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='b')
    {
        calc();
        a++     ;
    }
    else
        wrong();
         system("cls");
    cout<<"\n9.ACUTE CIRCLE HAS ANGLE (DEGREES)";
    cout<<"\n (a) LESS THAN 90"<<endl;
    cout<<"\n (b) MORE THAN 90"<<endl;
    cout<<"\n (c) EQUAL TO 90"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        a++      ;
    }
    else
        wrong();
         system("cls");
    cout<<"\n10.A CIRCLE CAN BE MADE INTO:";
    cout<<"\n (a) ELLIPSE"<<endl;
    cout<<"\n (b) RECTANGLE"<<endl;
    cout<<"\n (c) SQUARE"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='d')
    {
        calc();
        a++       ;
    }
    else
        wrong();
         system("cls");
    cout<<"YOUR SCORE OUT OF 10 IS  :  "<<a<<endl;;
    if(a<=5)
        cout<<"\n You need to improve in geometry !! Take your lessons carefully..";
    if(a>=5 && a<=7)
        cout<<"\n You are good in geometry !!";
    if(a>=8)
        cout<<"\n You are very good in geometry !! Good Job!";
    return a;
}
int c2()
{
    char k;
    int b=0;
     system("cls");
    cout<<"\n1.AREA OF SQUARE IS ";
    cout<<"\n (a) (DIAGONAL)^2/2"<<endl;
    cout<<"\n (b) SIDE"<<endl;
    cout<<"\n (c) TWICE DIAGONAL "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n2.WHEN THE SIDE OF SQUARE IS DOUBLED,AREA OF SQUARE IS ";
    cout<<"\n (a) DOUBLED"<<endl;
    cout<<"\n (b) TRIPLED"<<endl;
    cout<<"\n (c) 4 TIMES "<<endl;
    cout<<"\n (d) 3 TIMES"<<endl;
    cin>>k;
    if(k=='c')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n3.AREA OF SQUARE OF DIAGONAL 2CM (IN CM^2) ";
    cout<<"\n (a) 2"<<endl;
    cout<<"\n (b) 3"<<endl;
    cout<<"\n (c) 4 "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n4.SQUARE IS ";
    cout<<"\n (a) RECTANGLE"<<endl;
    cout<<"\n (b) CIRCLE"<<endl;
    cout<<"\n (c) TRAPEZIUM "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n5.PERIMETER OF SQUARE OF LENGTH 4 CM IS (IN CM^2) ";
    cout<<"\n (a) 15"<<endl;
    cout<<"\n (b) 17"<<endl;
    cout<<"\n (c) 16 "<<endl;
    cout<<"\n (d) 29"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n6.PERIMETER OF SQUARE IS  ";
    cout<<"\n (a) EQUAL TO ITS SIDE"<<endl;
    cout<<"\n (b) LESSE THAN ITS SIDE"<<endl;
    cout<<"\n (c) TWICE ITS SIDE "<<endl;
    cout<<"\n (d) 4 TIMES ITS SIDE"<<endl;
    cin>>k;
    if(k=='d')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n6.PERIMETER OF SQUARE OF DIAGONAL 2 CM IS (in cm): ";
    cout<<"\n (a) 2/root(2)"<<endl;
    cout<<"\n (b) root(2)"<<endl;
    cout<<"\n (c) 3"<<endl;
    cout<<"\n (d) 25"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n7.DIAGONALS OF SQUARE";
    cout<<"\n (a) ALWAYS EQUAL"<<endl;
    cout<<"\n (b) NOT EQUAL"<<endl;
    cout<<"\n (c) PERPENDICULAR "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n8.SQUARE IN 3D IS";
    cout<<"\n (a) CUBE"<<endl;
    cout<<"\n (b) CUBOID"<<endl;
    cout<<"\n (c) SQUARE "<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n9.LOCUS OF ALL POINTS OF CENTRE OF SQUARE IS";
    cout<<"\n (a) TRIANGLE"<<endl;
    cout<<"\n (b) CIRCLE"<<endl;
    cout<<"\n (c) RECTANGLE"<<endl;
    cout<<"\n (d) SQUARE"<<endl;
    cin>>k;
    if(k=='d')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n10.THE AREA OF SQUARE OF LENGTH 8CM INSCRIBED IN CIRCLE OF RADIUS 1CM IS";
    cout<<"\n (a) 16"<<endl;
    cout<<"\n (b) 1"<<endl;
    cout<<"\n (c) 64 "<<endl;
    cout<<"\n (d) 25"<<endl;
    cin>>k;
    if(k=='c')
    {
        calc();
        b++;
    }
    else
        wrong();
         system("cls");
    cout<<"\nYOUR SCORE OUT OF 10 IS  "<<b<<endl;
    if(b<=5)
        cout<<"\nYou need to improve in geometry";
    if(b>=5 && b<=7)
        cout<<"\nYou are good in geometry";
    if(b>=8)
        cout<<"\nYou are very good in geometry";
        return b;
}

int c3()
{
    char k;
    int c=0;
    cout<<"\n1.Oblique planes in a three-view drawing will appear as:";
    cout<<"\n (a)two surfaces and one edge"<<endl;
    cout<<"\n (b)	two edges and one surface"<<endl;
    cout<<"\n (c) three edges "<<endl;
    cout<<"\n (d) three surfaces"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n2.WHICH OF THESE ARE 3-D STRUCTURES";
    cout<<"\n (a) TRAPEZIOD"<<endl;
    cout<<"\n (b)	SQUARE"<<endl;
    cout<<"\n (c) LINES"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n3.A PYRAMID IS ";
    cout<<"\n (a) ONE SQUARE AND 3 EQUILATERAL TRIANGLES"<<endl;
    cout<<"\n (b)	TW0 SQUARE AND 3 EQUILATERAL TRIANGLES"<<endl;
    cout<<"\n (c) THREE SQUARE AND 3 EQUILATERAL TRIANGLES "<<endl;
    cout<<"\n (d) ONE SQUARE AND 2 EQUILATERAL TRIANGLES"<<endl;
    cin>>k;
    if(k=='c')
    {
        calc();
        c++;
    }
    else
        wrong();
        system("cls");
    cout<<"\n4.CONE IS COMBINATION OF";
    cout<<"\n (a) SQUARE AND TRIANGLE"<<endl;
    cout<<"\n (b)	TRIANGLE AND CIRCLE"<<endl;
    cout<<"\n (c) LINES"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='b')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n5 RECTANGULAR PRISM IS";
    cout<<"\n (a) PYRAMID WITH BASE RECTANGLE"<<endl;
    cout<<"\n (b)	PRISM WITH SIDES RECTANGLE"<<endl;
    cout<<"\n (c) PYRAMID WITH SIDES RECTANGLE"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='c')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n6.A CIRCULAR BASED CYLINDRICAL PRISM";
    cout<<"\n (a) PARELLOPIPPED"<<endl;
    cout<<"\n (b)	PYRAMID"<<endl;
    cout<<"\n (c) CYLINDER"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='b')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n7.KALEIDOSCOPE IS COMBINATION OF";
    cout<<"\n (a) TRIANGLE AND RECTANGLE"<<endl;
    cout<<"\n (b)	SQUARE WITH RECTANGLE"<<endl;
    cout<<"\n (c) PLANES"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='b')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n8.A 3D STRUCTURE IS PROJECTION OF_____ OF 2D PLANE";
    cout<<"\n (a) LENGTH"<<endl;
    cout<<"\n (b)	BASE"<<endl;
    cout<<"\n (c) LINES"<<endl;
    cout<<"\n (d) HEIGHT"<<endl;
    cin>>k;
    if(k=='d')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n9.VOLUME OF TRIANGULAR PRISM WHERE AREA OF TRIANGLE IS 4 AND HEIGHT IS 3 UNITS";
    cout<<"\n (a) 144"<<endl;
    cout<<"\n (b)	12"<<endl;
    cout<<"\n (c) 7"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='b')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\n10.A PRISM REDUCED TO ITS BASE IS ";
    cout<<"\n (a) TRIANGLE"<<endl;
    cout<<"\n (b)	SQUARE"<<endl;
    cout<<"\n (c) LINE"<<endl;
    cout<<"\n (d) NONE OF THE ABOVE"<<endl;
    cin>>k;
    if(k=='a')
    {
        calc();
        c++;
    }
    else
        wrong();
         system("cls");
    cout<<"\nYOUR SCORE OUT OF 10 IS "<<c<<endl;
    if(c<=5)
        cout<<"\nYou need to improve in geometry !! ";
    if(c>=5 && c<=7)
        cout<<"\nYou are good in geometry !! ";
    if(c>=8)
        cout<<"\nYou are very good in geometry !! ";
        return c;
}
int quiz(char name[50])
{
    int choice5=0;
    //char name[50];
    //cout<<"\n ENTER THE NAME:-";
    //gets(name);
    int totmarks;
    system("cls");
    cout<<"\n ******************************************************";
    cout<<"\n ** WELCOME TO THE GEOMETRY QUIZ  "<<name << "!! ";
    cout<<"\n *******************************************************";
    cout<<"\n\n\n 1) HERE YOU WILL BE ASKED A QUESTION AND FOUR OPTIONS INCLUDED";
    cout<<"\n2) THREE OPTIONS ARE WRONG AND ONLY ONE IS CORRECT";
    cout<<"\n3) FOR EACH CORRECT ANSWER,1 MARK IS AWARDED"<<endl;
    getch();
q:
    system("cls");
    cout << "*** Geometry Menu ***" << endl << endl;
    cout << "Please choose a topic below" << endl;
    cout << "---------------------------" << endl;
    cout << "      1. Circles" << endl;
    cout << "      2. Squares" << endl;
    cout << "      3. Planes" << endl;
    cout << "     --------------" << endl;
    cout << "\n Your choice? (1-3): ";
    cin >> choice5;
    if(choice5==1)
    {
        system("cls");
        totmarks=c1();
    }
    else if(choice5==2)
    {
        system("cls");
        totmarks=c2();
    }
    else if(choice5==3)
    {
        system("cls");
        totmarks=c3();
    }
    cout<<"\n Would you like to take up any other topic \n to improve your score in geometry? (Y/N) :";
    char choicequiz;
    cin>>choicequiz;
    if(choicequiz=='Y'||choicequiz=='y')
    goto q;
    return totmarks;
}

class user
{
    int roll,classno,marks,usno;
    char nm[31],sec;
public:
    void input(int x,char name[50])
    {
        //cout<<"\n Enter Name : ";
        //cin>>nm;
        strcpy(nm,name);
        cout<<"\n Enter Class : ";
        cin>>classno;
        cout<<"\t Section: ";
        cin>>sec;
        cout<<"\n Enter rollno : ";
        cin>>roll;
        //cout<<"\n Enter marks obtained : ";
        //cin>>marks;
        usno=x;
    }
    void inputmarks(int mark)
    {
        marks=mark;
    }
    void show()
    {
        cout<<"\n ______________________ \n USER NO : "<<usno;
        cout<<"\n -------------------------------------";
        cout<<"\n Name : ";
        cout<<nm;
        cout<<"\n Class : "<<classno<<"     Section: "<<sec;
        cout<<"\n Roll No : "<<roll;
        cout<<"\n Marks obtained : "<<marks/10*100<<" % ";
    }
    int getusno()
    {
        return usno;
    }
    int getclass()
    {
        return classno;
    }
    int getroll()
    {
        return roll;
    }
    char getsec()
    {
        return sec;
    }
    int compname(char x[31])
    {
        if(strcmp(x,nm))
            return 0;
        else
            return 1;
    }
};
int main()
{
    //write,read,show
start:
    ofstream wf;
    ifstream rf;
     user u;
    system("cls");
wc:
    cout<<"\n MENU : \n 1)TAKE QUIZ \n 2)READ RECORD(ALL) \n 3)READ RECORD(by any key word) \n 4)DELETE ANY RECORD \n 5)ADMIN CONTROLS \n 6) EXIT!";
    int choice;
    cout<<"\n Enter choice: ";
    cin>>choice;

   //a->usno
    if(choice==1)
    {
        system("cls");
        //write((char*)&u,sizeof(u));
wf.open("data.dat",ios::app|ios::binary);         //no of recs
    int m=wf.tellp();
    wf.seekp(0,ios::end);
    int n=wf.tellp();
    int sof=n-m;
    int a=(sof/sizeof(u));
            a=a+1;
            cout<<"\n Enter your name : ";
            char entname[50];
            cin>>entname;
            u.input(a,entname);
            int markse=quiz(entname);
            u.inputmarks(markse);
            system("cls");
            wf.write((char*)&u,sizeof(u));
            system("cls");
        wf.close();
        goto start;
    }
    else if(choice==2)
    {
        system("cls");
        cout<<"\n\t _____RECORD DATABASE_____";
        rf.open("data.dat",ios::in);
        rf.read((char*)&u,sizeof(u));
        while(rf)
        {
            u.show();
            rf.read((char*)&u,sizeof(u));
        }
        rf.close();
        cout<<"\n ______________________ \n To go to menu press ENTER! ";
        getch();
        goto start;
    }
    else if(choice==3)
    {
start3:
        system("cls");
        cout<<"\n READ BY: \n1) Name\n2) Class\n3) Section\n4) User No\n5)Roll No \nENTER CHOICE:";
        int cho3;
        cin>>cho3;
        if(cho3==1)
        {
start3_1:
            system("cls");
            cout<<"\n Enter name to see the record : ";
            char name[31];
            int found=0;
            cin>>name;
            rf.open("data.dat",ios::in);
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(u.compname(name)!=0)
                {
                    found=1;
                    u.show();
                }
                rf.read((char*)&u,sizeof(u));
            }
            rf.close();
            if(found==0)
                cout<<"\n Record  with such name not found ! ";
            cout<<"\n Do you want to view any other record ? (Y/N) : ";
            char cho='Y';
            cin>>cho;
            if(cho=='Y'||cho=='y')
                goto start3_1;
        }
        else if(cho3==2)
        {
start3_2:
            system("cls");
            cout<<"\n Enter class to see the record : ";
            int classno,found=0;
            cin>>classno;
            rf.open("data.dat",ios::in);
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(classno==u.getclass())
                {
                    found=1;
                    u.show();
                }
                rf.read((char*)&u,sizeof(u));
            }
            rf.close();
            if(found==0)
                cout<<"\n Record with such class no not found ! ";
            cout<<"\n Do you want to view any other record ? (Y/N) : ";
            char cho='Y';
            cin>>cho;
            if(cho=='Y'||cho=='y')
                goto start3_2;
        }
        else if(cho3==3)
        {
start3_3:
            system("cls");
            cout<<"\n Enter section to see the record : ";
            char section;
            int found=0;
            cin>>section;
            rf.open("data.dat",ios::in);
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(section==u.getsec())
                {
                    found=1;
                    u.show();
                }
                rf.read((char*)&u,sizeof(u));
            }
            rf.close();
            if(found==0)
                cout<<"\n Record with such a section not found ! ";
            cout<<"\n Do you want to view any other record ? (Y/N) : ";
            char cho='Y';
            cin>>cho;
            if(cho=='Y'||cho=='y')
                goto start3_3;
        }
        else if(cho3==4)
        {
start3_4:
            system("cls");
            cout<<"\n Enter user no to see the record : ";
            int userno,found=0;
            cin>>userno;
            rf.open("data.dat",ios::in);
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(userno==u.getusno())
                {
                    found=1;
                    u.show();
                }
                rf.read((char*)&u,sizeof(u));
            }
            rf.close();
            if(found==0)
                cout<<"\n Record with such a user no not found ! ";
            cout<<"\n Do you want to view any other record ? (Y/N) : ";
            char cho='Y';
            cin>>cho;
            if(cho=='Y'||cho=='y')
                goto start3_4;
        }
        else if(cho3==5)
        {
start3_5:
            system("cls");
            cout<<"\n Enter roll no to see the record : ";
            int rollno,found=0;
            cin>>rollno;
            rf.open("data.dat",ios::in);
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(rollno==u.getroll())
                {
                    found=1;
                    u.show();
                }
                rf.read((char*)&u,sizeof(u));
            }
            rf.close();
            if(found==0)
                cout<<"\n record with such a rol no not found ! " ;
            cout<<"\n Do you want to view any other record ? (Y/N) : ";
            char cho='Y';
            cin>>cho;
            if(cho=='Y'||cho=='y')
                goto start3_5;
        }
        else
        {
            system("cls");
            cout<<"\n ENTER A VALID CHOICE!!";
            getch();
            goto start3;
        }
        char cho3main='N';
        cout<<"\n Do you want to view any record by any other key word ? (y/n) ";
        cin>>cho3main;
        if(cho3main=='y'||cho3main=='Y')
            goto start3;
        goto start;
    }
    else if(choice==4)
    {
        system("cls");
        fstream rf;//doubtful
        cout<<"\n PASSWORD CHECK"<<endl;
        char ch[31],m[31],c;
        rf.open("password.txt");
        if(rf!=NULL)
        {
        cout<<"\n Enter the password : ";
        cin>>ch;
        rf>>c;
         int i=0;
        while(rf)
        {

            m[i]=c;
            rf>>c;
            i++;
        }
        rf.close();
        if(strcmp(ch,m)==1)
        {
            cout<<"\n BAD LUCK ;) PASSWORD INCORRECT ! ";
            getch();
            goto start;

        }
        else
        {
             cout<<"\n PASSWORD CORRECT ! \n Press ENTER to continue! ";
            // system("cls");
            getch();
            goto start4;
        }
        }
start4:
        system("cls");
        cout<<"\n DELETE RECORD BY : ";
        cout<<"\n 1) USER NO. \n 2) NAME \n 3) CLASS \n 4) ROLL NO. \n 5) SECTION \n 6) GO BACK \n";
        int choicedel;
        cout<<"\n Enter Choice : ";
        cin>>choicedel;
        if(choicedel==1)
        {
             start41:
            system("cls");
            wf.open("temp.dat",ios::app|ios::binary);
            rf.open("data.dat",ios::in);
            cout<<"\n Enter user no of the rec to be deleted : ";
            int usern;
            cin>>usern;
            int found=0,found1=0;
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(u.getusno()==usern)
                {
                    found=1;
                    cout<<endl;
                    u.show();
                    cout<<"\n Are you sure you want to delete this record ? (y/n) : ";
                    char choiceconf;
                    cin>>choiceconf;
                    if(choiceconf=='N'||choiceconf=='n')
                    {
                        wf.write((char*)&u,sizeof(u));
                        found1=1;
                    }
                }
                else //if(u.getusno()!=usern)
                {
                    wf.write((char*)&u,sizeof(u));
                }

                rf.read((char*)&u,sizeof(u));
            }
            wf.close();
            rf.close();
            if(found==1)
            {

                if(found1==0)
                {
                    cout<<"\n Record with user no : "<<usern<<" was deleted successfully !! ";
                    remove("data.dat");
                    rename("temp.dat","data.dat");
                }
                else
                {
                    cout<<"\n Record with user no : "<<usern<<"  was not deleted ! ! ";
                    remove("temp.dat");
                }

            }
            else if(found==0)
            {
                cout<<"\n Record with user no : "<<usern<<" was not found, hence deletion unsuccessful ! ";
                remove("temp.dat");
            }
            cout<<"\n Do you want to delete any other record ? (Y/N) : ";
            char cho4;
            cin>>cho4;
            if(cho4=='Y'||cho4=='y')
            {
                goto start41;
            }
            cout<<"\n Do You want to delete record with any other key word ? (Y/N) : ";
            char cho5;
            cin>>cho5;
            if(cho5=='Y'||cho5=='y')
            {
                goto start4;
            }
            //getch();
            system("cls");
            goto start;
            }
         else if(choicedel==2)//choice2->name
        {
            start42:
            system("cls");
            wf.open("temp.dat",ios::app|ios::binary);
            rf.open("data.dat",ios::in);
            cout<<"\n Enter name of the rec to be deleted : ";
            char name[31];
            cin>>name;
            int found=0,found1=0;
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(u.compname(name)!=0)
                {
                    found=1;
                    cout<<endl;
                    u.show();
                    cout<<"\n Are you sure you want to delete this record ? (y/n) : ";
                    char choiceconf;
                    cin>>choiceconf;
                    if(choiceconf=='N'||choiceconf=='n')
                    {
                        wf.write((char*)&u,sizeof(u));
                        found1=1;
                    }
                }
                else //if(u.getusno()!=usern)
                {
                    wf.write((char*)&u,sizeof(u));
                }

                rf.read((char*)&u,sizeof(u));
            }
            wf.close();
            rf.close();
            if(found==1)
            {
                if(found1==0)
                {
                    cout<<"\n Record with name : "<<name<<" was deleted successfully !! ";
                    remove("data.dat");
                    rename("temp.dat","data.dat");
                }
                else
                {
                    cout<<"\n Record with name : "<<name<<"  was not deleted ! ! ";
                    remove("temp.dat");
                }

            }
            else if(found==0)
            {
                cout<<"\n Record with name : "<<name<<" was not found, hence deletion unsuccessful ! ";
                remove("temp.dat");
            }
            cout<<"\n Do you want to delete any other record ? (Y/N) : ";
            char cho4;
            cin>>cho4;
            if(cho4=='Y'||cho4=='y')
            {
                goto start42;
            }
            cout<<"\n Do You want to delete record with any other key word ? (Y/N) : ";
            char cho5;
            cin>>cho5;
            if(cho5=='Y'||cho5=='y')
            {
                goto start4;
            }
            //getch();
            system("cls");
            goto start;
            }
        else if(choicedel==3)//choice3->class
        {
            start43:
            system("cls");
            wf.open("temp.dat",ios::app|ios::binary);
            rf.open("data.dat",ios::in);
            cout<<"\n Enter class no of the rec to be deleted : ";
            int classn;
            cin>>classn;
            int found=0,found1=0;
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(u.getclass()==classn)
                {
                    found=1;
                    cout<<endl;
                    u.show();
                    cout<<"\n Are you sure you want to delete this record ? (y/n) : ";
                    char choiceconf;
                    cin>>choiceconf;
                    if(choiceconf=='N'||choiceconf=='n')
                    {
                        wf.write((char*)&u,sizeof(u));
                        found1=1;
                    }
                }
                else //if(u.getusno()!=usern)
                {
                    wf.write((char*)&u,sizeof(u));
                }

                rf.read((char*)&u,sizeof(u));
            }
            wf.close();
            rf.close();
            if(found==1)
            {
                if(found1==0)
                {
                    cout<<"\n Record with class no : "<<classn<<" was deleted successfully !! ";
                    remove("data.dat");
                    rename("temp.dat","data.dat");
                }
                else
                {
                    cout<<"\n Record with class no : "<<classn<<"  was not deleted ! ! ";
                    remove("temp.dat");
                }

            }
            else if(found==0)
            {
                cout<<"\n Record with class no : "<<classn<<" was not found, hence deletion unsuccessful ! ";
                remove("temp.dat");
            }
            cout<<"\n Do you want to delete any other record ? (Y/N) : ";
            char cho4;
            cin>>cho4;
            if(cho4=='Y'||cho4=='y')
            {
                goto start43;
            }
            cout<<"\n Do You want to delete record with any other key word ? (Y/N) : ";
            char cho5;
            cin>>cho5;
            if(cho5=='Y'||cho5=='y')
            {
                goto start4;
            }
            //getch();
            system("cls");
            goto start;
            }
        else if(choicedel==4)//choice4->rollno
        {
            system("cls");
            wf.open("temp.dat",ios::app|ios::binary);
            rf.open("data.dat",ios::in);
            cout<<"\n Enter roll no of the rec to be deleted : ";
            int rolln;
            cin>>rolln;
            int found=0,found1=0;
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(u.getroll()==rolln)
                {
                    found=1;
                    cout<<endl;
                    u.show();
                    cout<<"\n Are you sure you want to delete this record ? (y/n) : ";
                    char choiceconf;
                    cin>>choiceconf;
                    if(choiceconf=='N'||choiceconf=='n')
                    {
                        wf.write((char*)&u,sizeof(u));
                        found1=1;
                    }
                }
                else //if(u.getusno()!=usern)
                {
                    wf.write((char*)&u,sizeof(u));
                }

                rf.read((char*)&u,sizeof(u));
            }
            wf.close();
            rf.close();
            if(found==1)
            {
                if(found1==0)
                {
                    cout<<"\n Record with roll no : "<<rolln<<" was deleted successfully !! ";
                    remove("data.dat");
                    rename("temp.dat","data.dat");
                }
                else
                {
                    cout<<"\n Record with roll no : "<<rolln<<"  was not deleted ! ! ";
                    remove("temp.dat");
                }

            }
            else if(found==0)
            {
                cout<<"\n Record with roll no : "<<rolln<<" was not found, hence deletion unsuccessful ! ";
                remove("temp.dat");
            }
            cout<<"\n Do you want to delete any other record ? (Y/N) : ";
            char cho4;
            cin>>cho4;
            if(cho4=='Y'||cho4=='y')
            {
                goto start43;
            }
            cout<<"\n Do You want to delete record with any other key word ? (Y/N) : ";
            char cho5;
            cin>>cho5;
            if(cho5=='Y'||cho5=='y')
            {
                goto start4;
            }
            //getch();
            system("cls");
            goto start;
            }
        else if(choicedel==5)//sec
        {
            start44:
            system("cls");
            wf.open("temp.dat",ios::app|ios::binary);
            rf.open("data.dat",ios::in);
            cout<<"\n Enter section of the rec to be deleted : ";
            char secn;
            cin>>secn;
            int found=0,found1=0;
            rf.read((char*)&u,sizeof(u));
            while(rf)
            {
                if(u.getsec()==secn)
                {
                    found=1;
                    cout<<endl;
                    u.show();
                    cout<<"\n Are you sure you want to delete this record ? (y/n) : ";
                    char choiceconf;
                    cin>>choiceconf;
                    if(choiceconf=='N'||choiceconf=='n')
                    {
                        wf.write((char*)&u,sizeof(u));
                        found1=1;
                    }
                }
                else //if(u.getusno()!=usern)
                {
                    wf.write((char*)&u,sizeof(u));
                }

                rf.read((char*)&u,sizeof(u));
            }
            wf.close();
            rf.close();
            if(found==1)
            {
                if(found1==0)
                {
                    cout<<"\n Record with section : "<<secn<<" was deleted successfully !! ";
                    remove("data.dat");
                    rename("temp.dat","data.dat");
                }
                else
                {
                    cout<<"\n Record with section : "<<secn<<"  was not deleted ! ! ";
                    remove("temp.dat");
                }

            }
            else if(found==0)
            {
                cout<<"\n Record with section : "<<secn<<" was not found, hence deletion unsuccessful ! ";
                remove("temp.dat");
            }
            cout<<"\n Do you want to delete any other record ? (Y/N) : ";
            char cho4;
            cin>>cho4;
            if(cho4=='Y'||cho4=='y')
            {
                goto start44;
            }
            cout<<"\n Do You want to delete record with any other key word ? (Y/N) : ";
            char cho5;
            cin>>cho5;
            if(cho5=='Y'||cho5=='y')
            {
                goto start4;
            }
            //getch();
            system("cls");
            goto start;
            }
        else if(choicedel==6)//exit
        {
            cout<<"\n PRESS ENTER!! ";
            getch();
            system("cls");
            goto start;
        }
        else
        {
            //system("cls");
            cout<<"\n ENTER A VALID CHOICE! ";
            getch();
            goto start4;
        }
    }
    else if(choice==5)
    {
        system("cls");
admin:
        int choiceadm,switchs=2;
        cout<<"\n ADMIN SETTINGS "<<endl;
        cout<<"\n 1) CREATE / MODIFY PASSWORD \n 2) DELETE PASSWORD SYSTEM \n 3) BACK \n";
        cout<<"\n NOTE:1) If You want to change the password completely its mandotary that you \n        must delete the password system and then create a new password";
        cout<<"\n      2) Using 1st option will enable you to have multiple passwords i,e. the \n         old as well as the new one";
        cout<<"\n \n CHOICE : ";
        cin>>choiceadm;
        if(choiceadm==1)
        {
            fstream f;
            f.open("password.txt");
            char c;
           // f>>c;
            if(f==NULL)
                switchs=1;
            f.close();
            if(switchs==1)
            {
                system("cls");
                cout<<"\n CREATE PASSWORD: ";
                char password[31];
                cin>>password;
                wf.open("password.txt");
                wf<<password;
                wf.close();
                cout<<"\n Password successfully created ! ";
                getch();
                system("cls");
                goto admin;
            }
            else if(switchs==2)
            {
                fstream f;
                system("cls");
                cout<<"\n ADD A PASSWORD ! ";
                cout<<"\n Enter current password : ";
                char password[31];
                char ch[31],m[31],c;
                f.open("password.txt");
               // cout<<"\n Enter the password : ";
                cin>>ch;
                f>>c;
                 int i=0;
                while(f)
                {

                    m[i]=c;
                    f>>c;
                    i++;
                }
                f.close();
                if(strcmp(ch,m)==1)
                {
                    cout<<"\nBAD LUCK ;) Password incorrect ! ";
                    getch();
                    system("cls");
                    goto admin;
                }
                else
                {
                    //char c;
                    ofstream wf;
                     //remove("password.txt");
                    cout<<"\n WELCOME ADMIN ! ";
                    cout<<"\n \n Enter a new password : ";
                    cin>>password;
                    wf.open("password.txt",ios::trunc);
                    wf<<password;
                    wf.close();
                    cout<<"\n Password modified ! ";
                    //rename("temppassword.txt","password.txt");
                    getch();
                    system("cls");
                    goto admin;

                }
            }
        }
        else if(choiceadm==2)
        {
             fstream rf;//doubtful
             system("cls");
        cout<<"\n PASSWORD CHECK"<<endl;
        char ch[31],m[31],c;
        rf.open("password.txt");
        if(rf!=NULL)
        {
        cout<<"\n Enter the password : ";
        cin>>ch;
        rf>>c;
         int i=0;
        while(rf)
        {

            m[i]=c;
            rf>>c;
            i++;
        }
        }
        rf.close();
        if(strcmp(ch,m)==1)
        {
            cout<<"\n BAD LUCK ;) PASSWORD INCORRECT ! ";
            getch();
            goto admin;

        }
        else
        {
             cout<<"\n PASSWORD CORRECT ! \n Press ENTER to remove password system! ";
            // system("cls");
            getch();
            remove("password.txt");
            system("cls");
            goto admin;

        }
        }
        else if(choiceadm==3)
        {
                system("cls");
                goto start;
        }
        else
        {
                cout<<"\n ENTER CORRECT CHOICE ! ";
                getch();
                system("cls");
                goto admin;
        }
    }
    else if(choice==6)
    {
        exit(0);
    }
    else
    {
        system("cls");
        cout<<"\n Please enter a correct choice ! ! ";
        goto wc;
    }
}//main
