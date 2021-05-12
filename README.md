# Study-C-DataStructure
자료구조 학습 리포지토리
----------------------------   
## 01 자료구조의 이해   
### 1 자료구조의 개념   
- 컴퓨터 : 자료를 처리하는 장치   
∴ 자료를 효율적으로 처리할 수 있도록 **논리적인구조**로 설계 및 분석하여 프로그램에 사용   
- 자료 구조    
: 자료를 효율적으로 표현하고 저장하고 처리할 수 있도록 정리하는 개념   

- 문제 해결 과정   
(사람) 문제 정의 → 처리 방식 결정 → 알고리즘 작성 → 프로그램 작성 → (컴퓨터) 프로그램 번역 및 실행 → 실행 결과 → (사람) 문제 해답   
                  처리 대상 결정 → 자료 정의   
                  
- 자료 구조의 내용   
자료 구조 → 이론적 측면 → (그래프/집합/ 조합적 → 이산수학) → / 확률 이론 → 알고리즘 분석 →   
           검색/ 정렬 / (효율분석 → 공간/시간 복잡도)   
          → 실제적 측면 → 문자열/리스트/트리/그래프/파일 → 알고리즘 구현 → 응용 → 프로그래밍/파일 작성/메모리 관리/ 운영 체제   
         
```   
성공적인 시스템을 개발하려면 자료의 특성을 이해하고 분석하여 최적의 알고리즘을 개발하는 능력이 필요!   
```   

### 2 자료구조의 분류   
- 효율 적인 자료 구조 선택 : 저장 공간 용량과 실행 소요 시간 고려   

<img src="https://github.com/hyojin-park24/Study-C-DataStructure/blob/master/99A09A3F5AF417EB1A.png"/>    

```   
자료 구조 → 정렬   
         → 검색   
         → 단순 구조 (데이터 타입) → 정수/실수/문자/문자열   
         → 선형 구조 (자료 관계 1:1) → 순차 리스트 / (연결 리스트 → 단순/이중/원형) / 스택 / 큐 / 데크   
         → 비선형 구조 (1:다, 다:다) → (트리 → 일반/이진) / (그래프 → 방향/무방향)   
         → 파일 구조 → 순차 / 색인 / 직접   
         
 ```   
 
 - 단순 구조 : 자료 값 사용하기 위한 기본 형태 , 데이터 타입에 해당   
 - 선형 구조   
  - 순차 리스트 : 자료의 논리적인 순서와 기억 장소에 저장되는 물리적 순서가 일치하는 구조   
  - 연결 리스트 : 물리적인 순서와 상관없이 포인터를 사용하여 논리적인 순서대로 연결하는 구조   
  - 스택,큐,데크 : 자료의 삽입이나 삭제 위치에 대한 제한 조건이 있는 리스트   
- 비선형 구조 : 계층 구조나 망 구조를 가짐   
- 파일 구조 : 서로 관련 있는 필드로 구성된 레코드 집합인 파일에 대한 자료구조, 보조기억 장치에 데이터가 실제로 기록되는 형태   


## 02 자료의 추상화    
- 추상화 작업    
  : 필수적이고 중요한 특징만 골라서 단순화 시키는 작업   
  
- 추상화 기본 개념   
  - 자료 (value) : 프로그램의 처리 대상이 되는 모든 것   
  - 연산 : 일을 처리하는 과정, 연산자 이용   
  - 자료형 : 연산자의 집합 <시스템 정의 자료형 / 사용자 정의 자료형>   
  - 자료형 정의 : 자료의 특성, 연산자, 연산자가 무엇을 수행하는지 논리적으로 정의해야함   

※ 추상화 = 무엇인지를 논리적으로 정의 (What)  
   구체화 = 어떻게 할지를 실제적으로 표현 (How)   
   
## 03 알고리즘의 이해   

Ex) 요리책 - 요리 재료 : 컴퓨터의 자료   
           - 재료를 다루는 방법 : 연산   
           - 요리법 (과정) : 알고리즘   

알고리즘   
: *문제를 해결하는 방법*을 추상화 하여 논리적인 기술을 하는 자료처리 방법   
- 입력 : 알고리즘을 수행하는 데 필요한 자료가 외부에서 입력되어야 함
- 출력 : 알고리즘을 수행하고 나면 결과를 하나 이상 출력
- 명확성 : 내용 순서를 나타내는 알고리즘의 명령어는 명확하게 명세   
- 유한성 : 반드시 종료   
- 효과성 : 모든 명령어는 기본적이며 실행 가능 형태   

## 04 알고리즘의 표현 방법   

- 가상코드(알고리즘 기술 언어)   
  - 가상코드 요소 : 기호, 자료형, 연산자   
  - 조건문 : if문, case문   
  - 반복문 : for문, while-do문, do-while문   
  - 함수문    

## 05 알고리즘의 성능 분석   

### 1 알고리즘 성능 분석 기준   
정확성 / 명확성 / 수행량 / 메모리 사용량 / 최적성   

### 2 알고리즘 성능 분석 방법   
- 공간 복잡도 (공간 측면)   
  - 알고리즘을 프로그램으로 실행하여 완료하는 데까지 필요한 총 저장 공간    
  - 고정공간
    
    - 고정적으로 필요한 저장 공간   
    - 프로그램 저장 공간과 변수 및 상수를 저장하는 공간   
  - 가변 공간   
    - 실행 과정에서 사용하는 자료와 변수를 저장하는 공간   
    - 함수를 실행하는 데 관련 있는 정보를 저장하는 공간   

- 시간 복잡도 (시간 측면)   
  - 알고리즘을 프로그램으로 실행하여 완료하는 데까지 소요되는 시간   
  - 컴파일 시간 + 실행 시간
  - 알고리즘을 서로 비교하기 위한 것   
  - 실행 빈도수를 계산함   

### 3 알고리즘 성능 분석 표기법   

- 시간 복잡도를 표기함   
- 빅 - 오 표기법 : 함수의 상한을 나타내기 위한 표기법(주로 사용됨)      
- 빅 - 오메가 표기법 : 함수의 하한을 나타내기 위한 표기법    
- 빅 - 세타 표기법 : 상한과 하한이 같은 정확한 차수를 표현하기 위한 표기법

