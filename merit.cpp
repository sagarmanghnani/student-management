#include "merit.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void merit::data()
{
	char line[30];
	ifstream obj;
	obj.open("merit.txt");
	obj.seekg(ios::end);
	obj>>line;
	cout<<line;
}
