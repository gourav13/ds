#include<iostream>
using namespace std;

void replacePi(char *a,int i){
    ///Base Case
    if(a[i]=='\0'||a[i+1]=='\0'){
        return;
    }
    ///Rec Case
    if(a[i]=='3'&&a[i+1]=='.'&&a[i+2]=='1'&&a[i+3]=='4'){

            int j = i+2;
            /*while(a[j]!='\0'){
                j++;
            }*/

            while(a[j+2]!='\0'){
                a[j] = a[j+2];
                j++;
            }
            if(a[j+2]=='\0')
             a[j]='\0';

            a[i] = 'p';
            a[i+1] = 'i';
            //a[i+2] = '1';
            //a[i+3] = '4';

            replacePi(a,i+2);

    }
    else{
        replacePi(a,i+1);
    }
}


int main(){
    //char input[100] = "xpipypihpi";
    char inpu[10][100];
    char input[100];

    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
         cin.getline(inpu[i],100);
    }
    for(int i=0;i<n;i++)
    { int j=0;
        for(j=0;inpu[i][j]!='\0';j++)
            input[j]=inpu[i][j];
            input[j]='\0';
                replacePi(input,0);
                cout<<input<<endl;
    }


return 0;
}
