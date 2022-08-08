class Solution {
    public boolean isPalindrome(int x) {
        Stack<Integer> stack = new Stack<Integer>();
        int number = x;
        int multiple = 1;
        if(x < 0)
            return false;
        else if(x == 0)
            return true;
        else{
            while(number != 0){
                stack.push(number % 10);
                number /= 10;
            }

            while(!stack.empty()){
                number += stack.pop() * multiple;
                multiple *= 10;
            }
            if(number == x)
                return true;
            else
                return false;
        }
    }
}
