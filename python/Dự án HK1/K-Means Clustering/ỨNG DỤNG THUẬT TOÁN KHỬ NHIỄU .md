# **<p style="text-align: center;">ỨNG DỤNG PHÂN KHÚC KHÁCH HÀNG DỰA TRÊN LÝ THUYẾT K-MEANS CLUSTERING</p>** 
 
## **1. CƠ SỞ LÝ THUYẾT**
Phân khúc khách hàng (customer segmentation) là quá trình phân chia khách hàng dựa trên các đặc điểm chung như hành vi, thói quen mua sắm và sử dụng dịch vụ của họ,... giúp các công ty, doanh nghiệp có thể tiếp thị cho từng nhóm khách hàng một cách hiệu quả và phù hợp hơn. 

Nghiên cứu phân khúc khách hàng thông qua phương pháp phân cụm K-Means Clustering của một cơ sở kinh doanh. Bản chất của K-Means là dựa vào khoảng cách Euclid, thuật toán phân chia các cụm bằng cách so sánh khoảng cách giữa các điểm với tâm cụm và với các điểm khác, từ đó gom các điểm có khoảng cách gần nhau hay nói cách khác là có tính chất giống nhau vào cùng một cụm. Vì vậy, kết quả cuối cùng có được sẽ là các cụm với độ trùng lắp cực kỳ thấp, không giao nhau và tính chất giữa các điểm trong cùng một cụm là tương đồng với nhau. Đây chính là điểm mạnh của thuật toán K-Means giúp phân biệt rạch ròi giữa các cụm đồng nghĩa với việc các nhóm khách hàng sẽ được phân khúc một cách chính xác hơn và có sự khác biệt rõ ràng hơn.

Mục đích nghiên cứu để chia thành k cụm khách hàng mục tiêu, hứa hẹn sẽ giúp việc chăm sóc, tiếp thị khách hàng hiệu quả hơn; giúp đơn vị kinh doanh có những chiến lược marketing phù hợp giảm và tăng chi phí hiệu quả.


## **2. SẢN PHẨM**

### **2.1 Giao diện**
**HÌNH 1: GIỚI THIỆU CHUNG VỀ SẢN PHẨM**
![image](https://hackmd.io/_uploads/ry4GqPjHp.png)

**HÌNH 2: QUY TRÌNH HOẠT ĐỘNG**
![image](https://hackmd.io/_uploads/Sk9R_dirT.png)


**HÌNH 3: NHẬP INPUT**
![image](https://hackmd.io/_uploads/ryFgYujrp.png)


### **2.2 Tiêu chí hoạt động**
**2.2.1 Nhập và xử lí dữ liệu**
Lấy ví dụ minh họa như tập data dưới đây:
![image](https://hackmd.io/_uploads/By1EtOiS6.png)
Trong tập dữ liệu đã cho, chúng ta có ID của khách hàng, Ngày tháng năm sinh, số lượng hàng mua và doanh thu.

**2.2.2 Tìm số cụm tối ưu dựa vào Elbow**
Chúng ta sẽ cố gắng tìm số cụm tối ưu cho bài toán phân cụm của mình. Ở đây chúng ta sẽ sử dụng phương pháp khuỷu tay cho mục đích này.
Như chúng ta đã biết, phương pháp khuỷu tay sử dụng khái niệm WCSS để vẽ đồ thị bằng cách vẽ các giá trị WCSS trên trục Y và số cụm trên trục X. Vì vậy, chúng ta sẽ tính giá trị cho WCSS cho các giá trị k khác nhau trong khoảng nhất định
![image](https://hackmd.io/_uploads/SyTBhuoBp.png)
**2.2.3 Trực quan hóa**
![image](https://hackmd.io/_uploads/HJ7aUKiST.png)

### **2.3 Quá trình phát triển**
Quá trình phát triển dự án gồm các bước sau:
- Xây dựng ý tưởng dựa trên nhu cầu phân tích doanh số của khách hàng như thu nhập, tuổi tác, mô hình chi tiêu,... của doanh nghiệp. Từ đó nhận ra sự cần thiết của việc thống kê một cách tổng quan qua đồ thị và phân khúc khách hàng phù hợp để hỗ trợ tối đa các chính sách đối đãi khách hàng.
- Xác định dữ liệu nghiên cứu: nghiên cứu thu thập thông tin của khách hàng trên những tiêu chí sau: Customer_ID; Date of Birth; Quantity; Sale 
- Lựa chọn phương pháp nghiên cứu: sử dựng phương pháp phân cụm K-means.
- Chỉnh sửa và công bố thành quả.
## **3. CÁCH KHAI THÁC TỐI ƯU NGUỒN DỮ LIỆU CHO DOANH NGHIỆP** 
Lấy ví dụ như cụm khách hàng ở trên, ta có thể phân tích như sau: 
- Phương pháp RFM là một phương pháp tối ưu và cực kỳ phổ biến dựa vào đặc điểm hành vi tiêu dùng của khách hàng để phân khúc.
- Mỗi công ty có các tiêu chí phân khúc khác nhau theo từng loại, một số nhóm tiêu biểu và phổ biến:
    - Khách hàng thân thiết (Champion Customers): là đối tượng trung thành, có số lượng mua hàng và độ tin cậy đánh giá cao → Giữ chân khách hàng bằng mọi giá → Đẩy mạnh độ cá nhân hóa cao
    - Khách hàng tiềm năng (Potential Customers): là đối tượng đã có những trải nghiệm tích cực ở công ty, những số lượng mua hàng không thường xuyên → Nâng cao giá trị sau mỗi lần mua hàng 
    - Khách hàng mới (New customers): là đối tượng đặc biệt quan trọng → Đảm bảo trải nghiệm của nhóm đối tượng này phải tích cực và đáng nhớ 
    - Khách hàng cũ (Former Customers): là đối tượng có độ rời bỏ (Requency) cao, không nên chú ý quá nhiều. Đặc điểm của nhóm này là rất dễ dự đoán nhờ chỉ số R cao 

Từ RFM, công ty có thể tối ưu chi phí Marketing: nên nhớ, nhắm chọn chính xác mục tiêu → Cải thiện vòng đời của khách hàng → Nâng cao hiệu quả giới thiệu sản phẩm mới.
Tập trung vào 1 nhóm khách hàng nhỏ hơn sẽ giảm đáng kể chi phí, cho phép doanh nghiệp thực hiện nhiều thử nghiệm hơn và đưa ra quyết định trên dữ liệu.

## **4. KẾT LUẬN**

Thuật toán K-means là một trong những thuật toán đơn giản của phân cụm nhưng có hiệu quả cao và được ứng dụng rộng rãi. Với sự trợ giúp của việc phân cụm, chúng ta có thể hiểu các thông tin khách hàng tốt hơn nhiều, giúp bộ phận chăm sóc khách hàng đưa ra quyết định cẩn thận. Ngoài ra, với việc xác định khách hàng, các công ty có thể đưa ra các sản phẩm và dịch vụ nhằm mục tiêu khách hàng dựa trên một số thông số như thu nhập, tuổi tác, mô hình chi tiêu,...
<style>
    *{
        text-align: justify;text-justify: inter-word; }
    img{
        width:100%;
    }
    
</style>
