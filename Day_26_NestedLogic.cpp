#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ad,am,ay;
    cin>>ad>>am>>ay;
    int ed,em,ey; 
    cin>>ed>>em>>ey;
    if(ey==ay)
    {
        if(am==em)
        {
            if(ad==ed)
            {
                cout<<0<<endl;
            }
            else
            {
                if(ad>ed)
                {
                    cout<<(ad-ed)*15<<endl;
                }
                else {
                    cout<<0<<endl;
                }
            }
        }
        else
        {
            if(am>em)
            {
                cout<<(am-em)*500<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }
    }
    else
    {
       if(ay>ey)
       {
           cout<<10000<<endl;
       } 
       else {
           cout<<0<<endl;
       }
    }
    return 0;
}
