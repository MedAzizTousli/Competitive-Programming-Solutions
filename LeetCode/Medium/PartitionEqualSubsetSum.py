class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        nums.append(0)
        amount = sum(nums)
        if amount%2 != 0:
            return False
        else:
            amount = amount//2
        dp = [False] * (amount+1)
        dp[0] = True
        mp = [{}] * (amount+1)
        mp[0] = {x:nums.count(x) for x in nums}
        for curr in range(1, amount + 1):
            for back in nums:
                diff = curr-back
                if diff < 0:
                    continue
                if mp[diff].get(back, 0) > 0:
                    dp[curr] = True
                    mp[curr] = mp[diff].copy()
                    mp[curr][back] -= 1
                    break
                else:
                    dp[curr] = False
        return dp[amount]
