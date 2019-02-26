#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

void rajzol(vector<string> palya,int x,int y,char labda);


int main()
{
    char labda='o';
    string sor,kivetel;
    int x=80,y=18,xt=1,yt=1,labx=0,laby=0;
    vector<string> palya;

    for (int i = 1; i < x; ++i)
    {   kivetel+='-';
        sor+=' ';
    }
    palya.push_back(kivetel);

    for (int i = 0; i < y; ++i)
    {
        palya.push_back(sor);
    }

    palya.push_back(kivetel);

   
    for(;;)
    {
        
            labx+=xt;
            laby+=yt;
            if(labx>=x-1)
                {xt*=-1;}
            else if (laby>=y-1)
                {yt*=-1;}
            else if (labx<=0)
                {xt*=-1;}
            else if (laby<=0)
                {yt*=-1;}
        rajzol(palya,labx,laby,labda);
        usleep(100000);
    }


    return 0;
}

void rajzol(vector<string> palya,int x,int y,char labda)
{
    system("clear");
    palya[y][x]=labda;
     for (int i = 0; i < palya.size(); ++i)
    {
        cout<<palya[i]<<'\n';
    }
}