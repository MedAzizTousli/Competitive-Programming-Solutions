class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        res = 0
        count = 0
        start = 0
        if [0]*len(flowerbed) == flowerbed:
            res = (len(flowerbed)-1)//2+1
            return res >= n
        if (len(flowerbed) == 1):
            if n == 0:
                return True
            if flowerbed[0] == 0 and n == 1:
                return True
            else:
                return False
        if flowerbed[0] == 0 and flowerbed[1] == 0:
            start = 1
            res += 1
            count = 1
        for i in range(start, len(flowerbed)):
            if flowerbed[i] == 0:
                count += 1
            else:
                if count == 0:
                    count = 1
                res += (count-1)//2
                count = 0
        res += (count // 2)
        return res >= n
