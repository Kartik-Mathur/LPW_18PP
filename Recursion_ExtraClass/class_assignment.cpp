



//class assignment


#include<iostream>
using namespace std;

int class_assignment(int n)
{
    if(n==1)
    {
        return 2;
    }
    if(n==2)
    {
        return 3;
    }
   int ans =class_assignment(n-1)+class_assignment(n-2);
   return ans;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"#"<<t<<": "<<class_assignment(n)<<endl;
    }
    return 0;
}