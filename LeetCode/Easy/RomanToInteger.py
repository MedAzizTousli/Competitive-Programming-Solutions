class Solution(object):
    def romanToInt(self, s):
        s += "I"
        sum = 0
        i = 0
        while i < len(s)-1:
            print(s[i])
            if s[i] == 'I' and s[i+1] == 'V':
                i += 2
                sum += 4
                continue
            elif s[i] == 'I' and s[i+1] == 'X':
                i += 2
                sum += 9
                continue
            elif s[i] == 'X' and s[i+1] == 'L':
                i += 2
                sum += 40
                continue
            elif s[i] == 'X' and s[i+1] == 'C':
                i += 2
                sum += 90
                continue
            elif s[i] == 'C' and s[i+1] == 'D':
                i += 2
                sum += 400
                continue
            elif s[i] == 'C' and s[i+1] == 'M':
                i += 2
                sum += 900
                continue
            if s[i] == 'I':
                sum += 1
            elif s[i] == 'V':
                sum += 5
            elif s[i] == 'X':
                sum += 10
            elif s[i] == 'L':
                sum += 50
            elif s[i] == 'C':
                sum += 100
            elif s[i] == 'D':
                sum += 500
            elif s[i] == 'M':
                sum += 1000
            i+=1
        return sum
