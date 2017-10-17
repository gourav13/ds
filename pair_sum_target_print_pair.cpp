#include<iostream>
using namespace std;

int main()
{       int a[1000];//={1,2,3,4,5,5,6,7,8,2};
  //  int f[10];
    int n;
    int sum;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>sum;
    int small;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
                {
                    small=a[i];
                    a[i]=a[j];
                    a[j]=small;
                }
        }
    }
    for(int i=0;i<n;i++)
    { if(a[i]==a[i+1])
       a[i]=0;

    }


  //  for(int i=0;i<n;i++)
    {
//        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            if(i!=j)
                if(a[i]!=0&&a[j]!=0)
              {if(a[i]+a[j]==sum)
               cout<<a[i]<<" and "<<a[j]<<endl;}
    }
    return 0;

}
