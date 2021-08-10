// https://leetcode.com/problems/complement-of-base-10-integer/

int bitwiseComplement(int n) {
    char* bin = calloc(30, sizeof(char));
    int count = 0, end = 0, power = 1, dec = 0;
    if(n == 0) bin[count++] = '0';
    while(n > 0) {
        int tmp = n % 2;
        bin[count++] = (char)(tmp + 48);
        n /= 2;
    }
    end = count - 1;
    count = 0;
    for(int i = end; i >= 0; --i) {
        if(bin[i] == '0') bin[i] = '1';
        else bin[i] = '0';
    }
    for(int i = 0; i <= end; ++i) {
        dec += (bin[i] - 48) * power;
        power *= 2;
    }
    free(bin);
    return dec;
}
