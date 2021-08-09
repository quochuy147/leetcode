// https://leetcode.com/problems/maximum-number-of-balloons/

int maxNumberOfBalloons(char * text) {
    int count[123] = {0}, min = 10001, size;
    size = strlen(text);
    for(int i = 0; i < size; ++i) {
        count[text[i]]++;
    }
    count['l'] /= 2;
    count['o'] /= 2;
    if(min > count['b']) min = count['b'];
    if(min > count['a']) min = count['a'];
    if(min > count['l']) min = count['l'];
    if(min > count['o']) min = count['o'];
    if(min > count['n']) min = count['n'];
    return min;
}
