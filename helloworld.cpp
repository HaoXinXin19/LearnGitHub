
#include <stdio.h>                                      //#：标识符，表示引入头文件；include，引入头文件关键字
                                                        //stdio.h：系统标准输入、输出对应的头文件。给printf函数服务
                                                        //<>：使用系统库函数。      “”：使用用户自定义的库函数
int main01(void)                                          //int：函数返回值是整型数据，main：函数名，程序唯一的入口，必须有且只有一次，void：函数调用无需含参
{
	printf("hello world!\n");
	//C语言： system("pause");                          //暂停函数，阻止窗口闪退
	//system函数在C语言里负责调用系统命令eg：notebook，cmd，mspiant，calculater
	                                                    //组织窗口闪退：在项目上-----右键----属性----配置属性----连接器----系统----子系统----下拉框选择“控制台”
	return 0;                                           //返回当前函数调用，0：要跟main的返回值一一对应
	                                          
}



