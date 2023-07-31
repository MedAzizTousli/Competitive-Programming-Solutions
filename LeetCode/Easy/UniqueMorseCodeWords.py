class Solution(object):
    def uniqueMorseRepresentations(self, words):
        l = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        mp = {}
        for i,letter in enumerate(string.ascii_lowercase):
            mp[letter] = l[i]
        st = set()
        for i in words:
            ch = ""
            for j in i:
                ch += mp[j]
            st.add(ch)
        return len(st)
