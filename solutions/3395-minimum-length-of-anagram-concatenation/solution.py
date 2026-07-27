from collections import Counter

class Solution:
    def minAnagramLength(self, s: str) -> int:
        toplam_uzunluk = len(s)

        for boyut in range(1, toplam_uzunluk + 1):
            if toplam_uzunluk % boyut == 0:

                ilk_parca = sorted(s[:boyut])
                gecerli_mi = True

                for i in range(boyut, toplam_uzunluk, boyut):
                    mevcut_parca = sorted(s[i: i + boyut])

                    if mevcut_parca != ilk_parca:
                        gecerli_mi = False
                        break
                if gecerli_mi:
                    return boyut


        

