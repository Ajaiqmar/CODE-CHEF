T = int(input())

for i in range(T):
    number = input().strip()
    
    if(number[0] == "1"):
        number = number[:1]+"0"+number[1:]
    else:
        number = "1"+number
    
    print(number)
