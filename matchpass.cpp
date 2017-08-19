#include "matchpass.h"
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

char matuser[20],matpass[20];
char tempuser[20],temppass[20];
void matchpass:: getmatpass()
{
	
	cout<<"give username alloted";
	cin>>matuser;
	cout<<"give password alloted";
	cin>>matpass;
}
void matchpass::getuser()
{
	getmatpass();
	
	FILE *fp;
	fp = fopen("fixpass.txt","r");
	char coal[20],tar[20];
	fscanf(fp,"%s",coal);
	fscanf(fp,"\n");
	fscanf(fp,"%s",tar);
	strcpy(tempuser,coal);
	strcpy(temppass,tar);
	fclose(fp);
	
}
	
void matchpass::matchespass()
{
	getuser();
	while(strcmp(matuser,tempuser) != 0 || strcmp(matpass,temppass) != 0)
	{
		cout<<"you may have entered wrong username or password\n";
		getuser();
	}
	cout<<"you entered correct password\n";
	cout<<"\n";
	
}
	

