for t in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    k = int(input())
    a.sort()
    dif = a[k-1]-a[0]
    for i in range(1,n-k+1):
        dif = min(a[i+k-1]-a[i],dif)
    print(dif)    
