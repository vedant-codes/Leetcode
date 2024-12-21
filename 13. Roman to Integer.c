int romanToInt(char* s) {
    int roman[256] = {0}; 
    roman['I'] = 1; roman['V'] = 5; roman['X'] = 10;
    roman['L'] = 50; roman['C'] = 100; roman['D'] = 500; roman['M'] = 1000;

    int ans = roman[s[strlen(s) - 1]]; 
    
    for (int i = strlen(s) - 2; i >= 0; i--) {
        if (roman[s[i]] >= roman[s[i + 1]]) {
            ans += roman[s[i]];
        } else {
            ans -= roman[s[i]];
        }
    }
    
    return ans;
}
