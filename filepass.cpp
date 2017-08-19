#include "filepass.h"
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

void filepass::filefixpass()
{
    restrict();
	FILE *fp;
	fp = fopen("fixpass.txt","w");
	fprintf(fp,"%s",fixuser);
	fprintf(fp,"\n");
	fprintf(fp,"%s",fixpass);
	fclose(fp);	
}

void filepass ::restrict()
{
	int struser,strpass;
	do
	{
		cout<<"please give password and username more then 5 characters\n";
		getfixpass();
		struser = strlen(fixuser);
		strpass = strlen(fixpass);
	}
	while(struser < 5 && strpass < 5);
	cout<<"thanks\n";
	 
}

void filepass::getfixpass()
{
	cout<<"give username\n";
	cin>>fixuser;
	cout<<"give password\n";
	cin>>fixpass;
	cout<<"\n";
}

	
