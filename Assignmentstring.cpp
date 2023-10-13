#include<iostream>
#include<algorithm>
using namespace std;
int main(){int n;
cout<<"Enter the size of string(n) : ";
cin>>n;
string s;
cout<<"Enter the string : ";
cin>>s;
// Q 1
for(int i =0;i<n;i++){
    if(i%2 != 0) s[i] = '#';
}
cout<<s;
//Q 2
int count= 0;
string v = "AEIOUaeiou";
for(int i =0;i<n;i++){
    for(int j =0;j<10;j++){
        if(s[i] == v[j]) count++;
    }
}

cout<<"no. of consonant  = "<<(n-count);
//Q 3
int i =0, j = n-1;
while(i<j){
    if(s[i]!= s[j]) {cout<<"NO";
    break;}
    else if(i == j-2) cout<<"Yes";
   i++,j--;
}
//Q 4
int l = s.size()/2;
reverse(s.begin()+l,s.end());
cout<<s;
// Q 5
int sum=0,m =1;
for(int i =n-1;i>=0;i--){
        int a = s[i]-'0';
    sum+=(m*a);
    m*=10;
}
cout<<"integer form is : "<<sum;
}