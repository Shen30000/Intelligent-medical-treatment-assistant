## 智慧医养作业代码仓库
---
- [x] 练习使用Docker容器
- [x] 学习使用Docker制作镜像
- 制作镜像方法总结：<br>
1.将本地容器通过docker commit命令制作成image
```
$ docker commit [OPTIONS] CONTAINER [REPOSITORY[:TAG]]
```
OPTIONS:<br>
 -a : --author string ：作者<br>
 -c : --change list : 使用Dockfile来创建镜像<br>
 -m : --message string : 提交信息<br>
 -p : --pause : 在commit时，将容器暂停，默认为true<br>
示例：`$ docker commit -a "zkf" -m "make my image" a404c6c174a2 myrepo:latest`<br>
在输入镜像的仓库时注意用小写字母，否则会报错<br>
2.通过Dockerfile的方式制作镜像<br>
待学习