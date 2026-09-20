#  Experiment 2 — Mutual Exclusion

This experiment demonstrates **mutual exclusion** using a semaphore
and a mutex in a Smart Home Smart Door Lock system.

##  Use Case

Multiple users or automated triggers may attempt to operate a smart
door lock at the same time.

Since the door-lock state is a shared resource, only one thread should
modify it at a time.

---

## 1. Semaphore

### `Semaphore.c`

A semaphore is used to control access to the shared door-lock state.

`sem_wait()` allows one thread to enter the critical section, while
`sem_post()` releases the semaphore for the next thread.

### Concepts Used

- Semaphore
- Critical Section
- Thread Synchronization
- `sem_wait()`
- `sem_post()`

### Compile

```bash
gcc Semaphore.c -o Semaphore -pthread
```

### Run

```bash
./Semaphore
```

---

## 2. Mutex

### `Mutex.c`

A mutex is used to provide mutual exclusion while modifying the
shared door-lock state.

`pthread_mutex_lock()` allows one thread to enter the critical section,
while `pthread_mutex_unlock()` releases it.

### Concepts Used

- Mutex
- Mutual Exclusion
- Critical Section
- Thread Synchronization
- `pthread_mutex_lock()`
- `pthread_mutex_unlock()`

### Compile

```bash
gcc Mutex.c -o Mutex -pthread
```

### Run

```bash
./Mutex
```

---

##  Comparison

| Feature | Semaphore | Mutex |
|---|---|---|
| File | `Semaphore.c` | `Mutex.c` |
| Synchronization | `sem_wait()` / `sem_post()` | `lock()` / `unlock()` |
| Purpose | Controls access to shared resource | Provides mutual exclusion |
| Use Case | Smart Door Lock | Smart Door Lock |

---

##  Concept

```text
        USER 1 ──┐
        USER 2 ──┼──►  DOOR LOCK
        USER 3 ──┘
                    │
             One thread at
             a time accesses
             the shared state
```

---

##  Objective

To understand mutual exclusion and learn how semaphores and mutexes
can be used to synchronize multiple threads accessing a shared resource.