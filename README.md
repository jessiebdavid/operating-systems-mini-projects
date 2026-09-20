#  Operating Systems — Mini Projects

<div align="center">

### `Processes • Threads • Synchronization • Deadlocks • Scheduling`

A collection of **Operating Systems concepts implemented in C**  
through practical real-world scenarios.

</div>

---

##  About

This repository contains practical implementations of fundamental
Operating Systems concepts studied through laboratory experiments.

The goal is to connect OS theory with simple real-world scenarios
and understand how processes, threads, synchronization, resources,
deadlocks and scheduling work in practice.

---

##  Concepts & Use Cases

| # | Concept | Use Case |
|:---:|---|---|
| 01 | Process Management |  Process Execution |
| 02 | Process & Thread Concepts |  Concurrent Execution |
| 03 | Multithreading & Multiprocessing |  Online Shopping |
| 04 | Mutual Exclusion |  Smart Door Lock |
| 05 | Reader-Writer Problem |  Banking System |
| 06 | Resource Synchronization |  AI Model Training |
| 07 | Deadlocks & Avoidance |  Cloud Gaming |
| 08 | CPU Scheduling |  Flash Sale /  Delivery |
| 09 | Priority & Round Robin |  Process Scheduling |

---

##  Core Topics

```text
PROCESS MANAGEMENT
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

###  Multithreading & Multiprocessing

Working with multiple threads and processes to perform tasks concurrently.

###  Mutual Exclusion

Using semaphores and mutexes to safely access shared resources.

###  Reader-Writer

Managing simultaneous readers while providing exclusive access to writers.

###  Deadlocks

Understanding resource conflicts, circular waits and deadlock avoidance.

###  CPU Scheduling

Implementing scheduling algorithms such as FCFS, SJF, Priority and Round Robin.

---

##  Tech Stack

- **C**
- **POSIX Threads**
- **Semaphores**
- **Mutex**
- **GCC**
- **Linux / WSL**
- **Git & GitHub**

---

##  Repository Structure

```text
operating-systems-mini-projects/
│
├── 01_Process_Management/
├── 02_Process_Thread_Concepts/
├── 03_Multithreading_Multiprocessing/
├── 04_Mutual_Exclusion/
├── 05_Reader_Writer/
├── 06_Resource_Synchronization/
├── 07_Deadlocks/
├── 08_CPU_Scheduling/
├── 09_Priority_Round_Robin/
│
├── README.md
├── LICENSE
└── .gitignore
```

---

##  Running the Programs

Clone the repository:

```bash
git clone https://github.com/YOUR-USERNAME/operating-systems-mini-projects.git
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

---

##  Purpose

This repository is part of my **Operating Systems coursework** and
serves as a practical collection of C implementations.

The focus is not only on implementing the algorithms, but also on
understanding how they apply to real-world systems.

---

<div align="center">


</div>