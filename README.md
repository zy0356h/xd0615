# xd0615
学习笔记  
1、命令的解释  
git clone命令：将项目克隆到本地；git add命令：将修改后文件保存在本地仓库；git commit -m命令：设置注释，方便追究责任；git push命令：将本地项目更新提交到github；ls命令：查看目录；cd命令：进入文件中；  
2、设置ssh-keygen  
复制并运行rm -rf ~/.ssh/*；运行ssh-keygen -t rsa -b 4096 -C "邮箱"，按回车三次；运行cat ~/.ssh/id_rsa.pub，完整的复制这一串代码；在Key里粘贴刚刚你复制的代码，点击Add SSH key；运行ssh -T git@github.com，输入yes回车，看到Hi FrankFang! You've successfully authenticated, but GitHub does not provide shell access.就成功了  
3、编辑器的使用  
vim编辑器：vim命令打开vim编辑器，输入i进入插入模式就可以进行编辑了，按一下esc键再输入:wq就可以退出这个编辑器；  
VS编辑器：直接用这个软件可以打开需要编辑的文件，使用ctrl+s就可以保存；  
建议  
希望老师讲授的内容可以更细致一些