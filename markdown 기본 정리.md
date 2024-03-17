이 글은 아래 링크한 글을 참고하여 작성하였습니다.<br>
[참조] : https://www.heropy.dev/p/B74sNE "마크다운 사용법 총정리"

<details><summary>1. 제목</summary>
<p>

```md
# 제목1
## 제목2
### 제목3
#### 제목4
##### 제목5
###### 제목6
```

# 제목1
## 제목2
### 제목3
#### 제목4
##### 제목5
###### 제목6


```md
제목 1
===
제목 2
---
```
제목 1
===
제목 2
---

</p>
</details>

<details><summary>2. 강조</summary>
<p>

```md
*이탤릭체1_별 기호 사용(Asterisks)* 
_이탤릭체2_언더바 기호 사용(Underscore)_
```
*이탤릭체1_별 기호 사용(Asterisks)*   
_이탤릭체2_언더바 기호 사용(Underscore)_

```md
두껍게는 이탤릭체 기호(*, _)를 2번씩 사용
__*이텔릭체*와 두껍게__ 
```
두껍게는 이탤릭체 기호(*, _)를 2번씩 사용   
__*이텔릭체*와 두껍게__ 
```md
취소선은 ~~물결 기호(tilde)~~ 사용
<u>밑줄</u>은 마크다운에서 지원하지 않기에, 직접 `<u></u>` 태그 사용
```
취소선은 ~~물결 기호(tilde)~~ 사용   
<u>밑줄</u>은 마크다운에서 지원하지 않기에, 직접 `<u></u>` 태그 사용
</p>
</details>

<details><summary>3. 줄바꿈</summary>
<p>

```md
줄바꿈을 하고 싶다면 원래 엔터를 쳐야하는 곳에   
스페이스바 3번!
```
줄바꿈을 하고 싶다면 원래 엔터를 쳐야하는 곳에   
스페이스바 3번

```md
아니면 <br> 태그 사용! 원하는 걸로 골라서 <br><br> 사용하세용
```
아니면 <br> 태그 사용! 원하는 걸로 골라서 <br><br> 사용하세용

</p></details>

<details><summary>4. 링크 연결</summary>
<p>

