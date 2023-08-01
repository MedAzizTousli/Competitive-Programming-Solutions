class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for i in nums:
            mp[i] = mp.get(i, 0) + 1
        new_mp = {key: value for key,value in sorted(mp.items(), key=lambda item:item[1], reverse=True)}
        return list(new_mp.keys())[:k]
