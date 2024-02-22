#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

bool valid_braces(string braces);
bool braceIsEven(string braces);

int main() {
    cout << braceIsEven("(([]");
}

bool valid_braces(string braces) {
    map<char, int> braceNotError = { {'(', true},
                                {')', true},
                                {'{', true},
                                {'}', true},
                                {'[', true},
                                {']', true} };
    return true;
}

bool braceIsEven(string braces) {
    bool boolResult = true;
    int parenCount = ranges::count(braces, '(')
        + ranges::count(braces, ')');

    int braceCount = ranges::count(braces, '{')
        + ranges::count(braces, '}');

    int bracketCount = ranges::count(braces, '[')
        + ranges::count(braces, ']');

    /* New C++2022 Method
    for(char ch: braces){
        switch(ch){
            case '(' :
                parenCount++;
                break;
            case ')' :
                parenCount++;
                break;
            case '{' :
                braceCount++;
                break;
            case '}' :
                braceCount++;
                break;
            case '[' :
                bracketCount++;
                break;
            case ']' :
                bracketCount++;
                break;
            default  :
                break;
        }
    }*/
    if (parenCount % 2 || braceCount % 2 || bracketCount % 2)
        boolResult = false;
    return boolResult;
}