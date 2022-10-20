from math import erf

def centralLimit(mean,std, maxWeight, n):
    newMean = n * mean
    newStd = (n**0.5) * std     
    return 0.5 * (1 + erf((maxWeight - newMean) / (newStd * (2** 0.5))))

n = 49
std = 15
mean = 205
maxWeight = 9800

ans = centralLimit(mean, std, maxWeight, n)

print(f'{ans:.4f}')