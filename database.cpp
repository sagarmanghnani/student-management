#include "database.h"
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

void database::tryi()
{

	char line[40];
	ifstream obj;
	obj.open("merit.txt");
	while(obj)
	{
		obj.getline(line);
		cout<<line;
	}
	obj.close();
}
