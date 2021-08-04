// https://leetcode.com/problems/distribute-candies/

int distributeCandies(int* candyType, int candyTypeSize) {
    int candyEat[200001] = {0}, size = 0, count = 0;
    for(int i = 0; i < candyTypeSize; ++i) {
        if(candyEat[candyType[i] + 100000] == 0) {
            count++;
            candyEat[candyType[i] + 100000] = 1;
        }
    }
    if(count > candyTypeSize / 2) return candyTypeSize / 2;
    return count;
}
