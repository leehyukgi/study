study
======
## Active Directory
- 네트워크 상으로 분산되어 있는 자원을 중앙 관리자가 통합하여 관리.
- 더 이상 자신의 pc에 모든 정보를 보관할 필요가 없음
- 자신의 아이디로 로그인만 하면 타인의 PC가 자신의 PC환경과 마찬가지로 변경
- 어디서든 전체 자원을 편리하게 사용 가능
  
  ### SSO(Single Sign-On; 통합 인증)
  - 한 번의 인증 과정으로 여러 컴퓨터 상의 자원을 이용 가능하게 하는 인증 기능

  ### Domain vs Workgroup
  - Domain : AD에서 계정을 발급받아서 사용
  - Workgroup : 개개의 컴퓨터에서 계정을 관리

## NFS(Network File System)
- 원격지 컴퓨터에 있는 파일을 내 컴퓨터 환경에서 이용할 수 있도록 해주는 클라이언트/서버 응용 프로그램
- 클라이언트/서버 모두 TCP/IP 프로토콜 필요

## Mount
- 하드웨어 장치를 액세스 하기 위해서 디렉토리에 연결해주는 것

## 삼바(Samba)
- linux와 windows간에 파일 및 프린터를 공유할 수 있게 해주는 프로그램
- SMB(Server Message Block)/CIFS(Common Internet File System) 프로토콜 이용
	
	### SMB(Server Message Block)
	- windows 시스템이 다른 시스템의 디스크나 프린터와 같은 자원을 공유할 수 있도록 만든 프로토콜

	### CIFS(Common Internet File System)
	- 네트워크를 위한 SMB의 확장버전, windows와 unix 환경을 동시 지원하는 인터넷 표준 파일 규약 프로토콜

