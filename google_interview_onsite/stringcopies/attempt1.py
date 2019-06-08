class StringProcess:
    def number_of_copies(self, string, pattern, pattern_set):
        nstring = len(string)
        npattern = len(pattern)

        dp = [nstring] * nstring

        if string[-1] in pattern_set:
            dp[-1] = 1
        else:
            return -1

        
        k = nstring-1 # index to start recursion
        while k >= 0:
            if k==5:
                print(string[k:], string[k:] in pattern_set)
            if string[k:] in pattern_set:
                print(k, string[k:])
                dp[k] = 1
                k -= 1
            else:
                break
        
        istart = k
        print("istart = {}".format(istart))
        print("dp = {}".format(dp))
        print("nstring = ", nstring)

        for i in range(istart,-1,-1):
            kmax = min(i+npattern, nstring)
            print("# i = {}; kmax = {}".format(i, kmax))
            
            next_list = []
            str_list = []
            ind_list = []

            for k in range(i+1, min(i+npattern, nstring)):
                print(string[i:k])
                if string[i:k] in pattern_set:
                    print("[{}:] {}/{}".format(k, 
                        string[:k],string[k:]))

                    ind_list.append(k)
                    str_list.append(string[k:])
                    next_list.append(dp[k])
                    print(ind_list, str_list, next_list)
            
            dp[i] = 1 + min(next_list)
            print("i, dp = {},  {}".format(i, dp))
            
        return dp[0]        

    
    @staticmethod
    def generate_set(pattern):

        wordset = set()
        npattern = len(pattern)

        for i in range(npattern):
            for j in range(i+1,npattern+1):
                wordset.add(pattern[i:j])

        return wordset



def main():
    string = "XXYXYX"
    pattern = "XYX"

    SP = StringProcess()
    pattern_set = set(['X','Y', 'XX', 'XY', 'YX', 'XX',  'XYX'])

    number_of_copies = SP.number_of_copies(string, pattern, pattern_set)
    print("number_of_copies = {}".format(number_of_copies))
if __name__ == '__main__':
    main()