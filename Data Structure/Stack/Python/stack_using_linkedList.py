class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.head = None

    def isEmpty(self):
        return True if self.head is None else False

    def push(self, data):
        if self.head == None:
            self.head = Node(data)
        else:
            new_node = Node(data)
            new_node.next = self.head
            self.head = new_node

    def pop(self):
        if self.isEmpty():
            return None
        else:
            popped_item = self.head
            self.head = self.head.next
            popped_item.next = None
            return popped_item.data

    def peek(self):
        if self.isEmpty():
            return None
            #print("Stack is empty, underflow")
        else:
            return self.head.data

    def display(self):
        iternode = self.head
        if self.isEmpty():
            print("Stack Underflow")
        else:
            while iternode != None:
                print(iternode.data,"->",end=" ")
                iternode = iternode.next

if __name__ == '__main__':
    stack = Stack()

    stack.push(11)
    stack.push(22)
    stack.push(33)
    stack.push(44)
    stack.push(55)

    stack.display()

    print("\nPeek value: ", stack.peek())
    print(stack.pop())
    print("Peek value: ", stack.peek())
    print("pooped: ",stack.pop())

    stack.display()
