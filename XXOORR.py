T = int(input())

for i in range(T):
    n,k = map(int,input().split())
    arr = list(map(int,input().split()))
    binary = [0 for i in range(32)]
    operations = 0
    
    for j in range(n):
        b = bin(arr[j])[2:]
        ind = 0
        
        for l in range(len(b)-1,-1,-1):
            if(b[l] == '1'):
                binary[ind]+=1
            ind+=1
    
    for j in binary:
        if(j != 0):
            if(j <= k):
                operations += 1
            elif(j%k == 0):
                operations += (j//k)
            elif(j%k != 0):
                operations += (j//k)+1
    
    print(operations)
