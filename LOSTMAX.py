def find_max():
    arr = list(map(int,input().split()))
    arr.remove(len(arr)-1)
    
    return max(arr)

t = int(input())
for i in range(t):
    print(find_max())
