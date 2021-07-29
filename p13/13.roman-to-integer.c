// https://leetcode.com/problems/roman-to-integer/

int romanToInt(char* s){
    int s_roman['Z'], s_int = 0;
    s_roman['I'] = 1;
    s_roman['V'] = 5;
    s_roman['X'] = 10;
    s_roman['L'] = 50;
    s_roman['C'] = 100;
    s_roman['D'] = 500;
    s_roman['M'] = 1000;
    int size = strlen(s) - 1;
    s_int += s_roman[s[size]];
    for(int i = size - 1; i >=0; i--) {
        if(s_roman[s[i]] < s_roman[s[i + 1]]) s_int -= s_roman[s[i]];
        else s_int += s_roman[s[i]];
    }
    return s_int;
}