```md
[이름](링크)
[이름](링크 "설명")
[이름][참조]

[참조]: 링크
[참조]: 링크 "설명"
```
```md
[GOOGLE](https://google.com)

[NAVER](https://naver.com "링크 설명(title)을 작성하세요.")

[상대적 참조](../users/login)

[Dribbble][Dribbble Link]

[GitHub][1]

문서 안에서 [참조 링크]를 그대로 사용할 수도 있습니다.
다음과 같이 문서 내 일반 URL이나 꺾쇠 괄호(`< >`, Angle Brackets)안의 URL은 자동으로 링크를 사용합니다.

구글 홈페이지: https://google.com
네이버 홈페이지: <https://naver.com>

[Dribbble Link]: https://dribbble.com
[1]: https://github.com
[참조 링크]: https://naver.com "네이버로 이동합니다!"
```
[GOOGLE](https://google.com)

[NAVER](https://naver.com "링크 설명(title)을 작성하세요.")

[상대적 참조](../users/login)

[Dribbble][Dribbble Link]

[GitHub][1]

문서 안에서 [참조 링크]를 그대로 사용할 수도 있습니다.
다음과 같이 문서 내 일반 URL이나 꺾쇠 괄호(`< >`, Angle Brackets)안의 URL은 자동으로 링크를 사용합니다.

구글 홈페이지: https://google.com
네이버 홈페이지: <https://naver.com>

[Dribbble Link]: https://dribbble.com
[1]: https://github.com
[참조 링크]: https://naver.com "네이버로 이동합니다!"
</p></details>

<details><summary>5. 이미지 추가</summary>
<p> 

`<img>` 링크와 비슷하지만 앞에 `!`를 추가해야 한다!
```md
![대체텍스트](이미지주소)
![대체텍스트](이미지주소 "설명")
![대체텍스트][참조]

[참조]: 이미지주소
[참조]: 이미지주소 "설명"

<!--아래와 같이 하면 사진 크기 조절도 가능, html img 태그-->
<img width="1100" alt="image" src="https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/dc7f4df9-ee9c-44e0-8223-fac8246d4850">
```

이미지는 사진으로 보시는 것이 더 편할 겁니다! 
일단 깃허브의 Issues에 들어가주시고, 초록색의 `New issue`를 눌러주세요! 
<br></br>
<img width="1100" alt="image" src="https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/dc7f4df9-ee9c-44e0-8223-fac8246d4850">

Write 공간에 넣고 싶은 사진을 복사하여 붙여넣어주세요! (crtl+V)
<br></br>
![image](https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/e47ac7a2-17e7-4a41-ae5b-87c4e5de3999)

아래와 같이 링크가 뜨게 되는데, 이걸 깃허브 md 쓰던 곳에 그대로 가져다 붙이시면 됩니다! 
<br></br>
![image](https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/bfb6152c-582b-4b17-b7eb-cf23120b955a)

아래와 같이 뜰 수도 있어요! 사실 여기서 중요한 건 `링크`입니다. 링크만 있으면 `<img>` 태그를 이용하여 크기 조정을 한 사진을 첨부할 수도 있습니다. 
<br></br>
![image](https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/cf17ffd6-3249-4b4f-97a1-fb1711e77f27)

<details><summary> 위에서 설명용으로 들어간 사진 코드 </summary>
<p>

```md
이미지는 사진으로 보시는 것이 더 편할 겁니다! 
일단 깃허브의 Issues에 들어가주시고, 초록색의 `New issue`를 눌러주세요! 
<br></br>
<img width="1100" alt="image" src="https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/dc7f4df9-ee9c-44e0-8223-fac8246d4850">

Write 공간에 넣고 싶은 사진을 복사하여 붙여넣어주세요! (crtl+V)
<br></br>
![image](https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/e47ac7a2-17e7-4a41-ae5b-87c4e5de3999)

아래와 같이 링크가 뜨게 되는데, 이걸 깃허브 md 쓰던 곳에 그대로 가져다 붙이시면 됩니다! 
<br></br>
![image](https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/bfb6152c-582b-4b17-b7eb-cf23120b955a)

아래와 같이 뜰 수도 있어요! 사실 여기서 중요한 건 `링크`입니다. 링크만 있으면 `<img>` 태그를 이용하여 크기 조정을 한 사진을 첨부할 수도 있습니다. 
<br></br>
![image](https://github.com/sejongsmarcle/2024_Spring_SMARCLE_Snaegi_Study/assets/128327967/cf17ffd6-3249-4b4f-97a1-fb1711e77f27)
```
</p></details>


</p></details>

<details><summary>6. 코드 강조</summary>
<p>

`블럭코드`   

<code>\`</code> 이 기호는 키보드에서 물결표시 있는 부분에 있어요!   
이 기호를 3번 이상 써서 코드를 감싸주면 됩니다!

`````md
// ` 3번 사용
```언어이름
코드작성
```

// ` 4번 사용
````python
print("hello")
````
`````
````python
print("hello")
````
***

`인라인 코드`는 <code>\'</code> 1개로 감싸주면 됩니다!
```md
`인라인 코드입니당` 이런 식으로 `funtion`, `print` 사용가능해요
```
`인라인 코드입니당` 이러 식으로 `funtion`, `print` 사용가능해요

</p></details>

<details><summary> 7. 목록</summary>
<p>

`<ol>`, `<ul>`, `<li>` 태그로 변환되는 목록(list) 표현

```md
`-`로 시작하는 순서가 없는 목록으로 구분합니다.

```markdown
1. 순서가 있는 항목
1. 순서가 있는 항목
    1. 순서가 없는 항목
    1. 순서가 없는 항목
1. 순서가 있는 항목
1. 순서가 있는 항목

- 순서가 없는 항목
- 순서가 없는 항목
    - 순서가 없는 항목
    - 순서가 없는 항목
        - 순서가 없는 항목
        - 순서가 없는 항목
            - 순서가 없는 항목
            - 순서가 없는 항목
```
`-`로 시작하는 순서가 없는 목록으로 구분


1. 순서가 있는 항목
1. 순서가 있는 항목
    1. 순서가 없는 항목
    1. 순서가 없는 항목
1. 순서가 있는 항목
1. 순서가 있는 항목

- 순서가 없는 항목
- 순서가 없는 항목
    - 순서가 없는 항목
    - 순서가 없는 항목
        - 순서가 없는 항목
        - 순서가 없는 항목
            - 순서가 없는 항목
            - 순서가 없는 항목
        


</p></details>

<details><summary> 8. 표</summary>
<p>

`<table>` 태그로 표현되는 표 <br>
테이블 헤더를 구분하기 위해, 3개 이상의 -(hyphen/dash) 기호를 사용   
테이블 헤더를 구분하며 :(Colons) 기호를 추가해 셀(열/칸) 안에 내용을 정렬 가능

- `---` 또는 `:---` 좌측 정렬
- `:---:` 가운데 정렬
- `---:` 우측 정렬

*가장 좌측과 가장 우측에 있는 |(vertical bar) 기호는 생략 가능!<br>(플랫폼에 따라 생략 불가한 경우도 있으니 주의)*
```md
| 헤더 | 헤더 | 헤더 |
|---|---|---|
| 셀 | 셀 | 셀 |
| 셀 | 셀 | 셀 |

헤더 | 헤더 | 헤더
---|---|---
셀 | 셀 | 셀
셀 | 셀 | 셀
```
| 헤더 | 헤더 | 헤더 |
|---|---|---|
| 셀 | 셀 | 셀 |
| 셀 | 셀 | 셀 |

헤더 | 헤더 | 헤더
---|---|---
셀 | 셀 | 셀
셀 | 셀 | 셀
```md
| 값 | 의미 | 기본값 |
|---|:---:|---:|
| `static` | 유형(기준) 없음 / 배치 불가능 | `static` |
| `relative` | 요소 자신을 기준으로 배치 |  |
| `absolute` | 위치 상 부모(조상)요소를 기준으로 배치 |  |
| `fixed` | 브라우저 창을 기준으로 배치 |  |
| `sticky` | 스크롤 영역 기준으로 배치 |  |

값 | 의미 | 기본값
---|:---:|---:
`static` | 유형(기준) 없음 / 배치 불가능 | `static`
`relative` | 요소 자신을 기준으로 배치 |
`absolute` | 위치 상 부모_(조상)요소를 기준으로 배치 |
`fixed` | 브라우저 창을 기준으로 배치 |
`sticky` | 스크롤 영역 기준으로 배치 |
```
| 값 | 의미 | 기본값 |
|---|:---:|---:|
| `static` | 유형(기준) 없음 / 배치 불가능 | `static` |
| `relative` | 요소 자신을 기준으로 배치 |  |
| `absolute` | 위치 상 부모(조상)요소를 기준으로 배치 |  |
| `fixed` | 브라우저 창을 기준으로 배치 |  |
| `sticky` | 스크롤 영역 기준으로 배치 |  |

값 | 의미 | 기본값
---|:---:|---:
`static` | 유형(기준) 없음 / 배치 불가능 | `static`
`relative` | 요소 자신을 기준으로 배치 |
`absolute` | 위치 상 부모_(조상)요소를 기준으로 배치 |
`fixed` | 브라우저 창을 기준으로 배치 |
`sticky` | 스크롤 영역 기준으로 배치 |

`\|` 테이블 안에서 버티컬바 기호 자체 출력
```md
| 값 | 의미 |
|---|---|
| 버티컬바 출력 | \| |
| 인라인 코드 강조 | `\|` |
```
| 값 | 의미 |
|---|---|
| 버티컬바 출력 | \| |
| 인라인 코드 강조 | `\|` |
</p></details>

<details><summary>9. 인용문</summary>
<p>

`<blockquote>` 태그로 변환되는 인용문 표현


````md
> 인용문 - 남의 말이나 글에서 직접 또는 간접으로 따온 문장.<br><br>
> _(네이버 국어 사전)_

SMARCLE! SMARCLE! SMARCLE!

> 인용문을 작성하세요!
>> 중첩된 인용문(nested blockquote)을 만들기 가능!
>>> 중중첩 인용문 1   
>>> 중중첩 인용문 2   
>>> 중중첩 인용문 3   
````

> 인용문 - 남의 말이나 글에서 직접 또는 간접으로 따온 문장.<br><br>
> _(네이버 국어 사전)_

SMARCLE! SMARCLE! SMARCLE!

> 인용문을 작성하세요!
>> 중첩된 인용문(nested blockquote)을 만들기 가능!
>>> 중중첩 인용문 1   
>>> 중중첩 인용문 2   
>>> 중중첩 인용문 3   
</p></details>

<details><summary>10. 수평선</summary>
<p>

`---` 또는 `***` 또는 `___` 이용해주기!
```md
---

***

___
```
---

***

___
</p></details>

<details><summary>11.유용한 일부 html 문법</summary>
<p>

```md
<details><summary>토글제목뾰삥뿅</summary>
<p>

내용 작성해주기!
</p></details>
```
***
<details><summary>토글제목뾰삥뿅</summary>
<p>

내용 작성해주기!
</p></details>

***

`<img>`태그 속성 강의   
src : 이미지 경로, 여기에 깃헙에서 나온 '링크' 적기   
alt : 이미지를 표시할 수 없을 때 출력할 내용   
width : 이미지의 가로 크기(가로 크기만 정하면 세로 크기는 원본 비율에 맞게 조정된다)    
height : 이미지의 세로 크기(세로 크기만 정하면 세로 크기는 원본 비율에 맞게 조정된다)   

</p></details>

<details><summary>12. markdown 주석 처리</summary>
<p>

`<!-- 여기에 주석 작성-->`, `[//]: #주석 작성` 기호 이용해주세요!

```md
-- 시작 --

<!-- 안녕하세요. -->
[//]: # (안녕하세요.)
[//]: # "안녕하세요."
[//]: # '안녕하세요.'

-- 종료 --
```
-- 시작 --

<!-- 안녕하세요. -->
[//]: # (안녕하세요.)
[//]: # "안녕하세요."
[//]: # '안녕하세요.'

-- 종료 --


</p></details>
