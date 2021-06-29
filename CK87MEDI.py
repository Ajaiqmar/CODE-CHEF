T = int(input())

for i in range(T):
    n,k = map(int,input().split())
    arr = list(map(int,input().split()))
    
    arr.sort()
    ind = (n+k)//2
    
    print(arr[ind])
