class Solution:
        def twoSum(self, numbers: List[int], target: int) -> List[int]:
            seen = {}

            for i, num in enumerate(numbers):
                fark = target - num
                if fark in seen:
                    return [seen[fark], i]

                seen[num] = i
