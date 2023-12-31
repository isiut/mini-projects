def fibonacci_to(n: int) -> list:
    sequence: list = [1, 1]
    while sequence[-1] < n:
        sequence.append(sequence[-1] + sequence[-2])

    return sequence


def fibonacci_nth(n: int) -> list:
    sequence: list = [1, 1]
    for _ in range(1, n - 1):
        sequence.append(sequence[-1] + sequence[-2])

    return sequence
