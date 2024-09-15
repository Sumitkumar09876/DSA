def TokenNumbering(N, P, A, B):
    from itertools import permutations

    # Initialize the result to 0
    result = 0.0

    # Generate all permutations of the token indices
    indices = list(range(N))
    all_permutations = permutations(indices)

    # Iterate over all permutations to calculate the probability
    for perm in all_permutations:
        prob = 1.0
        used_numbers = set()
        valid_permutation = True

        for i in perm:
            if A[i] in used_numbers and B[i] in used_numbers:
                valid_permutation = False
                break
            elif A[i] in used_numbers:
                prob *= (100 - P[i]) / 100.0
                used_numbers.add(B[i])
            elif B[i] in used_numbers:
                prob *= P[i] / 100.0
                used_numbers.add(A[i])
            else:
                prob *= (P[i] / 100.0 + (100 - P[i]) / 100.0)
                used_numbers.add(A[i])
                used_numbers.add(B[i])

        if valid_permutation:
            result += prob

    return result

# Input reading
N = int(input())
P = list(map(int, input().split()))
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Function call and output
result = TokenNumbering(N, P, A, B)
print(result)