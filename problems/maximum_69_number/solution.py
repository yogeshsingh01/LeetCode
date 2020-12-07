class Solution:
    def maximum69Number (self, num: int) -> int:
        n = 1000
        m = num
        #// as it is mentioned constraint as num < 10^4
        while m:
            if((m//n) == 6):
                num += n*3
                break
            m = m%n
            n = n/10
        return int(num)
        