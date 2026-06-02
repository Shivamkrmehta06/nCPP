arr = [1, 2, 3, 4, 5, 6]
maxi = arr[0]
for i in arr:
    if(i>maxi):
        maxi = i
sq = [x*x for x in  arr]

evesq = []
for i in arr:
    if(i%2==0):
        evesq.append(i*i)
print(evesq)

#[expression for item in iterable if condition]
eves = [x*x for x in arr if(x%2==0)]
print(eves)

#remove the negative numbers
arr2 = [1, -2, 3, -4, 5]

rene =[x*x for x in arr2 if(x>0)]
print(rene)

# take only numbers divisible by 10 and multiply them by 15
arr3 = [10, 15, 20, 25, 30]
neli = [x*15 for x in arr3 if(x%10==0)]
print(neli)