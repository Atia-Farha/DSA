A = input()
B = input()
R = 1

for i in B:
    R *= i in A
if R == 1:
    print("Yes")
else:
    print("No")