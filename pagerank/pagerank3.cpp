#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
using namespace std;

void kiir(vector<double> tomb)
{
	vector<double>::iterator t;
	int i=0;
	for (t=tomb.begin(); t!=tomb.end(); t++)
	{
		cout << "PageRank [" << i << "]: " << *t << '\n';
		i++;
	}
}

double tavolsag(vector<double> pagerank,vector<double> pagerank_temp)
{
	vector<double>::iterator pg=pagerank.begin();
	vector<double>::iterator pgt=pagerank_temp.begin();
	double tav = 0.0;
	for(pg=pagerank.begin();pg!=pagerank.end();pg++)
		{
			tav +=abs(*pg - *pgt);
			pgt++;
		}
return tav;
}

int main(void)
{
bool a=true;
vector<vector<double>> L = {
		{0.0, 0.0, 1.0 / 3.0, 0.0},
		{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
		{0.0, 1.0 / 2.0, 0.0, 0.0},
		{0.0, 0.0, 1.0 / 3.0, 0.0}
};

vector<double> PR = {0.0, 0.0, 0.0, 0.0};
vector<double> PRv = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

long int i,j;
i=0; j=0;

while(a)
{
	for(i=0;i<4;i++)
		PR[i] = PRv[i];
	for (i=0;i<4;i++)
		{
			double temp=0;
			for (j=0;j<4;j++)
				temp+=L[i][j]*PR[j];
			PRv[i]=temp;
		}

	if ( tavolsag(PR,PRv) < 0.00001)
		a=false;
}
kiir (PR);
return 0;

} 
