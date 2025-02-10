A = input()
A = A[0].upper() + A[1:]
A = A.replace('s', '$')
A = A.replace('i', '!')
A = A.replace('o', '()')
A = A + '.'
print(A)