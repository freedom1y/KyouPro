#include "bits/stdc++.h"
using namespace std;

int main(){
    char digit;
    int oddChecksum = 0;
    int evenChecksum = 0;
    int position = 1;
    string JAN;
    cout << "Enter a JAN code: ";
    digit = cin.get();
    while(position < 13){
        if(position % 2 == 0){
            evenChecksum += digit - '0';
        }else{
            oddChecksum += digit - '0';
        }
        JAN += digit;
        digit = cin.get();
        position++;
    }
    JAN += digit;
    int checksum = evenChecksum * 3 + oddChecksum;
    int checkDigit = digit - '0';
    cout << "JAN code is " << JAN << ". \n";
    if((10 - checksum % 10) == checkDigit){
        cout << "JAN code is correct. \n";
    }else{
        cout << "Checksum is incorrect. \n";
    }
}