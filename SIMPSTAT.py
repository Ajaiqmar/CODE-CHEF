def simple_statistics():
    n,k = map(int,input().split())
    arr = list(map(int,input().split()))
    arr.sort()
    
    su = 0
    c = 0
    
    for i in range(k,n-k):
        su += arr[i]
        c += 1
    
    return su/c


t = int(input())
for i in range(t):
    print(simple_statistics())
