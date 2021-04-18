#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    string s;
    cin>>t;
    for (int i=0; i<t; i++) 
    {
      cin>>s;
      string s1;
      string s2;
      for(int j=0;j<s.size();j++)
      {
          if(j==0 || j%2==0)
          {
              s1 += s[j];
          }
          else
          {
              s2 += s[j];
          }   
      }
      cout<<s1<<" "<<s2<<endl;
    }  
    return 0;
}
