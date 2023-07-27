# Theory-of-Computing

**Title: Deterministic Finite Automaton (DFA) for Accepting Strings with Specific Tuples**

Explanation:
The given C++ code implements a Deterministic Finite Automaton (DFA) to determine whether a user-provided string of 0s and 1s is accepted or rejected based on a predefined set of tuples. The DFA defines states A, B, and C, and transitions between these states based on the input string's characters (0 or 1).

1. Tuples: The code specifies the following set of tuples: ({A, B, C}, {0, 1}, &, A, {C}). This means that the DFA consists of three states (A, B, and C), accepts inputs 0 and 1, starts at state A, and accepts the string if it reaches state C at the end.

2. Input: The user is prompted to enter a string that contains only 0s and 1s.

3. DFA Simulation: The DFA simulation starts in state A and processes each character of the input string one by one. For each character, the DFA transitions between states based on the current state and the input character, following the predefined rules:

   - If the current state is A and the input character is 0, the DFA remains in state A and outputs "A".
   - If the current state is A and the input character is 1, the DFA transitions to state B and outputs "B".
   - If the current state is B and the input character is 0, the DFA remains in state A and outputs "A".
   - If the current state is B and the input character is 1, the DFA transitions to state C and outputs "C".
   - If the current state is C, regardless of the input character, the DFA remains in state C and outputs "C".

4. Output: After processing the entire input string, the DFA may either end in state C or a state other than C, depending on the input. If the DFA ends in state C, it means that the string is accepted as it follows the rules defined by the tuples. If it ends in any other state, it means that the string is not accepted.

Example:
Suppose the user enters the input string "101010". The DFA will process the characters one by one as follows:

Start --> A --> B --> A --> C --> A --> B --> A --> C

The DFA ends in state C, which means that the string "101010" is accepted as it follows the specified tuples.

Note: The DFA presented in the code is specifically designed for the given set of tuples. Modifying the tuples or adding more states and transitions would create different DFA behaviors, allowing acceptance or rejection of different sets of strings.


**Title: Deterministic Finite Automaton (DFA) Simulator**

Description:
The C++ code provided is a program that simulates a Deterministic Finite Automaton (DFA) based on user-defined states and transitions. A DFA is a finite state machine that accepts or rejects input strings according to a predefined set of rules and transitions. In this implementation, the user is prompted to enter information about the DFA, including the number of states, the starting state, final states, and the transition table. The DFA then processes a given input string and determines whether the string is accepted or rejected based on the transitions defined.

1. User Input: The user is prompted to provide the following information about the DFA:
   a. Starting state: The initial state from which the DFA begins processing the input string.
   b. Total number of states: The number of states present in the DFA, which are represented by integers starting from 1.
   c. Total number of final states: The number of accepting or final states in the DFA.
   d. Final states: The states that, when reached, indicate that the input string is accepted by the DFA.
   e. Transition Table: The transition table specifies the next state for each state-input pair (0 and 1) of the DFA.

2. DFA Simulation: Once the user provides the necessary information, the program starts the DFA simulation. It takes an input string from the user and processes each character of the string based on the transition table. The DFA moves from one state to another according to the input characters' values (0 or 1), following the defined transitions.

3. Transition Table Display: During the DFA simulation, the program displays the transition table, showing the current state and the next state based on the input character for each step.

4. Result Checking: After processing the entire input string, the program checks whether the DFA ends up in one of the specified final states. If the final state matches any of the user-defined final states, the DFA accepts the input string. Otherwise, the input string is rejected.

Example:
Suppose the user provides the following DFA information:
- Starting state: 1
- Total number of states: 3
- Total number of final states: 1
- Final state: 3
- Transition Table:
  - From state 1, getting input '0' goes to state 2.
  - From state 1, getting input '1' goes to state 2.
  - From state 2, getting input '0' goes to state 2.
  - From state 2, getting input '1' goes to state 3.
  - From state 3, getting input '0' goes to state 1.
  - From state 3, getting input '1' goes to state 2.

If the user enters the input string "11001," the program will display the DFA's transition from one state to another as follows:
- State 1 for input 1 to 2
- State 2 for input 1 to 3
- State 3 for input 0 to 1
- State 1 for input 0 to 2
- State 2 for input 1 to 3

Since the DFA ends in state 3, which is one of the specified final states, the program will output "ACCEPTED," indicating that the input string "11001" is accepted by the DFA.
