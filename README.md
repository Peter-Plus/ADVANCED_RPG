# ADVANCED RPG

一个用于学习 Unreal Engine C++ 与动作角色扮演游戏开发的个人项目。

## 项目概况

- Unreal Engine 5.3
- C++ Runtime 模块：`Warrior`
- Enhanced Input 输入系统
- Gameplay Tags / Gameplay Ability System 相关学习代码
- 角色、动画实例、武器、数据资产和基础游戏模式代码

## 仓库范围

本仓库只对项目的 C++ 核心代码进行版本控制，主要包含：

- `Source/`：C++ 源码、头文件及 Unreal Build Tool 配置
- `Warrior.uproject`：引擎版本、模块与插件描述

为避免上传体积较大的学习素材和本地生成文件，以下内容不会纳入仓库：

- `Content/` 中的蓝图、美术、动画、地图等资源
- `Config/` 中的本地项目配置
- `Binaries/`、`Intermediate/`、`Saved/`、`DerivedDataCache/`
- Visual Studio、Rider 等 IDE 生成文件

因此，单独克隆本仓库不能还原完整可运行项目；它主要用于保存和回顾 C++ 学习代码。

## 源码结构

```text
Source/
├── Warrior.Target.cs
├── WarriorEditor.Target.cs
└── Warrior/
    ├── Public/
    │   ├── AbilitySystem/
    │   ├── AnimInstances/
    │   ├── Characters/
    │   ├── Components/
    │   ├── Controllers/
    │   ├── DataAssets/
    │   ├── GameModes/
    │   └── Items/
    └── Private/
```

## 说明

这是个人学习仓库，代码会随着学习进度持续调整，不作为生产项目或完整游戏发布版本使用。
