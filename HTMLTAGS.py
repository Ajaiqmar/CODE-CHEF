T = int(input())

for i in range(T):
    string = input().strip()
    flag = 0
    
    if(string[0]=='<' and string[1]=='/' and string[-1]=='>' and len(string)>3):
        for j in range(2,len(string)-1):
            if ((not string[j].isalnum()) or (string[j].isupper())):
                flag = 1
                break
    else:
        flag = 1
    
    if(flag == 0):
        print("Success")
    else:
        print("Error")
