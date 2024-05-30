
int strStr(char * haystack, char * needle){
    int shiftTable[27];
    int skip, flag;
	int i, j;
    int haystackSize;
    int needleSize;
	
	skip = 0;
	flag = 0;
    
    haystackSize = strlen(haystack);
    needleSize = strlen(needle);
    
    for(i=0; i<27; ++i)
		shiftTable[i] = -1;
    for(i=0; i<needleSize; ++i)
		shiftTable[ needle[i] - 'a' ] = i;
    
    i = 0;
    while(i <= (haystackSize - needleSize) && !flag){
		j = needleSize - 1;
		while(j >= 0 && needle[j] == haystack[i + j]){
			j--;
		}
		
		if(j < 0) 
			flag = 1;
		else{
			skip = j - shiftTable[ haystack[i + j] - 'a'];
			if(skip <= 0){
				skip = 1;
			}
			i += skip;
		}
		
	}
    if(flag)
		return i;
	else
		return -1;
}
