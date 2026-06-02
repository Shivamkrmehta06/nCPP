"""
nums = [2, 7, 11, 15]
target = 9
"""

def twoSum(nums,target):
    mp={}
    for i,num in enumerate(nums):
        complement = target-num
        if complement in mp:
            return (mp[complement],i)
        mp[num]=i

nums = [10, 20, 30]
a = twoSum(nums,50)
print(f"Indexes: {a}")

d = {"Shivam":1,"Kunal":2}
d["Shivam"] = 4
print(d)
print("Shivam" in d)

for i, num in enumerate(nums):
    print(i, num)