class Solution {
    public boolean isPalindrome(int x) {
        int temp = x;
        int number = 0;
        if(x < 0)
            return false;

        while(temp != 0){
            number *= 10;
            number += temp % 10;
            temp /= 10;
        }
        if(number == x)
            return true;
        else
            return false;
    }
}
