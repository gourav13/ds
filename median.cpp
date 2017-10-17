#include<iostream>
#include<cmath>
using namespace std;

void getarray(int *a,int n,int i=0)
{
    if(i==n)
        return;
    else
    {
        cin>>a[i];
        cout<<"\t";
        getarray(a,n,i+1);
    }
    return;
}

/*void merge(int*a,int *b,int *c,int n,int i=0,int j=0)
{   int k=i+j;
   cout<<c[k-1];
    if((i+j)>=(2*n))
        return;
//    else if()

    else
    {

              // if(i<n&&j<n)
                {
                 if((a[i]<=b[j]))
                   {
                       c[k]=a[i++];
                       merge(a,b,c,n,i,j);
                   }

                else if(a[i]>b[j])
                    {c[k]=b[j++];
                      merge(a,b,c,n,i,j);
                    }

                  else
                        int p=0;

                }

                else
                 {
                    if(i==n)
                    {c[k]==b[j++];
                      merge(a,b,c,n,i,j);
                    }
                     else
                        {
                            c[k]==a[i++];
                            merge(a,b,c,n,i,j);
                        }
                 }

       }



    return;
}
*/
int main()
{
    int a[10],b[10];
    int c[20];
    int n;
    cin>>n;
     getarray(a,n);
     cout<<"\n";
     getarray(b,n);
     //for(int i=0;i<n;i++)
       // cout<<a[i]<<b[i];
     //cout<<a;
     //merge(a,b,c,n);
     int k=0;
     for(int i=0,j=0;k<2*n;k++)
     {
         if(i<n&&j<n)
         {
             if(a[i]<=b[j])
             {
               c[k]=a[i++];
             }
             else if(b[j]<a[i])
                c[k]=b[j++];

         }
         else
         {    if(i==n)
             c[k]=b[j++];
             else
                c[k]=a[i++];
         }
     }
    // for(int i=0;i<2*n;i++)
       // cout<<c[i];

        //for(int i=0;i<2*n;i++)
      int m=c[((2*n/2)-1)]+c[(2*n/2)];
      float q=m;
      double e=q;
      e=e/2;
      floor(e);
      int d=e;
    cout<<endl<<d;
    return 0;

}
