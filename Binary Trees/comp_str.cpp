#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;

int compCount(int n, string str){
    int i=0;
        for(int j = 1; j<str.length(); j++){
            if(str[i]==str[j]){
                str.erase(i);
                str.erase(j);
                n=n-1;
                break;
            }
        }

        
    

}

int main(){
    int n;
    string str;
    cin>>n>>str;
    
    int compCount(int n, string str)
    
    return 0;

}