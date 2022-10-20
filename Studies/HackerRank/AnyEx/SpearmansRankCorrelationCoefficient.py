def spearmanRCC(x, y, n):
        xSort = sorted(x)
        ySort = sorted(y)
        
        rankOfX={}
        for i in xSort:
            rankOfX[i] = xSort.index(i) + 1
        
        rankOfY={}
        for i in ySort:
            rankOfY[i]= ySort.index(i)+1

        d=[]
        for i in range(n):
           temp = rankOfX[x[i]] - rankOfY[y[i]]
           d.append(temp**2)
                 
        numerator = 6 * sum(d)
        denominator = n * ((n** 2 ) -1)         
        
        return 1 - numerator / denominator

n = int(input())
x = list(map(float, input().split()))
y = list(map(float, input().split()))

ans = spearmanRCC(x, y, n)

print(f'{ans:.3f}')