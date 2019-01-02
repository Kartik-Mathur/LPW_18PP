

//advance keypad 

#include<bits/stdc++.h>
using namespace std;

string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void searchSubstring(string sol)
{
    for(int m=0;m<11;m++)
    {
        int n=searchIn[m].length();
        for (int i = 0; i<n; i++) 
        {
            for (int len = 1; len <= n - i; len++) 
            {
               // cout << searchIn[m].substr(i, len) << endl;  
               string c=searchIn[m].substr(i, len); 
               if(c==sol)
               {
                   cout<<searchIn[m]<<endl;
               }
            }
          
        }
       
    }
   
}



void smartKeypad(char *str,char *sol,int i,int j)
{
    if(str[i]=='\0')
    {
        sol[j]='\0';
       // cout<<sol<<endl;
        searchSubstring(sol);
        return;
    }
    
    int index=str[i]-'0';
    for(int k=0;table[index][k]!='\0';k++)
    {
        sol[j]=table[index][k];
        smartKeypad(str,sol,i+1,j+1);
    }
}



int main() 
{
    char str[1000];
    cin>>str;
    char sol[1000];
    smartKeypad(str,sol,0,0);
	return 0;
}