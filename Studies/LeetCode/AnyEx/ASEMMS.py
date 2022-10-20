class Solution:
    def average(self, salary: List[int]) -> float:
        sumSalary = sum(salary) - min(salary) - max(salary)
        avgSalary = sumSalary / (len(salary) - 2)
        return avgSalary