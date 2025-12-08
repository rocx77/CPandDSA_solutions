# New ATM Design – Coding Problem

# An Automated Teller Machine (ATM) is an electronic device that enables people to withdraw cash from their bank accounts. Every ATM has a limit for the number of currency notes (say N) it can give at a time.

# A bank wants to design an ATM for school students. The unique feature of this ATM is that it would always dispense the maximum number of currency notes possible, in order to make the students happy.

# The available denominations of currency notes in the ATM are:

# ₹100, ₹200, ₹500, ₹1000

# Constraints

# N < 100

# The withdrawal amount will be in multiples of 100

# The ATM has limited availability of each currency denomination

# Input Format

# First line contains an integer N — the maximum number of currency notes the ATM can dispense in one transaction.

# Second line contains an integer — the amount to be withdrawn.

# Third line contains an integer — the available number of ₹100 notes in the ATM.

# Fourth line contains an integer — the available number of ₹200 notes in the ATM.

# Fifth line contains an integer — the available number of ₹500 notes in the ATM.

# Sixth line contains an integer — the available number of ₹1000 notes in the ATM.

# Output Format

# Print a single integer representing the maximum number of currency notes that can be dispensed to match the withdrawal amount.

# If the amount cannot be dispensed under the given constraints, print 0.

# Sample Input
# 10
# 1300
# 10
# 10
# 10
# 10

# Sample Output
# 10





N = int(input())
amount = int(input())
available_100 = int(input())
available_200 = int(input())
available_500 = int(input())
available_1000 = int(input())

notes = {1000: available_1000, 500: available_500, 200: available_200, 100: available_100}

def func(amount,N,notes):
    