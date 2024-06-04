class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == "0" or num2 == "0":
            return "0"
        
        totalLen = len(num1) + len(num2)
        result = [0 for _ in range(totalLen)]

        for i in range(len(num1) - 1, -1, -1):
            for j in range(len(num2) - 1, -1, -1):
                product = int(num1[i]) * int(num2[j])
                quotient = product % 10
                remainder = product // 10

                result[i + j + 1] += quotient
                result[i + j] += remainder

                result[i + j] += result[i + j + 1] // 10
                result[i + j + 1] %= 10

        result = "".join(str(x) for x in result)

        if result[0] == "0":
            result = result[1:]
        return result
