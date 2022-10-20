from sklearn.linear_model import LinearRegression

m , n = map(int, input().split())

x , y = [], []
for i in range(n):
    vals = list(map(float, input().split()))

    x.append(vals[:-1])
    y.append(vals[-1])

q = int(input())

test = []
for i in range(q):
    vals = list(map(float, input().split()))
    test.append(vals)


reg = LinearRegression()
reg.fit(x,y)

pred = reg.predict(test)
for p in pred:
    print(f'{p:.2f}')