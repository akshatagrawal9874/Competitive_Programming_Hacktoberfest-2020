/*Probem Statement: Longest Pallindrome in a String
Input:
1
aaaabbaa
Output: 
aabbaa
Explanation: Testcase 1: The longest palindrome string present in the given string is "aabbaa".
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        string str;
        cin>>str;
        int maxlength=1;
        int i, low, high, start, n, end;
        n=str.length();
        
        for(i=1; i<n; i++)
        {
            low=i-1;
            high=i;
            while(str[low]==str[high] && low>=0 && high<n)
            {
                    if(high-low+1>maxlength)
                    {
                        start=low;
                        maxlength=high-low+1;
                        end=high;
                    }
                    --low;
                    ++high;
            }
            low=i-1;
            high=i+1;
            while(str[low]==str[high] && low>=0 && high<n)
            {
                    if(high-low+1>maxlength)
                    {
                        start=low;
                        maxlength=high-low+1;
                        end=high;
                    }
                    --low;
                    ++high;
            }
            
        }
        if(maxlength==1)
        {
        cout<<str[0];
        cout<<endl;
        }
        else
        {
        for(i=start; i<=start+maxlength-1;i++)
        cout<<str[i];
        cout<<endl;
        }
    }
    
    return 0;
}