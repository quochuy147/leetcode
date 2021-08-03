// https://leetcode.com/problems/base-7/

char* convertToBase7(int n) {
    if(n == 0) return "0";
    char* base7 = calloc(11, sizeof(char));
    char* rev_base7 = calloc(11, sizeof(char));
    int num = 0, count = 0;
    bool check = false;
    if(n < 0) check = true;
    n = abs(n);
    while(n != 0) {
        num = n % 7;
        base7[count++] = (char)num + 48;
        n /= 7;
    }
    count = 0;
    if(check) rev_base7[count++] = '-';
    int size = strlen(base7);
    for(int i = size - 1; i >= 0; --i) {
        rev_base7[count++] = base7[i];
    }
    free(base7);
    return rev_base7;
}
