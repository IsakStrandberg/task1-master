// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int replace_chars(char *str, char search, char repl) 
{
    for(int x = 0; x < 5; x++){
        if (*str == search) {
            *str = repl;
        }
        str++;
    
    }
    return 0;
}

int main()
{
    char word[] = "banana";
    char search[] = "n";
    char repl[] = "l";
    for (int x = 0; x < strlen(word); x++) {
        cout << word[x];
    }

    replace_chars(word, *search, *repl);

    cout << " ";
    for (int x = 0; x < strlen(word); x++) {
        cout << word[x];
    }
    system("pause");
    return 0;
}

