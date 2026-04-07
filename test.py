def solve(nums, ans, ds, freq):
    if len(ds) == len(nums):
        ans.append(ds.copy())
        return

    for i in range(0, len(nums)):
        if not freq[i]:
            ds.append(nums[i])
            freq[i] = 1
            solve(nums, ans, ds, freq)
            freq[i] = 0
            ds.pop()


def converter(list):
    str=""
    for i in list:
        str+=i
    return int(str)


num = 126
num2=500
numstr = str(num)
numsplit = list(numstr)

ans = []
ds = []
freq = [0] * len(numsplit)
solve(numsplit, ans, ds, freq)
# print(ans)


miny=float('inf')
for i in ans:
    convert=converter(i)
    if convert>num2:
        miny=min(miny,convert)
        
print(miny)