T = int(input())

for i in range(T):
    string = input().strip()
    string = string+string[:1]
    ans = 0
    
    for j in range(1,len(string)):
        if(string[j]!=string[j-1]):
            ans += 1
    
    if(ans <= 2):
        print("uniform")
    else:
        print("non-uniform")
