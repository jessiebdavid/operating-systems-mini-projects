#  Experiment 7 — Priority & Round Robin Scheduling

This experiment demonstrates **Priority Scheduling** and **Round Robin
Scheduling** using a Smart Irrigation System.

##  Use Case

A smart irrigation system manages multiple garden zones using a
shared water pump.

- **Priority Scheduling:** Drier zones receive higher priority.
- **Round Robin:** Zones with equal priority share the pump fairly
  in rotation.

---

## 1. Priority Scheduling

### `priority.c`

Each garden zone is assigned a dryness value.

A higher dryness value represents a greater need for water, so the
driest zone is watered first.

### Concepts Used

- Priority Scheduling
- Process Priority
- Resource Allocation
- Scheduling Order

### Compile

```bash
gcc priority.c -o priority
```

### Run

```bash
./priority
```

### Input

```text
number of garden zones
zone ID and dryness priority
```

---

## 2. Round Robin Scheduling

### `round_robin.c`

Zones with equal watering priority share the water pump in rotation.

Each zone receives one fixed watering turn before the pump moves to
the next zone.

### Concepts Used

- Round Robin Scheduling
- Time Quantum
- Fair Resource Sharing
- Preemptive Scheduling

### Compile

```bash
gcc round_robin.c -o round_robin
```

### Run

```bash
./round_robin
```

### Input

```text
number of equally dry zones
watering time per turn
```

---

##  Comparison

| Algorithm | Scheduling Basis | Use Case |
|---|---|---|
| Priority | Soil dryness |  Driest zone first |
| Round Robin | Equal-priority rotation |  Fair pump sharing |

---

##  Concept

```text
              SMART IRRIGATION
                     │
              ┌──────┴──────┐
              ▼             ▼
          PRIORITY      ROUND ROBIN
              │             │
        Driest Zone     Equal Zones
          First          Take Turns
              │             │
              └──────┬──────┘
                     ▼
                  WATER PUMP
```

---

##  Objective

To understand Priority and Round Robin scheduling by applying them
to resource allocation in a smart irrigation system.