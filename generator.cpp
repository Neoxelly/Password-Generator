#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
using namespace std;
/*
    Password needs to be 14 characters long
    Needs to have uppercase and lowercase letters
    Needs to numbers
    And one symbol
*/
void passwordGenerator(){
    srand(time(NULL));
    char lowercase[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char uppercase[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char rString1[12];
    char rString2[12];
    int number = rand() % 99 + 1;

    //char symbols[] = {'!', '~', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '-', '+', '=', '{', '[', '}', ']', '|', ':', ';', '<', '>', '.', '?', '/'};

    int i(0);
    while(i<12){
        int temp1 = rand() % 26;
        int temp2 = rand() % 26;
        rString1[i] = lowercase[temp1];
        rString2[i] = uppercase[temp2];
        i++;
    }

    string password = "";
    for(int i = 1; i <= 12; i++){
        password.append(string(&rString1[i], 1));
        password.append(string(&rString2[i], 1));
    }
    cout<<password;
    cout<<number;
}
int main(){
    cout<<"Generated Password:\n";
    passwordGenerator();
    return 0;
}