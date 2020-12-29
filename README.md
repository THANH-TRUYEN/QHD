# QHD
 Đề bài:1
     Bờm chơi trò chơi điện tử Lucky Luke đến màn phải điều khiển Lucky leo lên một cầu thang gồm n bậc.
     Các bậc thang được đánh số từ 1 đến n từ dưới lên trên. Lucky có thể đi lên một bậc thang, hoặc nhảy một bước lên hai bậc thang. Tuy nhiên một số bậc thang đã bị thủng do cũ kỹ và Lucky không thể bước chân lên được. Biết ban đầu, Lucky đứng ở bậc thang số 1 (bậc thang số 1 không bao giờ bị thủng).
     Chơi đến đây, Bờm chợt nảy ra câu hỏi: có bao nhiêu cách để Lucky leo hết được cầu thang? (nghĩa là leo đến bậc thang thứ n). Bờm muốn nhờ bạn trả lời câu hỏi này.
Dữ liệu:
•	Dòng đầu tiên: gồm 2 số nguyên n và k, là số bậc của cầu thang và số bậc thang bị hỏng (0 ≤ k < n ≤ 100000).
•	Dòng thứ hai: gồm k số nguyên cho biết chỉ số của các bậc thang bị hỏng theo thứ tự tăng dần.
Kết quả:
In ra phần dư của số cách Lucky leo hết cầu thang khi chia cho 14062008

Đề bài:2
Sau những giờ thi căng thẳng tại HDCity, BTC sắp xếp cho các thí sinh gặp nhau và tham gia các trò chơi giải trí. Trong nội dung bắn đĩa bay, trước khi vào vị trí bắn người chơi được BTC cho quan sát N đĩa, trên mỗi đĩa ghi một số nguyên dương tương ứng với điểm có được nếu người chơi bắn trúng. Súng để bắn đĩa là loại súng thể thao có hai nòng, tại mỗi thời điểm có thể nạp được tối đa 02 viên đạn, mỗi lần bóp cò chỉ bắn ra 01 viên đạn, sau khi bắn 01 viên đạn hoặc bắn 02 viên đạn vận người chơi có thể nạp lại đạn. Như vậy, khi hệ thống phóng đĩa hoạt động, người chơi chỉ bắn được tối đa hai đĩa gần nhau rồi phải thực hiện thao tác nạp đạn trước khi muốn bắn tiếp. Biết mỗi lần nạp đầy đạn thì ít nhất một đĩa đã bay qua tầm ngắm và vận động viên không thể bắn được những đĩa này.
Hãy viết chương trình giúp người chơi chọn một số đĩa để bắn sao cho tổng điểm thu được là lớn nhất. Giả sử tỷ lệ bắn trúng đĩa là 100%.
Dữ liệu:
•	Dòng đầu tiên chứa số nguyên dương N (1 ≤ N ≤ 106).
•	Dòng thứ 2 chứa N số nguyên a[i] là số điểm ghi trên các đĩa (0 < a[i] ≤ 109).
  Kết quả:
Đưa ra một số nguyên – số điểm lớn nhất tìm được.
Ví dụ 
Input
      4
     9 3 5 4
    Output
     18
   Giới hạn:
60% số tests ứng với 60% số điểm của bài có 1 ≤ N ≤ 100000 và 0 < a[i] ≤ 1000.

Đề bài:3
Palindrome là xâu ký tự mà nếu đọc nó từ trái sang phải cũng như từ phải sang trái ta được cùng một xâu. Một xâu ký tự bất kỳ luôn có thể biểu diễn như là một dãy các palindrome nếu như ta coi xâu chỉ gồm một ký tự luôn là một palindrome. Ví dụ: Xâu ‘bobseesanna’ có thể biểu diễn dưới dạng dãy các palindrome theo nhiều cách, chẳng hạn:
‘bobseesanna’ = ‘bob’ + ‘sees’ + ‘anna’ ‘bobseesanna’ = ‘bob’ + ‘s’ + ‘ee’ + ’s’ + ‘anna’
‘bobseesanna’ = ‘b’ +’o’ + ‘b’ + ‘sees’ + ‘a’ + ‘n’ + ‘n’ + ‘a’

Yêu cầu
Cho xâu ký tự s, cần tìm cách biểu diễn xâu s dưới dạng một dãy gồm số ít nhất các palindrome. Ví dụ: Cho s=‘bobseesanna’, do ta có ‘bobseesanna’ = ‘bob’ + ‘sees’ + ‘anna’ và không thể biểu diễn ‘bobseesanna’ bởi ít hơn là 3 palindrome nên biểu diễn này chính là biểu diễn cần tìm.
Input
Gồm một dòng chứa xâu ký tự s gồm không quá 255 ký tự.
Output
Gồm một dòng duy nhất ghi k là số lượng ít nhất các palindrome trong biểu diễn tìm được.

Đề bài:4
Cho 2 xâu a và xâu b, ta có các phép biến đổi trên xâu a như xóa kí tự, thêm kí tự, đổi kí tự. Tìm cách biến đổi xâu a thành xâu b sao cho số phép biển đổi cần dùng là ít nhất.
In ra số phép biến đổi ít nhất để biến xâu a thành xâu b.

Đề bài: 5
Cho 2 xâu a, b. Tìm độ dài xâu con chung dài nhất. Tương tự như bài toán biến đổi, ta cũng so sánh a[i] và b[j].
Gọi d[i][j] là độ dài của xâu con chung dài nhất của xâu a[0..i] và xâu b[0..j] Nếu a[i]=b[j] thì rõ ràng d[i][j]=d[i-1][j-1]+1.
Ngược lại, ta có 2 lựa chọn lấy độ dài xâu con chung dài nhất của xâu a[0..i-1] và xâu b[0..j] hoặc xâu a[0..i] và xâu b[0..j-1] tức là d[i-1][j] hoặc d[i][j-1].
Đề bài:6
Cho ma trận vuông a kích thước n×n (1≤n≤20). Các hàng được đánh số từ trên xuống dưới bắt đầu từ 1, các cột được đánh số từ phải sang trái bắt đầu từ 1. Ô nằm giao của hàng i và cột j có tọa độ [i, j]. Trên mỗi ô a[i, j] có chứa một số nguyên.
Yêu cầu: Hãy chọn trên ma trận n ô sao cho
-	Mỗi hàng có nhiều nhất một ô được chọn;
-	Mỗi cột có nhiều nhất một ô được chọn;
-	Tổng giá trị của các ô được chọn là lớn nhất.
      Input: cho trong tệp văn bản SELECT.INP:
-	Dòng 1: ghi số nguyên dương n;
-	N dòng tiếp theo, mỗi dòng ghi n số nguyên dương không vượt quá 109 thể hiện dòng thứ i của ma trận.
Output: ghi ra tệp văn bản SELECT.INP trên một dòng là tổng lớn nhất tìmđược.
Ví dụ:
Input	  Ouput
3
3 1 2
1 1 2
1 4 2	  9


