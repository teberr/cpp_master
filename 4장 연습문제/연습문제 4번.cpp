// Q. 이동 시맨틱이 등장한 가장 큰 원인은 무엇으로 볼 수 있는지 답하세요.

// A. 임시 객체 생성을 막을 수 없으므로 임시 객체가 생성되더라도 부하가 최소화 되도록 하기 위함. 굳이 사라질 임시 객체는 깊은 복사를 할 필요가 없으므로 얕은 복사를 통해 성능을 높임.