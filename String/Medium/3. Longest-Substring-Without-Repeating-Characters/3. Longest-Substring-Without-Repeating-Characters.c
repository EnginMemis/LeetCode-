int lengthOfLongestSubstring(char * s){
    int symbols[128][2] = {0};
    int i, j;
    int index;
    int size;
    int max;

    max = 0;
    size = 0;
    for(i = 0; i < strlen(s); ++i){
        index = s[i];
        if(symbols[index][1] == 1){
            i = symbols[index][0];
            for(j = 0; j < 128; ++j){
                symbols[j][0] = 0;
                symbols[j][1] = 0;
            }
            if(size > max)
                max = size;
            size = 0;
        }
        else{
            symbols[index][0] = i;
            symbols[index][1] = 1;
            size++;
        }
    }
    if(size > max)
        max = size;
    return max;
}
