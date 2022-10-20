from math import erf

def centralLimit(mean,std, tickets, n):
    newMean = n * mean
    newStd = (n**0.5) * std     
    return 0.5 * (1 + erf((tickets - newMean) / (newStd * (2** 0.5))))

n = 100
std = 2.0
mean = 2.4
tickets = 250

ans = centralLimit(mean, std, tickets, n)

print(f'{ans:.4f}')