#code
for t in range(int(input())):
    a = input()
    b = input()
    length = len(a)
    length1 = len(b)
    flag = 1
    count = [0]*256
    count1  = [0]*256
    if(length == length1):
        for i in a:
            count[ord(i)]+=1
            
        for j in b:
            count1[ord(j)]+=1
        
        for x in range(1,256):
            if(count[x]!=count1[x]):
                flag = 0
                break
        
    else:
        flag =0
    
    
    if(flag == 1):
        print("YES")
    if(flag ==0):
        print("NO")
