

//nknight 

#include<iostream>
using namespace std;

bool canPlace(int i,int j,int sol[1000][1000],int n)
{
    if(sol[i][j])
    {
        return false;
    }
    
    if ((i + 2) < n && (j - 1) >= 0) 
    { 
        if(sol[i + 2][j - 1]!=0)
           return false;
    } 
    if ((i - 2) >= 0 && (j - 1) >= 0)
    { 
        if(sol[i - 2][j - 1]!=0)
        return false;
    } 
    if ((i + 2) < n && (j + 1) < n)
    { 
        if(sol[i + 2][j + 1]!=0)
        return false;
    } 
    if ((i - 2) >= 0 && (j + 1) < n) { 
        if(sol[i - 2][j + 1]!=0)
        return false;
    } 
    if ((i + 1) < n && (j + 2) < n)
    { 
        if(sol[i + 1][j + 2]!=0)
        return false;
    } 
    if ((i - 1) >= 0 && (j + 2) < n) 
    { 
        if(sol[i - 1][j + 2]!=0)
        return false;
    } 
    if ((i + 1) < n && (j - 2) >= 0)
    { 
        if(sol[i + 1][j - 2]!=0)
        return false;
    } 
    if ((i - 1) >= 0 && (j - 2) >= 0) 
    { 
        if(sol[i - 1][j - 2]!=0)
        return false;
    } 
    return true;
    
}


bool placeKnight(int n,int i,int j,int sol[1000][1000],int k)
{
    if(k==0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<sol[i][j];
            }

            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    
    for(int p=i;p<n;p++)
    {
        for(int q=j;q<n;q++)
        {
            if(canPlace(p,q,sol,n))
            {
                sol[p][q]=1;
                if(placeKnight(n,p,q,sol,k-1))
                    return true;
                
                sol[p][q]=0;    
            }
          
        }
        j=0;
    }
    
    return false;
}


int count1=0;
bool placeKnight1(int n,int i,int j,int sol[1000][1000],int k)
{
    if(k==0)
    {
        count1++;
        return false;

    }
    for(int p=i;p<n;p++)
    {
        for(int q=j;q<n;q++)
        {
            if(canPlace(p,q,sol,n))
            {
                sol[p][q]=1;
                if(placeKnight1(n,p,q,sol,k-1))
                    return true;
                
                sol[p][q]=0;    
            }
          
        }
        j=0;
    }
    
    return false;
}









int main() 
{
    int n;
    cin>>n;
    int sol[1000][1000];
    placeKnight1(n,0,0,sol,n);
    cout<<count1<<endl;
    placeKnight(n,0,0,sol,n);
    return 0;
}