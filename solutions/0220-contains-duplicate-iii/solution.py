class Solution:
    def containsNearbyAlmostDuplicate(self, nums: List[int], indexDiff: int, valueDiff: int) -> bool:
        buckets={}   
        bucket_size = valueDiff + 1

        for i,num in enumerate(nums):
            bucket_id = num // bucket_size

            if bucket_id in buckets:
                return True
            
            if (bucket_id -1) in buckets and abs(num-buckets[bucket_id-1]) <= valueDiff:
               return True

            if (bucket_id +1) in buckets and abs(num - buckets[bucket_id +1]) <= valueDiff:
                return True
            buckets[bucket_id] = num

            if i >= indexDiff:
                eski_sayi = nums[i - indexDiff]
                eski_kova_id = eski_sayi // bucket_size
                del buckets[eski_kova_id]
            
        return False
