class TimeMap:

    def __init__(self):
        self.mp = {}
        

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key in self.mp:
            self.mp[key].append((value,timestamp))
        else:
            self.mp[key] = [(value, timestamp)]


    def get(self, key: str, timestamp: int) -> str:
        if key not in self.mp or self.mp[key][0][1] > timestamp:
            return ""
        res = 0
        l = 0
        r = len(self.mp[key])-1
        while l <= r:
            mid = (l+r)//2
            value = self.mp[key][mid][1]
            if value == timestamp:
                res = mid
                break
            elif value < timestamp:
                res = mid
                l = mid + 1
            else:
                r = mid - 1
        return self.mp[key][res][0]
