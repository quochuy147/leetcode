// https://leetcode.com/problems/day-of-the-year/

int dayOfYear(char* date) {
    int year, month, day, day_number = 0, j;
    char y[5], m[3], d[3];
    strncpy(y, &date[0], 4);
    strncpy(m, &date[5], 2);
    strncpy(d, &date[8], 2);
    year = atoi(y);
    month = atoi(m);
    day = atoi(d);
    if(month == 2) day_number += 31;
    if(month > 2) {
        day_number = (month - 1) * 30.5 - 2;
        if(year % 4 == 0) day_number++;
        if(month % 2 == 0 && month < 8) day_number++;
        if(month >= 8) day_number++;
    }
    day_number += day;
    return day_number;
}
