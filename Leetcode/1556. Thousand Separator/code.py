class Solution:
    def thousandSeparator(self, n: int) -> str:
        num = f"{n:,}"
        return num.replace(",", ".")