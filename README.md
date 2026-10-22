# Tower of Hanoi

A small C program that prints the moves needed to solve the Tower of Hanoi puzzle. It uses a recursive algorithm to move a stack of disks from a source peg to a target peg, using the remaining peg as temporary storage.

## How It Works

The `hanoi` function solves the puzzle recursively:

1. Move `n - 1` disks from the source peg to the auxiliary peg.
2. Print the move for the largest disk, from the source peg to the target peg.
3. Move the `n - 1` disks from the auxiliary peg to the target peg.

The peg numbers are `1`, `2`, and `3`. The program calculates the auxiliary peg with `6 - source - target`.

## Build

Compile with a C compiler such as GCC:

```sh
gcc hanoi.c -o hanoi
```

## Run

On Linux or macOS:

```sh
./hanoi
```

On Windows using MinGW:

```sh
gcc hanoi.c -o hanoi.exe
hanoi.exe
```

## Example Output

With the current settings in `main` (3 disks, peg 1 as the source and peg 3 as the target), the program prints:

```text
Moves for disc 31 -> 3
1 -> 2
3 -> 2
1 -> 3
2 -> 1
2 -> 3
1 -> 3
```

The introductory message and first move appear on the same line because the message printed by `main` does not end with a newline.

## Configuration

To change the puzzle size or direction, edit `number_of_disc`, `source`, and `target` in `main`. The recursive solution requires `2^n - 1` moves for `n` disks.
