class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.mp = {}


class Trie:

    def __init__(self):
        self.root = TreeNode('')

    def insert(self, word: str) -> None:
        prev = self.root
        for letter in word:
            if prev.mp.get(letter) == None:
                node = TreeNode(letter)
                prev.mp[letter] = node
                prev = prev.mp[letter]
            else:
                prev = prev.mp[letter]
        
        prev.mp["END"] = True

    def search(self, word: str) -> bool:
        exist = True
        curr = self.root
        for letter in word:
            if curr.mp.get(letter) == None:
                exist = False
                break
            curr = curr.mp[letter]
        if curr.mp.get("END") == None:
            exist = False
        return exist

    def startsWith(self, prefix: str) -> bool:
        exist = True
        curr = self.root
        for letter in prefix:
            if curr.mp.get(letter) == None:
                exist = False
                break
            curr = curr.mp[letter]
        return exist

# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
