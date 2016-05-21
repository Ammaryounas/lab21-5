#include<iostream>

using namespace std;

class musicband
{
	private:
	
	int members;
	public:
		musicband();
		virtual getcount(); 	
		virtual setcount();
		~musicband();
	protected:
		int count;
};
class metal:public musicband
{
	
};
class symphony:public musicband
{
	
};
class jazz: public  musicband
{
	
};
class marching:public musicband
{
	
};
int main(void)
{
	
}
