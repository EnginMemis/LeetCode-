
char * longestPalindrome(char * s){
    int n = strlen(s);
    int start = 0;
    int max = 1;
    int i, j, k;
    int matrix[n][n];
    char *word;

    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j){
            matrix[i][j] = 0;
        }
    }

    for(i = 0; i < n; ++i){
        matrix[i][i] = 1;
    }
    for(i = 0; i < n - 1; ++i){
        if(s[i] == s[i + 1]){
            matrix[i][i + 1] = 1;
            start = i;
            max = 2;
        }
    }
    for(k = 3; k <= n; ++k ){
        for(i = 0; i < n - k + 1; ++i){
            j = i + k - 1;
            if(matrix[i + 1][j - 1] == 1 && s[i] == s[j]){
                matrix[i][j] = 1;
                start = i;
                if(k > max)
                    max = k;
            }
        }
    }
    word = (char *)calloc(sizeof(char),(max + 1));
    j = 0;
    for(i = start; i < start + max; ++i){
        word[j] = s[i];
        j++;
    }
    return word;
}
