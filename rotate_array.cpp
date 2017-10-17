#include<iostream>
using namespace std;

int main()
{
    int m,n;
    n=m=4;
 cin>>n;
 m=n;
    //int a[100][100]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
      int a[100][100];
     for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {     cin>>a[i][j];
        cout<<" ";
        }
        cout<<endl;
       }

    for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {// cin<<a[i][j];
            //cout<<a[i][j]<<"  ";
        }
        //cout<<endl;
       }

  int temp;
    for(int i=0;i<n;i++)
       {
        for(int j=i;j<m;j++)
        {// cin<<a[i][j];
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            //cout<<a[i][j]<<" ";
        }
        //cout<<endl;
       }
//dispaly after swap
    for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {   //  cout<<a[i][j]<<"  ";
        }
        //cout<<endl;
       }

//row swap
    for(int i=0;i<n/2;i++)
       {
        for(int j=0;j<m;j++)
        {
            temp=a[i][j];
            a[i][j]=a[n-i-1][j];
            a[n-i-1][j]=temp;

            // cout<<a[i][j]<<"  ";
        }
        //cout<<endl;
       }


       //cout<<endl;
 // display after row
    for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {     cout<<a[i][j]<<"  ";
        }
        cout<<endl;
       }

        return 0;
}
