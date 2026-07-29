class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        len_s, len_p = len(s), len(p)
        result = []

        if len_s < len_p:
            return result
        
        p_count = Counter(p)
        window_count = Counter(s[:len_p])

        if p_count == window_count:
            result.append(0)

        for i in range(len_p, len_s):
            incoming_char = s[i]
            window_count[incoming_char] += 1

            outgoing_char = s[i-len_p]
            window_count[outgoing_char] -= 1

            if window_count[outgoing_char] == 0:
                del window_count[outgoing_char]
            
            if window_count == p_count:
                result.append(i - len_p +1)
        
        return result
