n = int(input())
ans = 0

for i in range(n):
    name = input().strip()
    if(len(name)>=2 and ("chef" in name or "che" in name or "ch" in name or "hef" in name or "he" in name or "ef" in name)):
        ans += 1

print(ans)
