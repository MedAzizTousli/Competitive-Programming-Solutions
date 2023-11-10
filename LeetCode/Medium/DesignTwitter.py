class Twitter:

    def __init__(self):
        self.usersList = {}
        self.postCount = 0

    def postTweet(self, userId: int, tweetId: int) -> None:
        if userId in self.usersList and 0 in self.usersList[userId]:
            self.usersList[userId][0].append((self.postCount, tweetId))
        elif userId not in self.usersList:
            self.usersList[userId] = {}
            self.usersList[userId][0] = [(self.postCount, tweetId)]
        else:
            self.usersList[userId][0] = [(self.postCount, tweetId)]
        self.postCount -= 1

    def follow(self, followerId: int, followeeId: int) -> None:
        if followerId in self.usersList:
            self.usersList[followerId][followeeId] = True
        else:
            self.usersList[followerId] = {}
            self.usersList[followerId][followeeId] = True

    def unfollow(self, followerId: int, followeeId: int) -> None:
        if followerId in self.usersList:
            self.usersList[followerId][followeeId] = False
        else:
            self.usersList[followerId] = {}
            self.usersList[followerId][followeeId] = False

    def getNewsFeed(self, userId: int) -> List[int]:
        if userId not in self.usersList:
            return []
        mp = self.usersList[userId]
        res = []
        heapq.heapify(res)
        for key in mp:
            if mp[key] == True and key != 0 and key in self.usersList and 0 in self.usersList[key]:
                for element in self.usersList[key][0]:
                    heapq.heappush(res, element)
        if 0 in mp:
            for element in mp[0]:
                heapq.heappush(res, element)
        actual_res = []
        while len(res) != 0:
            _,x = heapq.heappop(res)
            actual_res.append(x)
        return actual_res[:10]

# Your Twitter object will be instantiated and called as such:
# obj = Twitter()
# obj.postTweet(userId,tweetId)
# param_2 = obj.getNewsFeed(userId)
# obj.follow(followerId,followeeId)
# obj.unfollow(followerId,followeeId)
