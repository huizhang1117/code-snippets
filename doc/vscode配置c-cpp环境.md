### VScode配置C/C++环境

配置时的软件版本：

vscode-1.68.1

vscode-plugin
- [c/c++ v1.10.7-github](https://github.com/microsoft/vscode-cpptools/releases) [c/c++ v1.10.7-marketplace](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
- [C/C++ Extension Pack v1.2.0](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)
- [Code Runner v0.11.8](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)

[MinGW-W64-x86_64-8.1.0-release-posix-seh-rt_v6-rev0.7z](https://sourceforge.net/projects/mingw-w64/files/) 下载的 x86_64-posix-seh


1. 解压mingw到d盘根目录，`D:\mingw64\bin` 加入到path
2. 在扩展中找到Code Runner,点击扩展设置,选上
    - Code-runner:Ignore Selection
    - Code-runner:Run In Terminal
    - Code-runner:Save File Before Run
3. 写个c的helloworld测试，在运行前要点击运行键右侧的下箭头，选择Run Code

![vscode-run code](img/vscode%E8%BF%90%E8%A1%8Cc%E4%BB%A3%E7%A0%81.png)

