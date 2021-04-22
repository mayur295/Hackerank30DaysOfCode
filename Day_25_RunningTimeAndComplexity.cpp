#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int c;
        if(n<2)
        {
            c=1;
        }
        else
        {
         for(int i=2;i*i<=n;i++)
         {
             if(n%i==0)
             {
                 c=1; 
                 break;
             }
             else 
             {
                 c=0;
             }
             
         }   
        }
        
        if(c==1)
        {
            cout<<"Not prime"<<endl;
        }
        else 
        {
            cout<<"Prime"<<endl;          
        }
    }   
    return 0;
}
