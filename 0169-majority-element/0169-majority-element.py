class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        from collections import Counter
        d=Counter(nums)
        print(d)
        f=0
        for k,v in d.items():
            if f<v:
                f=v
                c=k
        print(f)
        return c
                
            
        