## 在Mac和Windows上安装VSCode并使用C++编程

---

### 1. 安装VSCode

#### 1.1 在Windows上安装VSCode

1. **下载VSCode**：

   访问[VSCode官方下载页面](https://code.visualstudio.com/download)，选择Windows版本下载。

2. **安装步骤**：

   - 运行下载的 `.exe` 文件。
   - 按照安装向导的提示进行操作，选择安装路径并点击“安装”。

3. **完成安装**：

   安装完成后，点击“启动”来打开VSCode。

#### 1.2 在Mac上安装VSCode

1. **下载VSCode**：

   访问[VSCode官方下载页面](https://code.visualstudio.com/download)，选择macOS版本下载。

2. **安装步骤**：

   - 下载完成后，找到 `.dmg` 文件并双击打开。
   - 将VSCode图标拖动到“应用程序”文件夹。

3. **完成安装**：

   打开“应用程序”文件夹，双击VSCode图标启动。

---

### 2. 配置C++开发环境

#### 2.1 安装C++编译器

##### Windows

- **MinGW-w64**：

  1. 下载[MinGW-w64](https://mingw-w64.org/doku.php#download)。
  2. 运行安装程序，选择安装路径，并安装“mingw64”工具链。
  3. 将安装路径的 `bin` 文件夹（例如 `C:\mingw64\bin`）添加到系统环境变量 `Path` 中。

##### Mac

- **Xcode Command Line Tools**：

  1. 打开终端并输入 `xcode-select --install`。
  2. 按照提示完成安装。

---

#### 2.2 安装VSCode C++扩展

1. 打开VSCode。
2. 点击左侧活动栏中的扩展图标（四个方块组成的图标）。
3. 搜索 “C++” 并安装由 Microsoft 提供的 “C/C++” 扩展。

---

### 3. 编写并运行第一个C++程序

#### 3.1 创建新文件夹和文件

1. 在桌面创建一个新文件夹，命名为 `my_cpp_project`。
2. 打开VSCode，选择“文件” > “打开文件夹”，选择刚刚创建的文件夹。
3. 在VSCode中，右键点击左侧文件资源管理器，选择“新建文件”，命名为 `main.cpp`。

#### 3.2 编写代码

在 `main.cpp` 中输入以下代码：

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

#### 3.3 配置编译任务

1. 按 `Ctrl+Shift+P`（Windows）或 `Cmd+Shift+P`（Mac）打开命令面板。
2. 输入并选择 “C++: Configure Default Build Task”。
3. 选择 “g++ build active file”。

#### 3.4 运行程序

1. 按 `Ctrl+Shift+B`（Windows）或 `Cmd+Shift+B`（Mac）编译代码。
2. 编译成功后，按 `Ctrl+F5`（Windows）或 `Cmd+F5`（Mac）运行程序。
3. 在终端中应看到输出 `Hello, World!`。


## 完成！

恭喜你，现在已经成功在Mac或Windows上安装并配置了VSCode进行C++开发。接下来，你可以开始编写更复杂的程序并探索更多VSCode的功能。