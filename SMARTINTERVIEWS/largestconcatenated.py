
T = int(input())
while T!=0:
    n = int(input())
    a = list(map(int, input().split()))
    i=0
    a.sort(reverse=True)
    a.sort(key=lambda x : int(str(x)[0]),reverse=True)
    answer = str("")
    for x in a:
        answer += str(x)
    print(answer)
    T-=1
