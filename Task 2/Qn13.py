#  13) Ash is tasked with maintaining an inventory list of all the items in a lab.
# The inventory list contains entries of all the items present in the lab along with its quantity.
# On daily basis items can be borrowed from the lab or new items can be added to the Lab.
# Hence Ash usually performs 2 operations on the inventory list:
# Adding items to the list
# Deleting items from the list
# Ash usually does this manually and would prefer to use a program to maintain the inventory list.
# Your task is to write a program that will help Ash.
# Consider there are N items in the lab initially. 
# Create a list L that will contain all the names of items (item_name) along with its quantity (item_quantity).
# Also, make provision for adding/deleting items to/from the list.
# The item name and its quantity along with the operation (ADD / DELETE) will be specified. 
# You must take care of the following conditions while performing any of the operations on the list.

# Condition for Adding:
# Format: ADD $item_name$ $quantity$
# If the item_name of the item to be added does not exist in the list, then add item_name and 
# its quantity to the List L and print ADDED Item $item_name$
# If the item_name of the item to be added exists in the list,
# then simply update the quantity of the item and print UPDATED Item $item_name$

# Condition for Deleting
# Format: DELETE $item_name$ $quantity$
# If the item_name of the item to be deleted does not exist in the list, 
# then print Item $item_name$ does not exist
# If the item_name of the item to be deleted exists in the list, 
# then check if its quantity in the list L is less than the quantity specified in the DELETE operation.
# If it is less then, print Item $item_name$ could not be DELETED
# Else update the quantity by subtracting the specified amount and print DELETED Item $item_name$
class Inventory:
    def __init__(self):
        self.list={}
    def add(self,name,qua):
        if name in self.list:
            self.list[name]+=qua
            print(f"Updated Item {name}")
        else:
            self.list[name]=qua
            print(f"ADDED Item {name}")
            
    def delete(self, name, qua):
        if name in self.list:
            if self.list[name] < qua:
                print(f"Item {name} could not be DELETED")
            else:
                self.list[name] -= qua
                print(f"DELETED Item {name}")
        else:
            print(f"Item {name} does not exist")

    def show(self):
        print("\nCurrent Inventory:")
        for item, qua in self.list.items():
            print(f"{item}: {qua}")

def main():
    inventory = Inventory()

    while True:
        op = input("Enter operation (ADD / DELETE / SHOW / QUIT): ").strip().upper()

        if op == "ADD":
            name, quantity = input("Enter item name and quantity to add: ").split()
            quantity = int(quantity)
            inventory.add(name, quantity)
        elif op == "DELETE":
            name, quantity = input("Enter item name and quantity to delete: ").split()
            quantity = int(quantity)
            inventory.delete(name, quantity)
        elif op == "SHOW":
            inventory.show()
        elif op == "QUIT":
            print("Inventory operations complete.")
            break
        else:
            print("Invalid operation. Please enter ADD, DELETE, SHOW, or QUIT.")

if __name__ == "__main__":
    main()
