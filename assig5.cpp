#include<iostream>
using namespace std;
template<class T>
class sort
{
//data_type arrayname[size];
T a[50];
int n;
public:
void accept()
{
cout<<"\n Enter no. of elements in an array: ";
cin>>n;
cout<<"\n Enter elements: ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
void selection_sort() // 65 28 12 9 75 - 9 28 12 65 75 - 9 12 28 65 75 - 9 12 
28 65 75
 {
 T temp;
for(int i=0;i<n-1;i++) 
{ 
int min=i; 
for(int j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
}
void display()
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
cout<<endl;
}
};
int main()
{
sort <int> s1;
cout<<"\n-------Int Array-------\n";
s1.accept();
s1.selection_sort();
s1.display();
sort <float> s2;
cout<<"\n-------Float Array-------\n";
s2.accept();
s2.selection_sort();
s2.display();
return 0;