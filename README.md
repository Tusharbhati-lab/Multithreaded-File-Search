> **Status:** 🚧 Active Development
>
> The current version implements the project foundation. Multithreading using POSIX Threads (`pthread`) is the next planned milestone.

# 🔍 Multithreaded File Search Utility

A high-performance command-line file search utility written in **C** for Linux. The project is being developed incrementally, starting with recursive directory traversal and evolving into a multithreaded file search engine using POSIX Threads.

---

## 🚀 Features

### ✅ Implemented
- Modular C project structure
- Command-line argument parsing
- GCC build system using Makefile
- Git version control

### 🚧 In Progress
- Recursive directory traversal
- Filename search
- Recursive file matching

### 📌 Planned
- POSIX Threads (pthread)
- Mutex-based thread synchronization
- Performance benchmarking
- Search by extension
- Search by file size
- Search by modification date
- Logging and execution statistics

---

## 📂 Project Structure

```
Multithreaded-File-Search/
│
├── include/
│   └── search.h
│
├── sample_data/
│
├── src/
│   ├── main.c
│   └── search.c
│
├── Makefile
├── README.md
└── .gitignore
```

---

## ⚙️ Build

```bash
make
```

or

```bash
gcc src/main.c src/search.c -Iinclude -o search
```

---

## ▶️ Run

```bash
./search <directory> <filename>
```

Example:

```bash
./search sample_data report.pdf
```

---

## 🛠️ Technologies

- C
- GCC
- Linux File System APIs
- Makefile
- Git

---

## 📅 Development Roadmap

- [x] Project setup
- [x] Modular architecture
- [x] Command-line interface
- [ ] Recursive directory traversal
- [ ] Recursive file search
- [ ] POSIX multithreading
- [ ] Mutex synchronization
- [ ] Performance benchmarking

---

## 📄 License

This project is developed for learning systems programming, Linux programming, and multithreaded software development.