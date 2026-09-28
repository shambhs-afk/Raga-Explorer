#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int choice;
cout<<"\n Enter 1 for raag Bhairav";
cout<<"\n Enter 2 for raag Kafi";
cout<<"\n Enter 3 for raag Malkauns";
cout<<"\n Enter 4 for raag Bhoopali";
cout<<"\n Enter 5 for raag Jayjayvanti"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n Re and Dha are komal.";
cout<<"\n Vadi- Dha   Samvadi- Re";
cout<<"\n Time- Morning";
cout<<"\n Thaat- Bhairav";
break;
case 2:
cout<<"\n Ga and Ni are komal.";
cout<<"\n Vadi- Pa    Samvadi-Sa";
cout<<"\n Time- Night";
cout<<"\n Thaat- Kafi";
break;
case 3:
cout<<"\n Ga, Dha and Ni komal.";
cout<<"\n Vadi- Ma    Samvadi-Sa";
cout<<"\n Time- Third watch of the night";
cout<<"\n Thaat- Bhairavi";
break;
case 4:
cout<<"\n Ma and Ni varjya.";
cout<<"\n Vadi- Ga    Samvadi-Dha";
cout<<"\n Time- Night";
cout<<"\n Thaat- Kalyaan";
break;
case 5:
cout<<"\n Ga and Ni shuddha and komal.";
cout<<"\n Vadi-Re     Samvadi-Pa";
cout<<"\n Time- Second watch of the night";
cout<<"\n Thaat- Khamaj";
break;
default:
cout<<"\n Invalid choice";
}
getch();
}