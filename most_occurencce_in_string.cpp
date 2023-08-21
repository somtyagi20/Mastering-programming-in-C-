#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string s;
    getline(cin,s);
    int n=s.length(),occurence=0;
    for(int i=0;i<(n-1);i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                count=count+1;
            }
        }
        occurence=max(count,occurence);
    }
    cout<<occurence;
    return 0;
}
