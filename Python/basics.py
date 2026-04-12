# input lo aur square print karo
# a = int(input("Enter a Number:\n"))
# ans = a*a;
# print(f"Square:{ans}")

# number input lo aur check karo even ya odd
# def isEven(a):
#     if(a%2==0):
#         return True
#     else:
#         return False

# a = int(input("Enter a Number:\n"))
# print(f"Even: {isEven(a)}")

# 1 se 10 tak print karo
# i = 1
# while(i<=10):
#     print(i)
#     i = i+1

#Reverse a Number

# def rev(a):
#     sum = 0
#     while(a!=0):
#         digit = a%10
#         sum = sum*10+digit
#         a = a//10
#     return sum;

# a = int(input("Enter a Number:\n"))
# print(f"Reverse: {rev(a)}")

#Count digits

# def count(a):
#     c = 0
#     while(a!=0):
#         c+=1
#         a = a//10
#     return c
# a = int(input("Enter a Number:\n"))
# print(f"Count: {count(a)}")

#Sum of digits

# def sum(a):
#     s = 0
#     while(a!=0):
#         digit = a%10
#         s += digit
#         a = a//10
#     return s
# a = int(input("Enter a Number:\n"))
# print(f"Count: {sum(a)}")

# arr = [10,20,30,40]
# sum = 0
# max = -1
# for i in arr:
#     sum+=i
#     if(i>max):
#         max = i
# print(f"Sum: {sum}, Maximum Element: {max}")

# arr.reverse()
# for i in arr: print(i)

# s[start : end : step]
s = "shivam"
print(s[::-1])

d = {
    "name":"Shivam",
    "age":20
}
print(d["name"])