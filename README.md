# proj-xv6-extend-vfs

### 项目描述
扩充xv6-riscv第5版，为其增加虚拟文件系统(VFS)功能。要求增加的代码**尽量少**，**测试充分**，系统运行稳定。

## 预期目标
同时支持xv6文件系统和ext2文件系统。

## 要求
- 操作系统在 qemu-riscv 模拟器中运行。
- 包含至少2各磁盘设备，一个用xv6文件系统，一个用ext2文件系统。
- 启动时用xv6文件系统(包含测试用例(放在目录"/tests"下))，启动后手动挂载ext2文件系统到目录"/mnt"。
- 提交所开发最终版与原xv6-riscv第5版之间的diff文件。
- 尽可能多地通过本赛题的测试用例。

### 当前项目相关的实现源码：
- [xv6-riscv-rev5](https://github.com/mit-pdos/xv6-riscv/releases/tag/xv6-riscv-rev5)：xv6-riscv第5版源码。
- [本赛题的测试用例](https://github.com/yanjun-wen/xv6-extend-vfs/tree/main/tests)：建设中，不要求全部通过，会动态扩充，参赛队伍可向负责老师申请新增测例。
- [xv6-静春山-中山大学](https://gitlab.eduxiji.net/educg-group-36002-2710490/T202510558995330-264)：参考项目：2025年操作系统全国赛内核赛道"静春山"团队的xv6项目。
- [xv6-RuOK-武汉大学](https://gitlab.eduxiji.net/educg-group-36002-2710490/T202510486995232-2402)：参考项目：2025年操作系统全国赛内核赛道"RuOK"团队的xv6项目。

### 所属赛道
全国大学生操作系统设计赛的“功能挑战”赛道。

### 参赛要求
请遵循“全国大学生操作系统设计赛”的章程和技术方案要求。

### 项目导师
文艳军 
- github: https://github.com/yanjun-wen
- email：yjwen@nudt.edu.cn 

### 难度
中等

### 特征
- 使用C语言实现。
- 目标平台是 Qemu 模拟器（RISC-V）。

### 分类
操作系统内核扩充。

### 文档
- [xv6-riscv-book](https://github.com/mit-pdos/xv6-riscv-book)
- [The RISC-V Instruction Set Manual](https://riscv.org/technical/specifications/)

### License
- GPL-3 license

