###FUSE(Filesystem in Userspace)
- OS와 같은 권한이 아닌 사용자가 커널 코드를 편집하지 않고도 자신의 파일 시스템을 만들 수 있음
- Userspace와 Kernel interface를 연결

###VFS(Virtual File System)
- 실제 파일 시스템 위의 추상계층
- 클라이언트 응용 프로그램이 여러 파일 시스템에 같은 방법으로 접근가능
- read/write과 같은 system call이 발생할 때, 해당 파일이 속한 file system에 맞는 동작이 수행되도록 mapping해주는 것(위키백과)
