def lcs(x,y):
	n  = len(x)
	m = len(y)
	table = dict() #2d array to store longest common subsequence value
	for i in range(n+1):
		for j in range(m+1):
			if(i==0 or j==0):
				table[i,j] =0
			elif(x[i-1] == y[j-1]):
				table[i,j]= table[i-1,j-1]+1
			else:
				table[i,j] = max(table[i-1,j],table[i,j-1]) #we can return after this step to get the length of longest common subsequence
	
	
	def recon(i,j):
		if(i==0 or j==0):
			return []
		elif(x[i-1]==y[j-1]:
			return recon(i-1,j-1)+[x[i-1]]
		elif(table[i-1,j]>table[i,j-1]):
			return recon(i-1,j)
		else:
			return recon(i,j-1)
		
	return recon(n,m)
  
  
  x = "ABCBDAB"
  y = "BDCABA"
  print(lcs(x,y))
  #result ['B', 'D', 'A', 'B']
