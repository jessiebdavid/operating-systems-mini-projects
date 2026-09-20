#  Experiment 4 — Resource Synchronization

This experiment demonstrates **resource synchronization** using
mutexes in a multi-threaded AI model training environment.

##  Use Case

Multiple AI workers require shared GPU resources for model training.

Each worker needs two GPUs at the same time. Since GPUs are limited
shared resources, mutexes are used to control access and prevent
conflicting resource usage.

---

## 1. Dynamic GPU Resource Management

### `GPU.c`

The program accepts the number of AI workers and creates the same
number of GPU resources.

Each worker requires two adjacent GPUs. The lower-numbered GPU is
always locked first to maintain a fixed resource ordering.

### Concepts Used

- Threads
- Mutex
- Shared Resources
- Resource Allocation
- Resource Ordering
- Deadlock Prevention

### Compile

```bash
gcc GPU.c -o gpu -pthread
```

### Run

```bash
./gpu
```

### Input

```text
Enter number of workers: 4
```

---

## 2. GPU Resource Synchronization

### `dining.c`

This program demonstrates a Dining Philosophers-style resource
synchronization problem using AI workers and GPUs.

Three AI workers share three GPUs, with each worker requiring two
GPUs for training.

The lower-numbered GPU is always acquired first to prevent circular
waiting.

### Concepts Used

- Mutex
- Thread Synchronization
- Shared Resources
- Critical Section
- Resource Ordering
- Deadlock Prevention

### Compile

```bash
gcc dining.c -o dining -pthread
```

### Run

```bash
./dining
```

---

##  Resource Model

```text
              AI WORKERS

          Worker 0
         /         \
      GPU 0       GPU 1
         \         /
          Worker 1
         /         \
      GPU 1       GPU 2
         \         /
          Worker 2
         /         \
      GPU 2       GPU 0
```

Each worker needs two GPUs.

To avoid circular waiting, workers acquire resources in a fixed
order:

```text
Lower GPU → Higher GPU
```

---

##  Key Concept

Without proper synchronization, multiple workers could hold one GPU
while waiting for another GPU held by a different worker.

Fixed resource ordering prevents this circular wait condition.

---

##  Objective

To understand how mutexes, resource allocation and fixed resource
ordering can be used to synchronize multiple threads competing for
limited resources.