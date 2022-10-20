def mean(a, n):
    return sum(a) / n

def std(values, mean):
    st = sum((val-mean)**2 for val in values) / len(values)
    return st**0.5


def pearsonCC(x, y, n):
    xMean = mean(x, n)
    yMean = mean(y, n)
    
    xStd = std(x, xMean)
    yStd = std(y ,yMean)
    
    numerator = sum( (x[i]-xMean)*(y[i]-yMean) for i in range(n))
    denominator = n *xStd * yStd
    
    return numerator / denominator

n = int(input())
x = list(map(float, input().split()))
y = list(map(float, input().split()))

ans = pearsonCC(x, y, n)

print(f'{ans:.3f}')