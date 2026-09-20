#  Experiment 5 — Deadlocks & Deadlock Avoidance

This experiment demonstrates **deadlock detection, deadlock
avoidance and Banker's Algorithm** using a cloud gaming system.

##  Use Case

Multiple cloud gaming sessions share limited resources such as
GPU resources, memory and network bandwidth.

A deadlock can occur when sessions hold one resource while waiting
for another resource held by a different session.

---

## 1. Deadlock Detection

### `detection.c`

This program uses a **wait-for matrix** to represent dependencies
between gaming sessions.

If two sessions are waiting for resources held by each other, a
circular wait exists and the program reports a deadlock.

### Concepts Used

- Deadlock
- Wait-for Graph
- Circular Wait
- Resource Dependency

### Compile

```bash
gcc detection.c -o detection
```

### Run

```bash
./detection
```

---

## 2. Deadlock Avoidance

### `avoidance.c`

This program checks whether the remaining resource requirements of
cloud gaming sessions can be satisfied using the currently available
resources.

If the requirements can be satisfied, the allocation is considered
safe. Otherwise, the request is delayed.

### Concepts Used

- Deadlock Avoidance
- Resource Allocation
- Available Resources
- Resource Need
- Safe Allocation

### Compile

```bash
gcc avoidance.c -o avoidance
```

### Run

```bash
./avoidance
```

---

## 3. Banker's Algorithm

### `bankers.c`

This program implements **Banker's Algorithm** for resource
management.

It calculates:

```text
Need = Maximum − Allocation
```

The program checks whether each gaming session can complete with the
available resources. When a session can finish, its allocated
resources are released and added back to the available resources.

If all sessions can complete, a **safe sequence** is displayed.
Otherwise, the system is reported as unsafe.

### Concepts Used

- Banker's Algorithm
- Allocation
- Maximum
- Need
- Available Resources
- Safe State
- Unsafe State
- Safe Sequence

### Compile

```bash
gcc bankers.c -o bankers
```

### Run

```bash
./bankers
```

---

##  Deadlock Model

```text
       CLOUD GAMING SYSTEM

   ┌────────────┐
   │  Session 1 │
   └─────┬──────┘
         │ holds GPU
         ▼
   ┌────────────┐
   │  Session 2 │
   └─────┬──────┘
         │ waits for GPU
         ▼
   ┌────────────┐
   │  Resources │
   └────────────┘
```

A circular dependency between sessions can cause deadlock.

---

##  Programs

| File | Purpose |
|---|---|
| `detection.c` | Deadlock Detection |
| `avoidance.c` | Deadlock Avoidance |
| `bankers.c` | Banker's Algorithm |

---

##  Objective

To understand deadlock detection and avoidance techniques and
implement Banker's Algorithm for safe resource allocation.