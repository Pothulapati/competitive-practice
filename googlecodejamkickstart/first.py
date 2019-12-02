def solve(A,B):
    sum = 0
    #print(range(len(A)))
    for i in range(len(A)):
        sum += A[i];
        #print(sum)
        if sum >=B:
            return i;
    return -1;

print(solve([1,3,2,4],5))