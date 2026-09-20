#  Experiment 6 — CPU Scheduling

This experiment demonstrates **FCFS (First Come First Serve)** and
**SJF (Shortest Job First)** scheduling using practical real-world
scenarios.

##  1. FCFS — Flash Sale

### `fcfs.c`

In a flash sale, buyers are processed according to their arrival time.
The buyer who arrives first is served first.

The program also manages limited stock and discount slots.

### Concepts Used

- FCFS Scheduling
- Arrival Time
- Queue Ordering
- Resource Allocation

### Compile

```bash
gcc fcfs.c -o fcfs
```

### Run

```bash
./fcfs
```

### Input

```text
number of buyers
stock and discount slots
buyer ID and arrival time
```

Example:

```text
5
6 3
101 20
102 10
103 30
104 15
105 25
```

---

##  2. SJF — Delivery Scheduling

### `sjf.c`

In a delivery system, each order has a different delivery distance.
The estimated delivery time is treated as the **burst time**.

Orders requiring less delivery time are processed first.

### Formula

```text
Delivery Time = (Distance / Speed) × 60
```

The program uses an average delivery speed of **20 km/h**.

### Concepts Used

- SJF Scheduling
- Burst Time
- Service Time
- Scheduling Order

### Compile

```bash
gcc sjf.c -o sjf
```

### Run

```bash
./sjf
```

### Input

```text
number of orders
order ID and distance
```

Example:

```text
4
101 2
102 5
103 1
104 3
```

---

##  Comparison

| Algorithm | Scheduling Basis | Use Case |
|---|---|---|
| FCFS | Arrival Time |  Flash Sale |
| SJF | Shortest Service Time |  Delivery |

---

##  Concept

```text
FCFS
Arrival Time
     ↓
First Arrival
     ↓
First Served


SJF
Service / Burst Time
        ↓
Shortest Job
        ↓
First Served
```

---

##  Objective

To understand and implement FCFS and SJF CPU scheduling algorithms
and observe how different scheduling criteria determine execution order.