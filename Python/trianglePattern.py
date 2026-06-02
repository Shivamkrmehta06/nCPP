def tp(n):
    for i in range(1,n+1):
        for space in range(n-i):
            print(" ",end=" ")
        for col in range(i):
            print("*",end=" ")
        for x in range(i-1):
            print("*",end=" ")
        print()

#print(list(range(4,-1,-1)))
#tp(5)

#print(chr(128517))


# s = "The first line indicates the number of test cases"
# s2 = "The two lines consist of two sentences in string format"

# se = set()
# se2 = set()
# ans = ""
# ans2 = ""
# for i in s:
#     if(i==" "):
#         se.add(ans)
#         ans = ""
#     ans += i
# se.add(ans)
# for i in s2:
#     if(i==" "):
#         se2.add(ans2)
#         ans2 = ""
#     ans2 += i
# se2.add(ans2)
# sum = 0
# for i in range(len(s)):
#     sum += int(i)
# for j in range(len(s2)):
#     sum+=int(j)
# print(sum)
    
tp(4)