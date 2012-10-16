
def check(str1, str2):
    if str1.find(str2):
        return 1

    return 0

def main():
    i=0
    lst=[]
    while i<24:
        lst.append(raw_input().split(' '))
        i = i+1

    for x in lst:
        print check(x[0],x[1])

    return 0;


main()
  