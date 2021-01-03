int strlen(const char *str) {
    int countStr = 0;
    while (*(str+countStr)!='\0')
            countStr++;
    return countStr;
}