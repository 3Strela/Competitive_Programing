class Solution:
    def countOdds(self, low: int, high: int) -> int:
        numsBetween = high - low - 1

        oddNums = 0
        oddNums += 1 if low & 1 else 0
        oddNums += 1 if high & 1 else 0

        numsBetween -= oddNums

        half = (numsBetween // 2 + 1) if numsBetween & 1 else numsBetween // 2
        oddNums += half
        
        return oddNums