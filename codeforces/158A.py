n,k = [int(x) for x in raw_input().split()]
a = [int(x) for x in raw_input().split()]
j=0
for i in range(len(a)):
	if a[i]>=a[k-1] and a[i]>0:
		j+=1
print j