//#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

#define star_full "■"
#define star_empty "□"
#define star_line 10
#define star_bow 20

//数据处理 
void ProcessData(void);
//主界面构建 
void BuildInterface(void);
//主选择界面
void SelectInterface(void);
//主界面输出
void MainInterface(void);
//准备阶段
void PreStage(void);
//输出阶段
void OutputStage(void);
//输入阶段
void InputStage(void);
//判定阶段
void DecisionStage(void);
//尾处理
void TailStage(void);
//中断界面
void IntInterface(void);
//结算界面
void EndInterface(void);
//文本存储阶段
void TextStorage(void);

//启动选项
void start(void);
//退出选项
void quit(void);
