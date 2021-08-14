// https://leetcode.com/problems/calculate-money-in-leetcode-bank/

int totalMoney(int n) {
    int weeks = n / 7, money = 0, week = 7;
    money = weeks * 28;
    for(int i = 1; i < weeks; ++i) {
        money += week;
        week += 7;
    }
    if(weeks * 7 == n) return money;
    int days = weeks + 1, size = n - weeks * 7;
    for(int i = 0; i < size; ++i) {
        money += days;
        days++;
    }
    return money;
}
