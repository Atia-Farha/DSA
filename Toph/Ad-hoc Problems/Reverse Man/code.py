S = str(input())
listt = []
for l in S:
	listt.append(l)
listt.reverse()
res = ''
for i in listt:
    res += i
print(res)