#include "std_lib_facilities.h"
#include <unistd.h>

void rajzol(vector<string> palya,int x,int y,char labda);
void beker(int &magassag,int &szelesseg,char &palyaelem,char &labda);

int main()
{

	bool futtat=true;
	vector<string> palya;
	char labda,palyaelem,ures=' ';
	string ureshely="",palyaalkoto="";
	int x=1,y=1,szelesseg,magassag,tmagassag;

	beker(magassag,szelesseg,palyaelem,labda);


	for(int i=0;i<szelesseg;i++)
		{	
			palyaalkoto+=palyaelem;
			ureshely+=ures;
		}

	cout<<palyaalkoto<<endl;
	cout<<ureshely<<endl;

	for(int i=0;i<magassag;i++)
		{
			palya.push_back(ureshely);
		}

	palya[0]=palyaalkoto;
	palya[magassag-1]=palyaalkoto;
	tmagassag=magassag-1;
	int lepteto=1;

	while(futtat)
		{
			x=abs(szelesseg-lepteto%(2*szelesseg));
			y=abs(tmagassag-lepteto%(2*tmagassag));
			rajzol(palya,x,y,labda);
			lepteto++;
			usleep(100000);
		}

return 0;
}
//end main

void beker(int &magassag,int &szelesseg,char &palyaelem,char &labda)
{
	cout<<"Add meg milyen elemből álljon a pálya:";
	cin>>palyaelem;
	do
		{
			cout<<"Add meg a pálya szélességét(10-130):";
			cin>>szelesseg;
			cout<<"Add meg a pálya magasságát(4-32):";
			cin>>magassag;
		}
	while(szelesseg<10 || magassag<4 || szelesseg>130 || magassag>32);
	cout<<"Add meg mi legyen a labda:";
	cin>>labda;
}

void rajzol(vector<string> palya,int x,int y,char labda)
{

	system("clear");
	palya[y][x]=labda;

	for(int i=0;i<palya.size();i++)
		{
			cout<<palya[i]<<endl;
		}
}

