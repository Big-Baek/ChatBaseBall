-전부 c++로 작성하고 싶었는데 인터넷을 뒤지는 것도 llm을 쓰는 것도 너무 오류가 많고 이해하기가 어려워 GameMode를 제외한 모든 클래스는 블루프린트로 작성했습니다.

-각 클라이언트별로 분리된 Strike, Ball 값을 줘야되는데 그 부분이 잘 안되어 두 클라이언트가 통일된 값을 사용합니다...

-Strike가 3 이상으로 넘어갈시 Ball, Strike 값이 초기화되고 승리한 유저의 닉네임을 언급합니다.

1. 위젯을 통해서 입력된 값을 컨트롤러로 보냅니다.
2. 컨트롤러에서 값을 서버로 보냅니다.
3. 서버에서는 난수를 생성함과 동시에 값과 비교하여 스트라이크, 볼 판정값을 다시 클라이언트로 브로드캐스트합니다.
4. 이 때 생성된 난수는 다시 생성되지 않습니다.
5. 클라이언트는 가지고 있는 스트라이크, 볼값에 서버에서 받은 값을 더합니다.
6. 볼이 3회이상이면 스트라이크 1회로 치환하고 스트라이크가 3회 이상이면 게임을 끝냅니다.
