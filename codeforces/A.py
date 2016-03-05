n,k = [int(x) for x in raw_input().split()]
a = [int(x) for x in raw_input().split()]
j=0
for i in range(len(a)):
	if a[i]>=a[k]:
		j+=1
print j