import math

ratio = list(map(float, input().split()))

p, q = [i / sum(ratio) for i in ratio]

ans = sum(math.comb(6,i) * p**i * q**(6-i) for i in range(3,7))

print(round(ans, 3))