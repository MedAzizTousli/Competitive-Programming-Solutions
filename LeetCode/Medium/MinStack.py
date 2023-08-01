class MinStack:

    def __init__(self):
        self.stac = []
        self.minlog = []

    def push(self, val: int) -> None:
        if self.stac == []:
            self.minlog.append(val)
        else:
            self.minlog.append(min(self.minlog[-1], val))
        self.stac.append(val)

    def pop(self) -> None:
        if self.stac[-1] >= self.minlog[-1]:
            self.minlog.pop()
        self.stac.pop()

    def top(self) -> int:
        return self.stac[-1]

    def getMin(self) -> int:
        return self.minlog[-1]
