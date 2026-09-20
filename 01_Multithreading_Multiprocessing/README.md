#  Experiment 1 — Multithreading & Multiprocessing

This experiment demonstrates **multithreading and multiprocessing**
using an online shopping invoice system.

##  Use Case

An online shopping system receives multiple customer orders.

Each order contains:
- Product
- Quantity
- Price

A 5% tax is added to the calculated invoice total.

---

## 1. Single Process Multithreading

### `stmp.c`

A single process creates multiple threads, where each thread processes
one shopping order.

### Concepts Used

- Threads
- `pthread_create()`
- `pthread_join()`
- Shared process memory

### Compile

```bash
gcc stmp.c -o stmp -pthread
```

### Run

```bash
./stmp
```

---

## 2. Multiple Process Multithreading

### `mtmp.c`

The parent process creates a separate child process for each order.
Each child process then creates a thread to calculate its invoice.

### Concepts Used

- Processes
- `fork()`
- Threads
- `pthread_create()`
- `pthread_join()`
- `wait()`
- Process IDs

### Compile

```bash
gcc mtmp.c -o mtmp -pthread
```

### Run

```bash
./mtmp
```

---

##  Comparison

| Feature | `stmp.c` | `mtmp.c` |
|---|---|---|
| Process | Single | Multiple |
| Threads | Multiple | One per child |
| Process Creation | — | `fork()` |
| Thread Creation | `pthread_create()` | `pthread_create()` |
| Waiting | `pthread_join()` | `pthread_join()` + `wait()` |

---

##  Concept

```text
Single Process
      │
 ┌────┼────┐
 ▼    ▼    ▼
 T1   T2   T3
 │    │    │
Order Order Order


Multiple Processes
      │
 ┌────┼────┐
 ▼    ▼    ▼
 P1   P2   P3
 │    │    │
 T1   T2   T3
 │    │    │
Order Order Order
```

---

##  Objective

To understand how threads and processes can be used to perform
multiple tasks concurrently in an operating system.