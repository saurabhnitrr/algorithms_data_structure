def LIS(seq):
	table =[1]
	for i in range(1,len(seq)):
		table.append(1)
		for j in range(i):
			if(seq[i] > seq[j]):
				table[i] = max(table[i],table[j]+1)
	return max(table)
	

seq = [3,4,-1,0,6,2,3]
print(LIS(seq))
#result = 4
