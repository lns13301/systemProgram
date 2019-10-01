# systemProgram

## 0903
- OT

## 0910
- hello.c를 이용한 리눅스 코딩 연습

## 0917
- ddd
- gdb
- make
- fd
- 데이터 타입

## 0924
- mode_t 관련 실습
- 권한설정 실습
- oflag 관련 인자 학습
- 헤더파일 학습
  - fcntl.h
  - unistd.h
  - sys.types.h
  - sys.stat.h
- 순차접근
  - 찾을 때마다 제일 처음으로 가서 찾아가야 함 (tape)
  - lseek()을 이용하여 원하는 위치로 이동 가능(이동에 성공하면 현재 위치를 리턴하고 실패하면 -1을 리턴)
- 파일 위치 이동
  - lseek(fd, 100L, SEEK_SET); // 파일 시작에서 100바이트 위치로 이동
  - lseek(fd, 0L, SEEK_END); // 파일 끝으로 이동(appeend)
  - lseek(fd, n * sizeof(record), SEEK_SET); // n + 1번째 레코드 시작위치로
  - lseek(fd, -sizeof(record), SEKK_CUR); // 전 레코드 시작위치로
- RAM (랜덤 접근)
- 과제 교제 131p 4, 5번

## 1001
- blocking, non-blocking
- synchronize, Asynchronize
- inode
  - 디스크의 원리와 관련된 학습(Excel 이용)
