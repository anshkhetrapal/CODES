def nextGreaterElementToRight(arr,n):
    list=[]
    stack=[]
    list.append(-1)
    stack.append(arr[n-1])
    for i in range(n-2,-1,-1):
        while (len(stack)!=0 and stack[-1]<=arr[i]):
            stack.pop(-1)
        if len(stack)==0:
            list.append(-1)
        else:
            list.append(stack[-1])
        stack.append(arr[i])
    list.reverse()
    return list
