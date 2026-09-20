# Operating Systems — Mini Projects

<div align="center">

### `Processes • Threads • Synchronization • Deadlocks • Scheduling`

A collection of **Operating Systems concepts implemented in C**  
through practical real-world scenarios.

</div>

---

## About

This repository contains practical implementations of fundamental
Operating Systems concepts studied through laboratory experiments.

The goal is to connect OS theory with simple real-world scenarios
and understand how processes, threads, synchronization, resources,
deadlocks and scheduling work in practice.

---

## Concepts & Use Cases

| # | Concept | Use Case |
|:---:|---|---|
| 01 | Multithreading & Multiprocessing | Online Shopping |
| 02 | Mutual Exclusion | Smart Door Lock |
| 03 | Reader-Writer Problem | Banking / Online Examination |
| 04 | Resource Synchronization | AI Model Training |
| 05 | Deadlocks & Avoidance | Cloud Gaming |
| 06 | CPU Scheduling | Flash Sale / Delivery |
| 07 | Priority & Round Robin | Smart Irrigation |

---

## Core Topics

```text
PROCESSES & THREADS
        ↓
MULTITHREADING
        ↓
SYNCHRONIZATION
        ↓
RESOURCE MANAGEMENT
        ↓
DEADLOCKS
        ↓
CPU SCHEDULING
```

### Multithreading & Multiprocessing

Working with multiple threads and processes to perform tasks
concurrently.

### Mutual Exclusion

Using semaphores and mutexes to safely access shared resources.

### Reader-Writer

Managing simultaneous readers while providing exclusive access
to writers.

### Resource Synchronization

Managing multiple threads competing for limited shared resources.

### Deadlocks

Understanding resource conflicts, circular waits and deadlock
avoidance using resource allocation techniques.

### CPU Scheduling

Implementing scheduling algorithms such as FCFS, SJF, Priority
and Round Robin.

---

## Tech Stack

- **C**
- **POSIX Threads**
- **Semaphores**
- **Mutex**
- **GCC**
- **Linux / WSL**
- **Git & GitHub**

---

## Repository Structure

```text
operating-systems-mini-projects/
│
├── 01_Multithreading_Multiprocessing/
├── 02_Mutual_Exclusion/
├── 03_Reader_Writer/
├── 04_Resource_Synchronization/
├── 05_Deadlocks/
├── 06_CPU_Scheduling/
├── 07_Priority_Round_Robin/
│
├── README.md
├── LICENSE
└── .gitignore
```

---

## Running the Programs

Clone the repository:

```bash
git clone https://github.com/jessiebdavid/operating-systems-mini-projects.git
cd operating-systems-mini-projects
```

Compile a normal C program:

```bash
gcc program.c -o program
```

For programs using POSIX threads:

```bash
gcc program.c -o program -pthread
```

Run:

```bash
./program
```

Each experiment directory contains its own README with the
corresponding compilation and execution commands.

---

## Experiments

| Experiment | Topics |
|:---:|---|
| **01** | Multithreading & Multiprocessing |
| **02** | Mutual Exclusion |
| **03** | Reader-Writer Problem |
| **04** | Resource Synchronization |
| **05** | Deadlocks & Deadlock Avoidance |
| **06** | FCFS & SJF Scheduling |
| **07** | Priority & Round Robin Scheduling |

---

## Purpose

This repository is part of my **Operating Systems coursework** and
serves as a practical collection of C implementations.

The focus is not only on implementing the algorithms, but also on
understanding how Operating Systems concepts apply to real-world
systems.

---

<div align="center">

`Built with C • Threads • Synchronization • Scheduling`

</div>