#include<bits/stdc++.h>
#include<iomanip>
#include<fstream>
using namespace std;
using std::setw;
int main()
{
    // int arr[1000];
    // for(int i=1;i<=1000;i++)
    // {
    //     arr[i-1] = i;
    // }
    // cout << "Element" << setw(13) << "Value" <<endl;
    // for(int j=1;j<=1000;j++)
    // {
    //     cout << setw(7) << j << setw(13) << arr[j-1] <<endl;
    // }   
    // return 0;
    
    ofstream outfile;
    outfile.open("create_num.txt",ios::out);
    int arr[1000];
    for(int i=1;i<=1000;i++)
    {
        arr[i-1] = i;
        cout << arr[i-1] << endl;
        outfile << arr[i-1] << '\n';
    }
    outfile.close();

    return 0;
}
