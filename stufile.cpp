#include "stufile.h"
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
void stufile::getinfo()
{
		
		cout<<"enter the info. for new file\n";
		cout<<"enter roll\n";
		cin>>marks[0];
		cout<<"enter english\n";
		cin>>marks[1];
		cout<<"enter maths\n";
		cin>>marks[2];
		cout<<"enter sci\n";
		cin>>marks[3];
		cout<<"enter sst\n";
		cin>>marks[4];	
}
void stufile::restric()
{
	//checking for the marks to be below 100//
	do
	{
		cout<<"give marks under 100 only\n";
		getinfo();
	}
	while(marks[1]>=100 || marks[2]>=100 || marks[3]>=100 || marks[4]>=100);
	{
		cout<<"you entered correct marks\n";
	}
}
void stufile::getfile()
{
	int n;
	cout<<"press 1 for creating new file\n";
	cout<<"press 2 to view new file\n";
	cin>>n;
	switch(n)
	{
	
	case 1:
		{
			int total;
			//creating new file//
			char name[30];
			cout<<"give file name\n";
			cin>>name;
			strcat(name,".txt");
			ofstream obj;
			obj.open(name);
			obj<<marks[0]<<"\n";
			obj<<marks[1]<<"\n";
			obj<<marks[2]<<"\n";
			obj<<marks[3]<<"\n";
			obj<<marks[4]<<"\n";
			total = marks[1]+marks[2]+marks[3]+marks[4];
			obj<<total;
			
			obj.close();
			stufile::record(name);
			break;
		}
		case 2:
			{
				char student[30];
				cout<<"give file name to open\n";
				cin>>student;
				strcat(student,".txt");
				ifstream jkl;
				jkl.open(student);
				jkl>>shmar[0];
				jkl>>shmar[1];
				jkl>>shmar[2];
				jkl>>shmar[3];
				jkl>>shmar[4];
				
				cout<<"roll no.:- "<<shmar[0];
				cout<<"\n";
				cout<<"eng no:- "<<shmar[1];
				cout<<"\n";
				cout<<"math no:- "<<shmar[2];
				cout<<"\n";
				cout<<"sci no:- "<<shmar[3];
				cout<<"\n";
				cout<<"sst no.:- "<<shmar[4];
				cout<<"\n";
				break;
			}
		}
	
}
void stufile::record(char merit[])
	{
		//creating a file for keeping record of new file//
		ofstream obj;
		obj.open("merit.txt",ios::app);
		obj<<merit<<"\n";
		obj.close();
	}		
  
		
