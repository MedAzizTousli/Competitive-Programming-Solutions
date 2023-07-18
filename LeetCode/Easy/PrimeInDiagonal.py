class Solution(object):
    def isPrime(self, num):
        prime = True
        if num == 1:
            return False
        if num == 2:
            return True
        if num % 2 == 0 or num % 3 == 0: 
            prime = False
        for i in range(3, int(sqrt(num)+1)):
            if num%i == 0:
                prime = False
        return prime

    def diagonalPrime(self, nums):
        result = 0
        for i in range(0, len(nums)):
            if self.isPrime(nums[i][i]):
                result = max(result, nums[i][i])
            if self.isPrime(nums[i][len(nums) - i - 1]):
                result = max(result, nums[i][len(nums) - i - 1])
        return result
