from math import comb

def B(x, n, p):
    return comb(n, x) * (p ** x) * (1 - p) ** (n - x)

n = 10
p = 0.12

ans1 = B(0, n, p) + B(1, n, p) + B(2, n, p)
ans2 = 1 - (B(0, n, p) + B(1, n, p))

print(f'{ans1:0.3f}')
print(f'{ans2:0.3f}')