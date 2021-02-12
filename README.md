# 일반지침
- 놈 지키기. 보너스도
- 예기치 않은 종료 없어야 함(segmentation fault, bus error, double free 등)
- 힙 쓰면 해제 잘 하기. 누수 no
- 필요시 Makefile 제출. 리링크 no, -Wall -Wextra -Werror 사용
- Makefile에 $(NAME), all, clean, fclean, re 꼭 넣기
- 보너스 제출시 룰 bonus 넣기, 이름은 어쩌구_bonus.c/h
- libft 사용 가능시 꼭 libft 소스랑 libft의 Makefile 첨부.
- 할당된 깃에 내시오. 깃에 있는 것만 채점한다.

# 0 지나가는 공간
# 1 벽
# 2 아이템
# N,S,E,W 스폰지역
# 바닥 및 천장 텍스쳐 , 위아래 보기.

# image resolution/window size - R
# floor color - F
# ceilling color - C

# 구성 파일이 잘못 구성되었거나 (예 : 알 수없는 키, 이중 키 또는 잘못된 경로) 파일 이름이 .cub 확장자로 끝나지 않으면 프로그램이 오류를 반환하고 제대로 종료됩니다.
# ESC 키 (또는 Q)를 누르면 프로그램이 창을 닫고 깨끗하게 종료합니다.
# 프로그램은 4 개의 화살표 키 (또는 WASD / ZQSD)를 누를 때 플레이어의 이동 / 회전과 같은 시각적 결과를 창에 표시합니다.
# 플레이어의 시야는 왼쪽 화살표 (또는 A 또는 Q)를 누른 다음 오른쪽 화살표 (또는 D)를 누르면 플레이어의 머리가 움직이는 것처럼 왼쪽으로 회전 한 다음 오른쪽으로 회전합니다.
# 플레이어의 뷰는 위쪽 화살표 (또는 W 또는 Z)를 누른 다음 아래쪽 화살표 (또는 S)를 누르면 직선으로 앞뒤로 이동합니다.


# OpenGL?
오픈 그래픽 라이브러리은 1992년 실리콘 그래픽스사에서 만든 2차원 및 3차원 그래픽스 표준 API 규격으로, 프로그래밍 언어 간 플랫폼 간의 교차 응용 프로그래밍을 지원한다.

# AppKit?
일반적으로 AppKit이라고 하는 Application Kit는 NeXTSTEP의 그래픽 사용자 인터페이스 툴킷 입니다. Foundation 및 Display PostScript 와 함께 OpenStep API 사양의 핵심 부분 중 하나입니다. macOS와 함께 번들로 제공되는 대부분의 응용 프로그램 (예 : Finder , TextEdit , Calendar 및 Preview)은 AppKit을 사용하여 사용자 인터페이스를 제공합니다.

# int mlx_loop(void *mlx_ptr);
프로그램을 종료 시키지 않고 계속돌아가게 한다.

# int mlx_loop_hook(void *mlx_ptr, int (*funct_ptr)(), void *param);
아무 입력이 없을 때 loop를 돌리는 함수, 현재위치를 기반으로 화면을 매번 새로 그린다.

# int mlx_hook(void *win_ptr, int x_event, int x_mask, int (*funct)(), void *param);
모든 입력을 처리하는 x_event값에 따라 key_press, key_release, mouse클릭, 창닫기버튼 등 입력을 받을 수있음.

# Mac key code
출처:https://eastmanreference.com/complete-list-of-applescript-key-codes

# sprite?
- 하드웨어에 의해 배경과 함께 합성된 고정된 크기의 객체
- 다양한 이미지, 텍스트 등을 우선순위를 두고 합성하는 기술

# 공부순서
- https://42born2code.slack.com/archives/CU6MTFBNH/p1601382410192500
- https://github.com/365kim/raycasting_tutorial

# Minilibx 라이브러리
- https://yeosong1.github.io/miniRT%EB%9D%BC%EC%9D%B4%EB%B8%8C%EB%9F%AC%EB%A6%AC

