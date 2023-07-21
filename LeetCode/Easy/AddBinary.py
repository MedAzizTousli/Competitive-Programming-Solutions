class Solution:
    def addBinary(self, a: str, b: str) -> str:
        carry = '0'
        result = ""
        if len(a) > len(b):
            b = '0'*(len(a)-len(b)) + b
        else:
            a = '0'*(len(b)-len(a)) + a
        for i in range(len(a)-1, -1, -1):
            total = [a[i],b[i],carry]
            c = total.count('1')
            if c == 0:
                result = '0' + result
                carry = '0'
            elif c == 1:
                result = '1' + result
                carry = '0'
            elif c == 2:
                result = '0' + result
                carry = '1'
            else:
                result = '1' + result
                carry = '1'
        if carry == '1':
            result = '1' + result
        return result
