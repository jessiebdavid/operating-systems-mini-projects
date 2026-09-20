#  Experiment 3 — Reader-Writer Problem

This experiment demonstrates the **Reader-Writer synchronization
problem** using semaphores and read-write locks.

##  1. Banking System

### `Banking.c`

A bank account is accessed by multiple readers and writers.

- **Readers** view the account balance.
- **Writers** modify the account balance.
- Multiple readers can read simultaneously.
- A writer requires exclusive access.

### Concepts Used

- Reader-Writer Problem
- Semaphores
- Threads
- Shared Resources
- Critical Section

### Compile

```bash
gcc Banking.c -o Banking -pthread
```

### Run

```bash
./Banking
```

### Input

```text
balance readers writers amount
```

Example:

```text
5000 3 2 1000
```

---

##  2. Online Examination Timer

### `rwtimer.c`

This program models an online examination system where students
continuously view the remaining examination time while a master clock
updates it.

- **Students** act as readers.
- **Master Clock** acts as the writer.
- Multiple students can view the timer.
- The clock requires exclusive access while updating the timer.

### Concepts Used

- Read-Write Lock
- Reader Access
- Writer Access
- Thread Synchronization
- Shared Data

### Compile

```bash
gcc rwtimer.c -o rwtimer -pthread
```

### Run

```bash
./rwtimer
```

---

##  Comparison

| File | Use Case | Synchronization |
|---|---|---|
| `Banking.c` |  Banking System | Semaphore |
| `rwtimer.c` |  Online Examination Timer | Read-Write Lock |

---

##  Concept

```text
              SHARED RESOURCE
                    │
             ┌──────┴──────┐
             ▼             ▼
          READERS        WRITER
          ┌──┼──┐           │
          ▼  ▼  ▼           ▼
          R1 R2 R3      Exclusive Access
```

Readers can access shared data together, while a writer requires
exclusive access to safely modify it.

---

##  Objective

To understand the Reader-Writer problem and implement synchronization
mechanisms that allow concurrent reading while providing exclusive
access during updates.