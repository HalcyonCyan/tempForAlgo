import sys
import string
from pathlib import Path
import shutil



#自己使用的，一键开启比赛
#设置 x 题目数量， 目标目录路径， 然后运行即可



def main():
    print("程序开始执行...")
    
    # ========== 在这里直接设置参数 ==========
    x = 6  # 要创建的文件数量 (1-20)
    dest_path_str = r""  # 目标目录路径
    # ======================================
    
    print(f"参数设置: x = {x}, 目标路径 = '{dest_path_str}'")

    # 验证x参数
    try:
        x = int(x)
    except ValueError:
        print("错误: x 必须是整数（1-20）。")
        sys.exit(1)

    if not (1 <= x <= 20):
        print(f"错误: x ({x}) 必须在 1 到 20 之间。")
        sys.exit(1)

    try:
        dest_dir = Path(dest_path_str).resolve()
        print(f"解析后目标路径: {dest_dir}")
    except Exception as e:
        print(f"解析目标路径时出错: {e}")
        sys.exit(1)

    # 模板文件路径 - 修改这里为你的实际模板路径
    template_path = Path(r"C:\Users\10169\Desktop\cpp_novice\luogu\cph.cpp")
    print(f"模板文件路径: {template_path}")
    
    # 检查模板文件是否存在
    if not template_path.exists():
        print(f"错误: 模板文件不存在: {template_path}")
        print("请确认模板文件是否在指定位置")
        print("当前工作目录:", Path.cwd())
        sys.exit(1)
    
    if not template_path.is_file():
        print(f"错误: 模板路径不是文件: {template_path}")
        sys.exit(1)

    print(f"模板文件大小: {template_path.stat().st_size} 字节")

    try:
        # 创建目标目录
        dest_dir.mkdir(parents=True, exist_ok=True)
        print(f"目标目录已创建/存在: {dest_dir}")
    except Exception as e:
        print(f"创建目录时出错: {e}")
        sys.exit(1)

    # 生成 A.cpp, B.cpp, ... 对应数量为 x
    letters = string.ascii_uppercase[:x]
    print(f"将创建 {len(letters)} 个文件: {letters}")

    created_count = 0
    for ch in letters:
        target_file = dest_dir / f"{ch}.cpp"
        print(f"处理文件: {target_file}")

        # 检查文件是否已存在
        if target_file.exists():
            print(f"警告: {target_file} 已存在，跳过")
            continue

        try:
            # 复制模板内容到目标文件
            shutil.copyfile(template_path, target_file)
            print(f"已创建: {target_file}")
            created_count += 1
        except Exception as e:
            print(f"创建文件 {target_file} 时出错: {e}")
            continue

    print(f"完成: 成功创建了 {created_count} 个文件")

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"程序运行出错: {e}")
        import traceback
        traceback.print_exc()