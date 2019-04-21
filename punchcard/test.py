
if __name__=='__main__':
    import sys
    N = int(sys.argv[1])
    n = [i for i in range(N)]

    myset = set()
    for i in n:
#        for j in (n[:i] + n[i+1:]):
        for j in n[i+1:]:
            num = 2**i+2**j
            if num not in myset:
                myset.add(num)
                print('{:4d}'.format(num), ''.join([ 'x' if (k==i or k==j) else '-' for k in n]))


    print("length of my set = ", len(myset))