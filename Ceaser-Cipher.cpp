#include<iostream>
using namespace std;
string encrypt(string &inp){
string res = inp;
int i=0;
for(char c : inp){
res[i] = c+4;
i++;
}
return res;
}

string decrypt(string &inp){
string res = inp;
int i=0;
for(char c : inp){
res[i] = c-4;
i++;
}
return res;
}

int main(){
string inp,enc,dec;
cout<<"Enter the string: ";
 getline(cin, inp);
//cout<<inp;
enc = encrypt(inp);
dec = decrypt(enc);
cout<<"\n Encryption:"<<enc;
cout<<"\nDecryption:"<<dec;
}
