#ifndef MATCHPASS_H
#define MATCHPASS_H

#include "filepass.h"

class matchpass : public filepass
{
	protected:
		char matuser[20],matpass[20];
		char tempuser[20],temppass[20];
		public:
			void getmatpass();
			void matchespass();
			void getuser();
};

#endif
