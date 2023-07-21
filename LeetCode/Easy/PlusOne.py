class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = True
        for i in range(len(digits)-1, -1, -1):
            if carry == False:
                break
            if digits[i] == 9:
                digits[i] = 0
            else:
                digits[i] += 1
                carry = False
        if carry == True:
            digits.insert(0, 1)
        return digits
