#include<iostream>
#include<unistd.h>

using namespace std;

int clock()
{
    int hr = 00;
    int mi = 00;
    int se = 00;
    while(true)
    {
        cout<<hr<<" : "<<mi<<" : "<<se<<endl;
        if(se == 59)
        {
            mi++;
            se = 0;
        }
        else
        {
            se++;
        }
        if(mi == 59)
        {
            hr++;
            mi = 0;
            se = 0;
        }
        if(hr == 23)
        {
            hr = 0;
            mi = 0;
            se = 0;
        }
        sleep(1);
    }
    return(0);
}

