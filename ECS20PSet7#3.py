from pydoc import doc


n = 7
count = 0

for i in range(n+1):
	for j in range(i+1):
		for k in range(j*j+1):
			for m in range(100):
				count=count+1

print(count)
