def yValue(x, y):
    xy =[x[i]*y[i] for i in range(5) ]
    xP2 = [i**2 for i in x]
    
    numerator = 5 * sum(xy) - sum(x) * sum(y)
    denominator = 5 * sum(xP2) - sum(x)**2

    return numerator / denominator
    
def xyValues(x, y):
    meanX = sum(x) / len(x)    
    meanY = sum(y) / len(y)

    b = yValue(x, y)
    a = meanY - b * meanX

    return a, b

gradeX, gradeY = [],[]

for i in range(5):
    x, y = map(int, input().split())
    
    gradeX.append(x)
    gradeY.append(y)    

a, b = xyValues(gradeX, gradeY)
ans = a + b * 80

print(f'{ans:.3f}')