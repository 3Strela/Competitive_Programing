size = 100
mean = 500
std = 80
cover = 0.95
z = 1.96

stdS = std/(100**0.5)

ans1 = mean - (z*stdS)
ans2 = mean + (z*stdS)

print(f'{ans1:.2f}')
print(f'{ans2:.2f}')