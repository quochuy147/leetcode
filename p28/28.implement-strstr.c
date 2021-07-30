// https://leetcode.com/problems/implement-strstr/

int strStr(char* haystack, char* needle) {
    int index = -1, compare;
    int size = strlen(haystack) - strlen(needle) + 1;
    if(size < 1) return -1;
    char* fake_needle = (char*) malloc (50000 * sizeof(char));
    strcpy(fake_needle, "");
    for(int i = 0; i < strlen(haystack) - strlen(needle) + 1; ++i) {
        strncat(fake_needle, &haystack[i], strlen(needle));
        compare = strcmp(fake_needle, needle);
        if(compare == 0) {
            index = i;
            break;
        }
        strcpy(fake_needle, "");
    }
    free(fake_needle);
    return index;
}
