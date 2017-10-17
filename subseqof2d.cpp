#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void subsequences(char input[],char output[],vector<string> &vs,int i=0,int j=0){
    ///Base Case
    if(input[i]=='\0'){
        output[j]='\0';
       // cout<<output<<endl;
        string s(output);
        vs.push_back(s);
        return;
    }
    ///Rec Case
    ///Include the ith Character
    output[j] = input[i];
    subsequences(input,output,vs,i+1,j+1);

    ///Exclude the ith Character
    subsequences(input,output,vs ,i+1,j);

}


int main(){
    //char input[] = "abc";
    char output[100];
    vector<string> vs;
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
    //vs.clear(output);
    vector<string> vs;

        for(j=0;inpu[i][j]!='\0';j++)
            input[j]=inpu[i][j];

            input[j]='\0';

                subsequences(input,output,vs,0,0);

                sort(vs.begin(),vs.end());

                for(int k=0;k<vs.size();k++)
                 cout<<vs[k]<<endl;
    }








return 0;
}
