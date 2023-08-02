class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        cnt = 0
        while cnt < len(sandwiches):
            if students[0] == sandwiches[0]:
                sandwiches.pop(0)
                students.pop(0)
                cnt = 0
            else:
                x = students.pop(0)
                students.append(x)
                cnt += 1
            print(students, sandwiches)
        return len(sandwiches)
