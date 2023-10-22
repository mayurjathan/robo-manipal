class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
        else:
            curr = self.head
            while curr.next:
                curr = curr.next
            curr.next = new_node

    def display(self):
        curr = self.head
        while curr:
            print(curr.data, end=" -> ")
            curr = curr.next
        print("None")

class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()

    def peek(self):
        if not self.is_empty():
            return self.items[-1]

    def is_empty(self):
        return len(self.items) == 0

    def size(self):
        return len(self.items)

def stack_menu(stack):
    while True:
        print("\nStack Menu:")
        print("1. Push an item")
        print("2. Pop an item")
        print("3. Peek at the top item")
        print("4. Check if the stack is empty")
        print("5. Get the size of the stack")
        print("6. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            item = input("Enter the item to push: ")
            stack.push(item)
        elif choice == "2":
            popped_item = stack.pop()
            if popped_item:
                print(f"Popped item: {popped_item}")
            else:
                print("Stack is empty.")
        elif choice == "3":
            top_item = stack.peek()
            if top_item:
                print(f"Top item: {top_item}")
            else:
                print("Stack is empty.")
        elif choice == "4":
            if stack.is_empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == "5":
            print(f"Size of the stack: {stack.size()}")
        elif choice == "6":
            break

def linked_list_menu(linked_list):
    while True:
        print("\nLinked List Menu:")
        print("1. Append an item")
        print("2. Display the linked list")
        print("3. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            item = input("Enter the item to append: ")
            linked_list.append(item)
        elif choice == "2":
            print("Linked List:")
            linked_list.display()
        elif choice == "3":
            break

if __name__ == "__main__":
    my_stack = Stack()
    my_linked_list = LinkedList()

    while True:
        print("\nMain Menu:")
        print("1. Stack Operations")
        print("2. Linked List Operations")
        print("3. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            stack_menu(my_stack)
        elif choice == "2":
            linked_list_menu(my_linked_list)
        elif choice == "3":
            break
