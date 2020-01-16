# NSURL-Parameters
一个NSURL解析参数的category

使用category重载了objectForKeyedSubscript方法，实现了其中括号调用

使用例子：

```objective-c
NSURL *nsUrl = [NSURL URLWithString:@"http://web.yy.com/actbar2/index.html?w=110&h=20"];
NSString *width = nsUrl[@"w"];
NSString *height = nsUrl[@"h"];
```

