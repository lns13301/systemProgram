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
  
## 1008
- fcntl을 이용한 구조체 사용으로 lock하는 코드 연습
- lockf를 이용한 구조체를 사용하지 않는 unlock 코드 연습
- ext4, port 관련된 내용 학습

## 1015
- 파일 입출력 관련 학습
- 기존 방식과 다른 방식으로 파일 데이터 변경하는 법 학습

## 1029
- shell script로 다양한 명령어 제작 학습

## 1105
- sleep소스로 bg에서 kill 시키는 법 학습
- exit처리 시 static 함수로 숨겨진 작동을 하는 법을 학습

## 1112
 - fork로 부모프로세스 코드를 자식프로세스에 복사하고, 리턴 값이 어떻게 되는지 학습
 - wait를 통해 &status값을 받아 처리하는 방식 학습
 - waitpid 학습
 - init, systemD 발표함
 - 이외에 static, process, context switching, daemon 발표 진행

## 1119
  - 메모리 영역 학습
  - 동적 메모리, 정적 메모리, 전역변수 할당 방식 학습
