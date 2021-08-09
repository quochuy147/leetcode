// https://leetcode.com/problems/maximum-69-number/

int maximum69Number (int num) {
    int rev_num = 0;
    while(num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    int turn = 1, tmp;
    while(rev_num > 0) {
        tmp = rev_num % 10;
        if(tmp == 6 && turn == 1) {
            tmp = 9;
            turn = 0;
        }
        num = num * 10 + tmp;
        rev_num /= 10;
    }
    return num;
}
