#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    N = int(input())

    vet = []
    for N_itr in range(N):
        firstNameEmailID = input().split("@")

        firstName = firstNameEmailID[0]
        emailID = firstNameEmailID[1]
        
        if emailID == "gmail.com":
            vet.append(firstName)

    vet.sort()    
    for element in vet:
        for ch in element:
            if ch != " ":
                print(ch, end="")
            else:
                print()
                break
