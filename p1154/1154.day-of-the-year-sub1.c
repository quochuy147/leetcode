// https://leetcode.com/problems/day-of-the-year

int dayOfYear(char* date) {
    int year, month, day, day_number = 0, j;
    char y[5], m[3], d[3];
    strncpy(y, &date[0], 4);
    strncpy(m, &date[5], 2);
    strncpy(d, &date[8], 2);
    year = atoi(y);
    month = atoi(m);
    day = atoi(d);
    for(int i = 1; i < month; ++i) {
        j = i;
        if(j == 2) {
            day_number += 28;
            if(year % 4 == 0) day_number++;
            continue;
        }
        if(j > 7) j++;
        if(j % 2 != 0) day_number += 31;
        else day_number += 30;
    }
    day_number += day;
    return day_number;
}
