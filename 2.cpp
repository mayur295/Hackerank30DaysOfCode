#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    cin>>j;
    double e;
    cin>>e;
    string str;
    getline(cin ,str);
    getline(cin ,str);
    int sum=i+j;
    cout<<sum<<endl;
    
    double add=d+e;
    cout << fixed << setprecision(1) << add << endl;

    cout<<(s+str);
    
    return 0;
}