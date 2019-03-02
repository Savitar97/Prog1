#include <stdio.h>
#include <math.h>

void
kiir (vector<double> tomb)
{
int i;
for (i=0; i<tomb.size(); i++)
cout << "PageRank [" << i << "]: " << tomb[i] << endl;
}

double tavolsag(vector<double> pagerank,vector<double> pagerank_temp)
{
double tav = 0.0;
int i;
for(i=0;i<pagerank.size();i++)
tav +=abs(pagerank[i] - pagerank_temp[i]);
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
