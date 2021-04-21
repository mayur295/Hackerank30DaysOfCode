#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    int numberOfSwaps=0;
    int totalSwaps=0;
    int i;
    for(int i=0;i<n;i++)
    {
    	cin >> arr[i];
    }
    for (int i = 0; i < n; i++) 
    { 
        numberOfSwaps=0;
       for (int j = 0; j < n - 1; j++) 
       {
        if (arr[j] > arr[j + 1]) 
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            numberOfSwaps++;
            totalSwaps++;
        }
    }
    if (numberOfSwaps == 0) 
    {
        break;
    }
   
}    
    cout<<"Array is sorted in "<<totalSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1]<<endl;
    
    return 0;

}
