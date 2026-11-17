# C++ Primer Plus（第五版）习题答案

《C++ Primer Plus（第 5 版）》课后编程练习的答案与解题过程记录。

每道习题单独占一个 commit，按**章节分支**组织，方便按顺序查看思路演进。

## 分支说明

| 分支 | 内容 | 提交数 |
| --- | --- | --- |
| [`Chapter-Two`](https://github.com/iyashilight/Code-for-C-Primer-Plus-fifth-edition-/commits/Chapter-Two) | 第 2 章习题 | 6 |
| [`Chaper-Three`](https://github.com/iyashilight/Code-for-C-Primer-Plus-fifth-edition-/commits/Chaper-Three) | 第 3 章习题（分支名沿用创建时的拼写） | 6 |
| `master` | 通用实验与 CMake 工程骨架（`main.cpp`） | — |

组织原则：

- **分支**：代表章节或用途
- **commit**：对应章节内的某一道习题
- 每个 commit 只解决一道题，不混合多道习题

## 使用方式

```bash
git clone git@github.com:iyashilight/Code-for-C-Primer-Plus-fifth-edition-.git
cd Code-for-C-Primer-Plus-fifth-edition-

# 查看所有分支
git branch -a

# 切到某一章
git checkout Chapter-Two

# 按 commit 顺序查看每道题的解答
git log --oneline
git show <commit>
```

## 构建（master 分支）

需要 CMake（版本要求见 `CMakeLists.txt`）和支持 C++20 的编译器：

```bash
cmake -B build -S .
cmake --build build
./build/My_Study        # Windows: .\build\Debug\My_Study.exe
```

## 说明

- 本仓库用于个人学习记录，不追求工程级完整性
- 代码是学习过程的真实记录，后续章节会按同样结构继续补充

## 许可

本项目基于 [GPL-3.0](LICENSE) 发布。
