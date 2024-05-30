
int myAtoi(char * s){
	int i;
	int sum = 0;
	int digit;
	int sign = 0;
	unsigned int mul = 1;
	
	i = 0;
	while(s[i] == ' ')
		i++;
	if(s[i] == '-')
		sign = 1;
		
	if(s[i] == '-' || s[i] == '+')
		i++;
		
	while(i < strlen(s) && s[i] >= '0' && s[i] <= '9'){ 
		digit = s[i] - '0';
		if(sum > (INT_MAX / 10) || (sum == (INT_MAX / 10) && digit >= 8)) return INT_MAX;
		if(sum < (INT_MIN / 10) || (sum == (INT_MIN / 10) && digit >= 9)) return INT_MIN;
		
		sum *= 10;
		if(sign)
			sum += -digit;
		else 
			sum += digit;
		i++;
	}
	return sum;
}
