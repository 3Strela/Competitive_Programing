from math import erf

def normalDtb(x, mean, std):
    return 0.5 * (1 + erf((x - mean) / (std * (2**0.5))))

mean, std = 70, 10
x = 80
y = 60

ans1 = (1 - normalDtb(x, mean, std)) * 100
ans2 = (1 - normalDtb(y, mean, std)) * 100
ans3 = normalDtb(y, mean, std) * 100

print(f'{ans1:.2f}')
print(f'{ans2:.2f}')
print(f'{ans3:.2f}')