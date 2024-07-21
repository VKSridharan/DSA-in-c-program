############ BRUTE-FORCE APPROACH ######################

#import sys
#class Solution(object):
    #def maxSubArray(self, nums):
        #maxi = -sys.maxsize - 1 
        #for i in range(len(nums)):
            #for j in range(i, len(nums)):
                #_sum = 0
                #for k in range(i, j+1):
                   # _sum += nums[k]
                    #maxi = max(_sum, maxi)

        #return maxi
############# Kadane's Algo(OPTIMAL APPROACH) ############
import sys
class Solution(object):
    def maxSubArray(self, nums):
        maxi = -sys.maxsize - 1
        _sum=0
        for i in range(len(nums)):
            _sum+=nums[i]

            if _sum>maxi:
                maxi=_sum

            if _sum<0:
                _sum=0
        return maxi



        