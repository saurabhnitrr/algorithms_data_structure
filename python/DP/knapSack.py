def knap(W,wt,val,n):
    k = [[0 for x in range(W+1)]for x in range(n+1)]
    for i in range(n+1):
    	for w in range(W+1):
    		if(i==0 or w==0):
    			k[i][w] =0
    		elif w<=W:
    			k[i][w] = max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w])
    		else:
    			k[i][w] = k[i-1][w]
    return k[n][W]

val = [1,4,5,7]

wt = [1,3,4,5]

W = 7

n = len(value)

print(knap(W,wt,val,n))
#result=17
