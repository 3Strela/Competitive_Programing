import math

def normalDtb(x, mean, sd):
    return 0.5 * (1 + math.erf((x - mean) / (sd * (2 ** 0.5))))

x = 19.5
y1, y2 = 20, 22
mean, sd = 20, 2

ans1 = normalDtb(x, mean, sd)
ans2 = normalDtb(y2, mean, sd) - normalDtb(y1, mean, sd)

print(f'{ans1:.3f}')
print(f'{ans2:.3f}')