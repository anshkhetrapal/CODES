def nextSmallerElementToLeft(arr,n):
    list=[]
    stack=[]
    for i in range(n):
        if len(stack)==0:
            list.append(-1)
        elif len(stack)>0 and stack[-1]<arr[i]:
            list.append(stack[-1])
        elif len(stack)>0 and stack[-1]>=arr[i]:
            while len(stack)!=0 and stack[-1]>=arr[i]:
                stack.pop(-1)
            if len(stack)==0:
                list.append(-1)
            else:
                list.append(stack[-1])
        stack.append(arr[i])
    return list
