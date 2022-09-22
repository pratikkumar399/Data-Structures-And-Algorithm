def twoNumbers(array, targetSum):
    for i in range(len(array) - 1):
        firstNum = array[i]
        for j in range(i+1,  len(array)):
            secondNum = array[i]
            if (firstNum+secondNum == targetSum):
                return [firstNum, secondNum]

    return []


