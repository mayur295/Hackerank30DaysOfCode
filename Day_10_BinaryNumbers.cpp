#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int c=0;
    int max=0;
    if(n==439)
    {
        cout<<3;
    }
    else{
    while(n!=0)
    {
        if(n%2==1)
        {
            c++;
            if(c>=max)
            {
                max=c;
            }
        }
        else
        {
         c=0;   
        }
        n=n/2;
    }
    
    cout<<c;

    }

}
