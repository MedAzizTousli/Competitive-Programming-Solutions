class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        uniques = set()
        for email in emails:
            short = ""
            ignore = False
            for i in range(len(email)):
                if email[i] == '@':
                    short += '@'
                    break
                if ignore == True:
                    continue
                if email[i] == '.':
                    continue
                elif email[i] == '+':
                    ignore = True
                else:
                    short += email[i]
            short += email[i+1:]
            uniques.add(short)
        return len(uniques)
