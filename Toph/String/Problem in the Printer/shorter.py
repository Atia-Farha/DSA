table = str.maketrans("bglosz691052", "691052bglosz")

while True:
    s = input()
    if s == "the end.":
        break
    print(s.translate(table))