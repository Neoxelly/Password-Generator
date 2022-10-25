#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
using namespace std;
void passwordGenerator(){
    srand(time(NULL));
    char lowercase[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char uppercase[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char rString1[13];
    char rString2[13];
    int number = rand() % 99 + 1;
    int i(0);
    while(i < 13){
        int temp1 = rand() % 26;
        int temp2 = rand() % 26;
        rString1[i] = lowercase[temp1];
        rString2[i] = uppercase[temp2];
        i++;
    }
    int br(0);
    string password = "";
    for(int i = 1; i <= 12; i++){
        password.append(string(&rString1[i], 1));
        password.append(string(&rString2[i], 1));
    }
    cout<<password;
    cout<<number;
}
int main(){
    again:cout<<"Generated Password:\n";
    passwordGenerator();
    cout<<endl;
    cout<<"Do you need to generate a new one? (Y/N)\n";
    char answer;
    input:cin>>answer;
    switch(answer){
        case 'Y': case 'y': goto again; break;
        case 'N': case 'n': cout<<"See you next time!"; break;
        default: cout<<"Unknown input (Y/N):\n"; goto input; break;
    }
    return 0;
}