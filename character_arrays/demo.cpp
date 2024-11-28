#include<iostream>
#include<cstring>
using namespace std;

void readLineUsingCin(char arr[], char delimeter = '\n') {
    char ch;
    ch = cin.get();
    int i = 0;
    while(ch != delimeter) {
        arr[i] = ch;
        i++;
        ch = cin.get();
    }

    cout << arr << endl;
}

void readLineUsingGetLine(char arr[]) {
    cin.getline(arr, 100);
    cout << arr << endl;
}

void findLength(char arr[]) {
    int len = 0;
    for (len = 0; arr[len] != '\0'; len++) {
    }
    cout << "Length of char array using for loop: " << len << endl;
    cout << "Length of char array using inbuilt function: " << strlen(arr) << endl;
}

bool isPalindromeString(char arr[]) {
    int i = 0, j = strlen(arr)-1;
    // cout << j << endl;
    // cout << strlen(arr) << endl;
    while(i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main () {
    // character arrays: used to store string in cpp
    // Strings: set of character stored with NULL at the end.

    // initialization
    // char a1[5] = {'A','B','C','D', '\0'}; // providing null character at the end of the character is 
    // // important as it keep reading data/char for the memory till it finds the null character
    // int i = 0; 
    // while(a1[i] != '\0') {
    //     cout << a1[i] << " ";
    //     i++;
    // }
    // cout << endl;

    // readLine in cpp 
    // while taking character array/string input in cpp using cin it skips till it hits special characters
    // like space, new line and other chars...
    // to avoid this we can either use getline or cin.get()
    char charArr1[100];
    //readLineUsingCin(charArr1);
    readLineUsingGetLine(charArr1);
    //findLength(charArr1);
    cout << isPalindromeString(charArr1);
    return 0;
}