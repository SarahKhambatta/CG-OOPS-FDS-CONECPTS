#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class student
{
private:
string name;
int rollno;
int mark;
public:
void getdata()
{
ofstream ofs;
ofs.open("student.txt",ios::app);
if(!ofs)
cout<<"Problem in file creation";
else
{
cout<<"Enter name of student: ";
cin>>name;
cout<<"Enter roll no: ";
cin>>rollno;
cout<<"Enter marks: ";
cin>>mark;
ofs<<rollno<<"\t"<<name<<"\t"<<mark<<endl;
ofs.close();
}
}
void display()
{
 ifstream ifs;
string line;
 ifs.open("student.txt");
 if(!ifs)
 cout<<"\n Error in reading file..\n";
 else
 {
 while(!ifs.eof())
 {
 getline(ifs,line);
 
cout<<line<<endl;
 }
 }
}
};
int main()
{
student s1;
int ch;
do
{
 cout<<"\n Student database:";
 cout<<"\n Menu";
 cout<<"\n 1. Add student record";
 cout<<"\n 2. Display student record";
 cout<<"\n 3. Exit";
 cout<<"\n Enter your choice: ";
 cin>>ch;
 switch(ch)
 {
 case 1:
 s1.getdata();
 break;
 case 2:
 s1.display();
 break;
 case 3:
 exit(0);
 }
}while(ch!=3);
 
return 0;
}