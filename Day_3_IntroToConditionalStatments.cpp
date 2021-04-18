#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (N%2==0 && 2<=N && 5>=N) 
      cout<<"Not Weird";
    else if (N%2==0 && 6<=N && 20>=N) 
      cout<<"Weird";
    else if (N%2==0 && 20<=N) 
      cout<<"Not Weird";
    else
      cout<<"Weird";
    return 0;
}
