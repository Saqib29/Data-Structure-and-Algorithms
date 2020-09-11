class Stack:
    def __init__(self):
        self.items = []

    # method to check stack is empty or not
    def isEmpty(self):
        return self.items == []
    
    # method to push data into strack
    def push(self, data):
        self.items.append(data)

    # method to pop item from stack
    def pop(self):
        if self.isEmpty():
            return "Stack is UnderFlow."
        return self.items.pop()

    # check thge top item of the stack
    def peek(self):
        if self.isEmpty():
            return "Stack is Empty."
        return self.items[-1]

    # method of the stack size
    def size(self):
        return len(self.items)

    # method to see the full stack
    def fullStack(self):
        if self.isEmpty():
            return "Stack is empty."
        return self.items


stack = Stack()
print('Current stack: ', stack.fullStack())
print('Stack empty? ', stack.isEmpty())
print('Pusshing integer 1')
stack.push(1)
print('Pushing string "Told you, I am generic stack!"')
stack.push('Told you, I am generic stack!')
print('Pushing integer 3')
stack.push(3)
print('Current stack: ', stack.fullStack())
print('Popped item: ', stack.pop())
print('Current stack: ', stack.fullStack())
print('Stack empty?: ', stack.isEmpty())
