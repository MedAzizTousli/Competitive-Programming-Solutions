class Solution(object):
    def pickGifts(self, gifts, k):
        for i in range(k):
            mx = max(gifts)
            idx = gifts.index(mx)
            gifts[idx] = int(sqrt(mx))
        return sum(gifts)
