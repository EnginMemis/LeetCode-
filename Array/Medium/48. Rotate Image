class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix[0])
        for i in range((n + 1) // 2):
            for j in range(i, n - i - 1):
                tempX, tempY = i, j
                newX = j
                newY = n - 1 - i
                tempValue = matrix[tempX][tempY]
                while newX != i or newY != j:
                    tempValue2 = matrix[newX][newY]
                    matrix[newX][newY] = tempValue
                    tempValue = tempValue2

                    tempX, tempY = newX, newY
                    newX = tempY
                    newY = n - 1 - tempX
                
                matrix[newX][newY] = tempValue

        
