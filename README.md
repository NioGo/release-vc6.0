# release-vc6.0

VC6.0工程在编译时由于设置问题有时不会生成release版本，只有debug版本。

解决方法为：

选择【工程——设置，将Setting for后面的选项改为Win32 Release】。然后重新编译。

如果用此方法仍然没有生成release，而且打开设置时，依然是Win32 Debug，
这时，在VC6.0的工具栏上点击右键，选择Build，同时去掉Build MiniBar,这时
会出现debug的快捷工具栏，在工具栏上选择Win32 Release，再重新编译，就会生
成Release的版本了
