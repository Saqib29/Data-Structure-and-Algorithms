class Stack:
    def __init__(self, max_size):
        self.top = -1
        self.stack = [None for x in range(max_size)]

    def push(self, new_element):
        self.top += 1
        if len(self.stack) <= self.top:
            pritn("Satck is overflow")
        else:
            self.stack[self.top] = new_element

    def pop(self):
        if self.isEmpty():
            return "stack is empty"
        else:
            last_element = self.stack[self.top]
            self.top -= 1
            return last_element

    def peek(self):
        if self.isEmpty():
            return "Stack is underflow"
        else:
            return self.stack[self.top]

    def isEmpty(self):
        return self.top == -1


s = Stack(5)
for i in range(5):
    s.push(i)
print("Peek value: ",s.peek())
print(s.pop())
print(s.peek())
print(s.isEmpty())
