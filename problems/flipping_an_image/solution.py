class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        for i,j in enumerate(A):# i ->index j -> element
            # reverse list
            # then toggle each element
            A[i] = [ y^1 for y in j[::-1]]
        return A
            
        