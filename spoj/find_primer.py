def primes(start, n):
    if n == 2:
        return [2]
    elif n < 2:
        return []

    s = range(3, n + 1, 2)
    mroot = n ** 0.5
    half = (n + 1) / 2 - 1
    i = 0
    m = 3

    while s[i] < start:
        s[i] = 0
        i = i+1

    i = 0
    while m <= mroot:
        if s[i]:
            j = (m * m - 3) / 2
            s[j] = 0
            while j < half:
                s[j] = 0
                j += m
        i = i + 1
        m = 2 * i + 3

    if start <=2:
        s.insert(0, 2)

    return [x for x in s if x]

def main():
    num = raw_input()
    lst=[]

    for i in range(int(num)):
        lst.append(raw_input().split(' '))

    for i in lst:
        for x in primes(int(i[0]),int(i[1])):
            print x
        print
    return 0;

main()