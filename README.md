# Ch6Test-DeckOfCards
part of a series of answers to the ch 6 test from learncpp.com

Not robust, will clean code later

6) Let’s pretend we’re writing a card game.

6a) A deck of cards has 52 unique cards (13 card ranks of 4 suits). Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades).

6b) Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.

6c) Create a printCard() function that takes a const Card reference as a parameter and prints the card rank and value as a 2-letter code (e.g. the jack of spades would print as JS).

6d) A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards, and initialize it with one of each card.

Hint: Use static_cast if you need to convert an integer into an enumerated type.
Hint: Don’t forget that std::array’s operator[] expects an index of type size_type, and that size_type must be prefixed by the full name of the array type to be accessed.

6e) Write a function named printDeck() that takes the deck as a const reference parameter and prints the values in the deck. Use a for-each loop.

6f) Write a swapCard function that takes two Cards and swaps their values.

6g) Write a function to shuffle the deck of cards called shuffleDeck(). To do this, use a for loop to step through each element of your array. Pick a random number between 1 and 52, and call swapCard with the current card and the card picked at random. Update your main function to shuffle the deck and print out the shuffled deck.

Hint: Review lesson 5.9 -- Random number generation for help with random numbers.
Reminder: Only seed your random number generator once.

6h) Write a function named getCardValue() that returns the value of a Card (e.g. a 2 is worth 2, a ten, jack, queen, or king is worth 10. Assume an Ace is worth 11).
