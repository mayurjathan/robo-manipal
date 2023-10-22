#Using concepts of OOP create two classes Card and Deck 
# and create a method to shuffle the originally ordered deck. 
# Create another method to check whether a given set of cards are a pair. 
# For example: J, Q of hearts or 10, J of spades. 
# Pair checks for whether value is consecutive or cyclic such as in case of A, 1.
import random

class Card:
    def __init__(self, rank, suit):
        self.rank = rank
        self.suit = suit

    def __str__(self):
        return f"{self.rank} of {self.suit}"

class Deck:
    def __init__(self):
        ranks = ["2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"]
        suits = ["Hearts", "Diamonds", "Clubs", "Spades"]
        self.cards = [Card(rank, suit) for rank in ranks for suit in suits]

    def shuffle(self):
        random.shuffle(self.cards)

    def pair(self, c1, c2):
        rank_values = {"2": 2, "3": 3, "4": 4, "5": 5, "6": 6, "7": 7, "8": 8, "9": 9,"10": 10, "J": 11, "Q": 12, "K": 13, "A": 14}
        r1 = c1.rank
        r2 = c2.rank
        if abs(rank_values[r1] - rank_values[r2]) == 1 or abs(rank_values[r1] - rank_values[r2]) == 12:
            return True
        else:
            return False

if __name__ == "__main__":
    deck = Deck()
    print("Original deck:")
    for card in deck.cards:
        print(card)

    deck.shuffle()
    print("\nShuffled deck:")
    for card in deck.cards:
        print(card)

    c1 = deck.cards[0]
    c2 = deck.cards[1] 

    if deck.pair(c1, c2):
        print("\nThe two cards form a pair!")
    else:
        print("\nThe two cards do not form a pair.")
