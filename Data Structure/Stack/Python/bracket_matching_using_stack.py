class Stack:
    def __init__(self, MAX_SIZE):
        self.top = -1
        self.stack = [None for i in range(MAX_SIZE)]

    def isEmpty(self):
        return True if self.top == -1 else False

    def push(self, data):
        self.top += 1
        if(self.top > len(self.stack)):
            print("Stack Overflow")
        else:
            self.stack[self.top] = data

    def peek(self):
        if (self.top == -1):
            return "stack empty"
        else:
            return self.stack[self.top]

    def pop(self):
        if(self.top == -1):
            return 'Stak Underflow'
        else:
            popped_data = self.stack[self.top]
            self.top -= 1
            return popped_data

    def display(self):
        if self.top == -1:
            print("stack is empty!")
        else:
            temp = self.top

            while temp != -1:
                print(self.stack[temp],"->",end=" ")
                temp -= 1
            return


# s = Stack(5)
# s.push(55)
# s.push(66)
# s.push(77)
# s.display()
#
# print()
# print("popped ",s.pop())
# print("peek: ",s.peek())
# s.push(11)
# s.display()

def checkBalance(S):
    stack = Stack(len(S))
    if S == "":
        return True
    for c in S:
        if c == '(' or c == '{' or c == '[':
            stack.push(c)
        else:
            print("PEEK: ",stack.display())
            if stack.isEmpty():
                return False
            if c == ')' and stack.peek() != '(':
                return False
            if c == '}' and stack.peek() != '{':
                return False
            if c == ']' and stack.peek() != '[':
                return False
            stack.pop()
    if stack.isEmpty():
        print("Ami")
        return True
    return False

#
# s = input("Enter brackets : ")
# print(checkBalance(s))
while True:

    s = input("Enter brackets : ")
    if len(s) == 0:
        break
    if checkBalance(s):
        print("Balanced")
    else:
        print("Not Balanced")
