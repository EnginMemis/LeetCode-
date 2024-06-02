class Solution:
    def search(self, nums: List[int], target: int) -> int:
        listLen = len(nums)
        start = 0
        end = listLen - 1
        found = -1
        while start <= end and found == -1:
            mid = (start + end) // 2
            print(start, end, mid)
            if nums[mid] == target:
                found = mid
            else:
                if ( target < nums[0] and nums[mid] < nums[0] ) or ( target >= nums[0] and nums[mid] >= nums[0] ):
                    if target > nums[mid]:
                        start = mid + 1
                    else:
                        end = mid - 1
                else:
                    if target > nums[mid]:
                        end = mid - 1
                    else:
                        start = mid + 1
        return found
