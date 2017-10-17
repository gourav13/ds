#include<iostream>
using namespace std;

int main()
{unsigned long long int sum=0;
    int n=3,a[10];//={3,4,5};
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {unsigned long long int p=1;
     // if(a[i]==0)
       //p=0;
        for(int j=1;j<=a[i];j++)
        {
            p*=j;
        }
        sum+=p;
    }

    cout<<sum%107;
    return 0;

}
