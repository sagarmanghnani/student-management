#ifndef FILEPASS_H
#define FILEPASS_H

class filepass
{
	protected:
		char fixpass[20],fixuser[20];
	public:
		void filefixpass();
		void restrict();
		void getfixpass();
};

#endif
