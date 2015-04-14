#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,sum;
    sum=0;
    vector<int>cowx(10000,0);
    ifstream infile("file.in",ios::in);
    infile>>n;
    for(i=0;i<n;i++)
    {
        infile>>cowx[i];
    }
    sort(cowx.begin(),cowx.end());
    for(i=9999;i>=9995;i--)
    {
        sum+=cowx[i];
    }
    cout<<sum<<endl;
    return 0;
}
