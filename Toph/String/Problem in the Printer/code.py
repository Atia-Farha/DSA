while True:
    s = input()
    if s == "the end.":
        break
    m = ""
    for char in s:
        if char == 'b':
            m += '6'
        elif char == 'g':
            m += '9'
        elif char == 'l':
            m += '1'
        elif char == 'o':
            m += '0'
        elif char == 's':
            m += '5'
        elif char == 'z':
            m += '2'
        elif char == '6':
            m += 'b'
        elif char == '9':
            m += 'g'
        elif char == '1':
            m += 'l'
        elif char == '0':
            m += 'o'
        elif char == '5':
            m += 's'
        elif char == '2':
            m += 'z'
        else:
            m += char
    print(m)