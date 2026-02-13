CC := gcc
CFLAGS := -Wall -Wextra -Werror -I. 
LDLIBS := -lcs50

# 获取命令行参数（排除clean）
ARGS = $(filter-out clean,$(MAKECMDGOALS))

# 默认目标：编译指定的文件
default: $(ARGS)

# 单个文件编译：生成和源文件同名的可执行文件，不保留.o文件
%: %.c
	$(CC) $(CFLAGS) -c $< -o $@.o 
	$(CC) $@.o -o $@ $(LDLIBS)
	rm -f $@.o
	@echo "✓ 生成 $@"

# 忽略参数作为target的错误
%:
	@:

# 清理所有生成的可执行文件
clean:
	rm -f $(wildcard [0-9]*) $(wildcard *.o)
	@echo "✓ 清理完成"

.PHONY: clean default