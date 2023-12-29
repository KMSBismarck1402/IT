import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import plotly.express as px
from sklearn.cluster import KMeans
import pickle
import streamlit as st
import os
from datetime import datetime
import squarify
import base64
st.set_page_config(
    page_title="Customer Segmentation"
)
# GUI setup
st.title("PHÂN KHÚC KHÁCH HÀNG")
st.header("Customer Segmentation", divider='rainbow')

menu = ["Tìm hiểu về doanh nghiệp", "Tìm hiểu dữ liệu","Chuẩn bị dữ liệu","Mô hình hóa và đánh giá","Dự đoán"] # , "BigData: Spark"
choice = st.sidebar.selectbox('Menu', menu)

def load_data(uploaded_file):
    if uploaded_file is not None:
        st.sidebar.success("File đã được tải lên thành công!")
        df = pd.read_csv(uploaded_file, encoding='latin-1', sep='\s+', header=None, names=['Customer_id', 'day', 'Quantity', 'Sales'])
        df.to_csv("CDNOW_master_new.txt", index=False)
        df['day'] = pd.to_datetime(df['day'], format='%Y%m%d')
        st.session_state['df'] = df
        return df
    else:
        st.write("Hãy tải lên 1 file dữ liệu để tiếp tục.")
        return None

# Hàm để tạo liên kết tải xuống CSV
def csv_download_link(df, csv_file_name, download_link_text):
    csv_data = df.to_csv(index=True)
    b64 = base64.b64encode(csv_data.encode()).decode()
    href = f'<a href="data:file/csv;base64,{b64}" download="{csv_file_name}">{download_link_text}</a>'
    st.markdown(href, unsafe_allow_html=True)    
# Initializing session state variables
if 'df' not in st.session_state:
    st.session_state['df'] = None

if 'uploaded_file' not in st.session_state:
    st.session_state['uploaded_file'] = None

# Main Menu
if choice == 'Tìm hiểu về doanh nghiệp':
    st.subheader("Mục tiêu doanh nghiệp")
    st.write("""
    ###### Phân khúc khách hàng là một nhiệm vụ cơ bản trong tiếp thị và quản lý quan hệ khách hàng. Với những tiến bộ trong phân tích dữ liệu và học máy, giờ đây có thể nhóm khách hàng thành các phân khúc riêng biệt với độ chính xác cao, cho phép doanh nghiệp điều chỉnh chiến lược tiếp thị và dịch vụ của mình cho phù hợp với nhu cầu và sở thích riêng của từng phân khúc.

    ###### Thông qua việc phân khúc này, doanh nghiệp có thể đạt được:
    - **Cá nhân hóa**: Điều chỉnh các chiến lược tiếp thị để đáp ứng nhu cầu riêng biệt của từng phân khúc.
    - **Tối ưu hóa**: Phân bổ hiệu quả các nguồn lực tiếp thị.
    - **Insight**: Đạt được sự hiểu biết sâu sắc hơn về cơ sở khách hàng.
    - **Cam kết**: Tăng cường sự gắn kết và sự hài lòng của khách hàng.

    ###### => Vấn đề/Yêu cầu: Sử dụng kỹ thuật phân tích dữ liệu và học máy trong Python để thực hiện phân khúc khách hàng.
    """)
    st.image("Customer-Segmentation.png", caption="Customer Segmentation", use_column_width=True)

    
elif choice == 'Tìm hiểu dữ liệu':    

    # Liệt kê tất cả các file trong thư mục 'sample_data'
    sample_files = os.listdir('data')
    
    # Tạo một radio button để cho phép người dùng chọn giữa việc sử dụng file mẫu hoặc tải lên file mới
    data_source = st.sidebar.radio('Data source', ['Dùng file mẫu', 'Tải lên file mới'])
    
    if data_source == 'Dùng file mẫu':
        # Cho phép người dùng chọn một file từ danh sách
        selected_file = st.sidebar.selectbox('Chọn 1 file mẫu', sample_files)
        
        # Đọc file được chọn (bạn sẽ cần thêm logic để đọc file tại đây)
        file_path = os.path.join('data', selected_file)
        st.session_state['uploaded_file'] = open(file_path, 'r')
        load_data(st.session_state['uploaded_file'])

    else:
        # Cho phép người dùng tải lên một file mới
        st.session_state['uploaded_file'] = st.sidebar.file_uploader("Tải file lên", type=['txt'])
        
        if st.session_state['uploaded_file'] is not None:
            load_data(st.session_state['uploaded_file'])

    # st.session_state['uploaded_file'] = st.sidebar.file_uploader("Choose a file", type=['txt'])
    # load_data(st.session_state['uploaded_file'])
    
    if st.session_state['df'] is not None:
        st.write("### Tổng quan")
        st.write("Số hàng:", st.session_state['df'].shape[0])
        st.write("Số cột:", st.session_state['df'].shape[1])
        st.write("Năm hàng đầu tiên của dữ liệu:")
        st.write(st.session_state['df'].head())

elif choice == 'Chuẩn bị dữ liệu': 
    st.write("### Xử lí dữ liệu") 
    #Là một phần quan trọng trong quá trình chuẩn bị dữ liệu (data preparation). Nó là quá trình xử lý và cải thiện chất lượng của dữ liệu để làm cho nó thích hợp và chuẩn xác hơn cho các mục tiêu phân tích.

    if st.session_state['df'] is not None:
    #     #1. Xử lý các giá trị thiếu, null và trùng lặp
        # st.write("Số lượng giá trị thiếu:")
        # st.write(st.session_state['df'].isnull().sum())

        st.write("Số lượng giá trị null:")#null là một biểu diễn cho giá trị không xác định hoặc không tồn tại.
        st.write((st.session_state['df'] == 'NA').sum())

        st.write("Số lượng hàng trùng lặp:", st.session_state['df'].duplicated().sum())

        # Cung cấp các lựa chọn để xử lý giá trị thiếu, null và trùng lặp trong dữ liệu.
        if st.checkbox('Xóa những hàng có giá trị trùng lặp'):
            st.session_state['df'].drop_duplicates(inplace=True)
            st.write("Những hàng trùng lặp đã được xóa.")
        
        if st.checkbox('Xóa những hàng có giá trị null'):
            st.session_state['df'].replace('NA', pd.NA, inplace=True)
            st.session_state['df'].dropna(inplace=True)
            st.write("Những hàng có giá trị null đã được xóa.")

        # 2. Hiển thị số lượng các giá trị duy nhất trong mỗi cột
        st.write("Số lượng các giá trị duy nhất của mỗi cột: ")
        st.write(st.session_state['df'].nunique())

        # 3. Tạo đồ thị (plot) để thể hiện phân phối của dữ liệu trong các cột có giá trị số
        st.write("### Biểu đồ phân phối")
        for col in st.session_state['df'].select_dtypes(include=['number']).columns:
            st.write(f"#### {col}")
            fig, ax = plt.subplots()
            ax.set_ylabel('Số lần xuất hiện')
            st.session_state['df'][col].hist(ax=ax)
            st.pyplot(fig)

        # # 4. Display boxplots for numeric columns
        # st.write("### Boxplots for numeric columns")
        # for col in st.session_state['df'].select_dtypes(include=['number']).columns:
        #     st.write(f"#### {col}")
        #     fig, ax = plt.subplots()
        #     st.session_state['df'].boxplot(column=col, ax=ax)
        #     st.pyplot(fig)

        # Nhận xét tổng quan dữ liệu
        st.write("Khoảng thời gian giao dịch từ {} đến {}".format(st.session_state['df']['day'].min(), st.session_state['df']['day'].max()))
        st.write("{:,} giao dịch không có ID của khách hàng".format(st.session_state['df'][st.session_state['df'].Customer_id.isnull()].shape[0]))
        st.write("{:,} ID khách hàng (unique customer_id)".format(len(st.session_state['df'].Customer_id.unique())))

        # Đề cập đến quá trình áp dụng các biến đổi hoặc biện pháp xử lý dữ liệu mới vào tập dữ liệu hiện tại ['Customer_id', 'day', 'Quantity', 'Sales']
        st.write("### Biến đổi dữ liệu")
        # Nhóm dữ liệu thành các nhóm Customer_id và tổng các cột khác, trừ 'day' 
        user_grouped = st.session_state['df'].groupby('Customer_id').agg({'Quantity': 'sum', 'Sales': 'sum'})
        st.write("### Dữ liệu được nhóm theo người dùng")
        st.write(user_grouped.head())

        # Tạo một cột mới trong bảng dữ liệu để lưu trữ thông tin về tháng. 
        st.session_state['df']['month'] = st.session_state['df']['day'].values.astype('datetime64[M]')
        st.write("### Dữ liệu được thêm cột 'Tháng'")
        st.write(st.session_state['df'].head())

        # Vẽ đồ thị biểu diễn tổng lượng (số lượng) sản phẩm bán ra trong mỗi tháng. 
        st.write("### Tổng lượng sản phẩm được bán ra mỗi tháng")
        dfm = st.session_state['df'].groupby('month')['Quantity'].sum()
        st.line_chart(dfm)
        plt.xlabel('Số lần xuất hiện')

        # Vẽ đồ thị biểu diễn tổng doanh số bán hàng theo từng tháng. 
        st.write("### Tổng doanh số bán hàng mỗi tháng")
        dfpc = st.session_state['df'].groupby('month')['Sales'].sum()
        st.line_chart(dfpc)
        
        # ... (rest of your code, don't forget to modify scatter plots too)

        # st.write("### Scatter Plot: Sales vs Quantity for Individual Transactions")
        # fig, ax = plt.subplots()
        # ax.scatter(st.session_state['df']['Sales'], st.session_state['df']['Quantity'])
        # st.pyplot(fig)

        # st.write("### Scatter Plot: Sales vs Quantity for User Grouped Data")
        # fig, ax = plt.subplots()
        # ax.scatter(user_grouped['Sales'], user_grouped['Quantity'])
        # st.pyplot(fig)
    else:
        st.write("Không có dữ liệu khả dụng. Vui lòng tải lên một file trong phần 'Tìm hiểu dữ liệu'.")
    
    # User Feedback section
    st.write("### Feedback")
    user_feedback = st.text_area("Hãy để lại bình luận và đóng góp của bạn ở đây:", value='')

    if st.button("Submit"):
        # Store the feedback with timestamp in a DataFrame
        current_time = datetime.now()
        feedback_df = pd.DataFrame({
            'Time': [current_time],
            'Feedback': [user_feedback]
        })

        # Check if feedback file already exists
        if not os.path.isfile('feedback.csv'):
            feedback_df.to_csv('feedback.csv', index=False)
        else: # Append the new feedback without writing headers
            feedback_df.to_csv('feedback.csv', mode='a', header=False, index=False)

        st.success("Cảm ơn feedback của bạn <3")

    # Display the 5 most recent feedbacks
    if os.path.isfile('feedback.csv'):
        all_feedbacks = pd.read_csv('feedback.csv')
        all_feedbacks.sort_values('Time', ascending=False, inplace=True)
        st.write("### 5 Feedbacks gần đây nhất:")
        st.write(all_feedbacks.head(5))

elif choice == 'Mô hình hóa và đánh giá':
    st.write("### Mô hình hóa bằng thuật toán K-Means")
    if st.session_state['df'] is not None:
        # RFM Analysis (một kỹ thuật phân tích dữ liệu thường được sử dụng trong lĩnh vực quản lý quan hệ khách hàng (CRM) và tiếp thị)
        recent_date = st.session_state['df']['day'].max()

        # Calculate Recency, Frequency, and Monetary value for each customer
        df_RFM = st.session_state['df'].groupby('Customer_id').agg({
            'day': lambda x: (recent_date - x.max()).days, # Recency
            'Customer_id': 'count', # Frequency
            'Sales': 'sum' # Monetary
        }).rename(columns={'day': 'Recency', 'Customer_id': 'Frequency', 'Sales': 'Monetary'})

        # st.title('Phân Tích KMeans sử dụng Phương pháp Elbow')

        # # Xây dựng và hiển thị biểu đồ Elbow Method
        # sse = {}
        # for k in range(1, 20):
        #     kmeans = KMeans(n_clusters=k, random_state=42)
        #     kmeans.fit(df_RFM)
        #     sse[k] = kmeans.inertia_

        # fig, ax = plt.subplots()
        # ax.set_title('Phương pháp Elbow')
        # ax.set_xlabel('Số cụm (k)')
        # ax.set_ylabel('Tổng Bình phương các khoảng cách')
        # sns.pointplot(x=list(sse.keys()), y=list(sse.values()), ax=ax)
        # st.pyplot(fig)

        # Cho phép người dùng chọn số lượng cụm k 
        n_clusters = st.sidebar.number_input('Chọn số lượng cụm k từ 2 đến 20:', min_value=2, max_value=20, value=3, step=1, key="cluster_value")
        st.write(f'Bạn đã chọn phân thành {n_clusters} cụm.')

        # Áp dụng mô hình KMeans với số lượng cụm đã chọn
        model = KMeans(n_clusters=n_clusters, random_state=42)
        model.fit(df_RFM)

        df_sub = df_RFM.copy()
        df_sub['Cluster'] = model.labels_

        # Thống kê mô tả và thống kê theo từng cụm
        cluster_stats = df_sub.groupby('Cluster').agg({
            'Recency': 'mean',
            'Frequency': 'mean',
            'Monetary': ['mean', 'count']
        }).round(2)

        cluster_stats.columns = ['RecencyMean', 'FrequencyMean', 'MonetaryMean', 'Count']
        cluster_stats['Percent'] = (cluster_stats['Count'] / cluster_stats['Count'].sum() * 100).round(2)

        # Reset index để 'Cluster' trở thành một cột thông thường, thay vì index
        cluster_stats.reset_index(inplace=True)

        # Đổi tên các nhóm cụm để dễ đọc hơn
        cluster_stats['Cluster'] = 'Cụm ' + cluster_stats['Cluster'].astype('str')

        st.subheader('Thống kê theo từng Cụm')
        st.dataframe(cluster_stats)

        # Biểu đồ Scatter
        fig_scatter = px.scatter(
            cluster_stats,
            x='RecencyMean',
            y='MonetaryMean',
            size='FrequencyMean',
            color='Cluster',
            log_x=True,
            size_max=60
        )
        st.plotly_chart(fig_scatter, use_container_width=True)
        
        # Biểu đồ Tree Map
        # Thiết lập màu sắc cho từng cụm - bạn có thể thay đổi này theo ý của bạn
        colors_dict = {
            0: 'green',
            1: 'red',
            2: 'royalblue',
            3: 'orange',
            4: 'purple'
        }
        fig_treemap, ax_treemap = plt.subplots()  # Tạo đối tượng fig và ax riêng biệt cho biểu đồ Tree Map
        fig_treemap.set_size_inches(14, 10)

        squarify.plot(sizes=cluster_stats['Count'], 
                    label=[f'Cụm {i}\n{row.RecencyMean} ngày\n{row.FrequencyMean} đơn hàng\n{row.MonetaryMean} $\n{row.Count} khách hàng ({row.Percent}%)' 
                            for i, row in cluster_stats.iterrows()],
                    color=[colors_dict.get(cluster) for cluster in cluster_stats.index],
                    alpha=0.6,
                    text_kwargs={'fontsize':12, 'fontweight':'bold'})

        ax_treemap.set_title("Phân Khúc Khách Hàng", fontsize=26, fontweight="bold")
        ax_treemap.axis('off')
        st.pyplot(fig_treemap)

        # Vẽ biểu đồ 3D scatter plot
        fig_3d = px.scatter_3d(
            cluster_stats,
            x='RecencyMean',
            y='FrequencyMean',
            z='MonetaryMean',
            color='Cluster',
            size='Count',
            labels={'RecencyMean': 'Recency', 'FrequencyMean': 'Frequency', 'MonetaryMean': 'Monetary'}
        )

        st.plotly_chart(fig_3d, use_container_width=True)

        # Thêm nút để xuất mô hình
        if st.button('Xuất Mô Hình'):
            # Lưu mô hình vào một tập tin .pkl
            with open('kmeans_model.pkl', 'wb') as f:
                pickle.dump((model, cluster_stats), f)
            
            st.session_state.model_exported = True
            st.write('Mô hình (kmeans_model.pkl) đã được xuất thành công!')

        # User Feedback section
        st.write("### Feedback")
        user_feedback = st.text_area("Hãy để lại bình luận và đóng góp của bạn ở đây:", value='')

        if st.button("Submit"):
            # Store the feedback with timestamp in a DataFrame
            current_time = datetime.now()
            feedback_df = pd.DataFrame({
                'Time': [current_time],
                'Feedback': [user_feedback]
            })

            # Check if feedback file already exists
            if not os.path.isfile('feedback.csv'):
                feedback_df.to_csv('feedback.csv', index=False)
            else: # Append the new feedback without writing headers
                feedback_df.to_csv('feedback.csv', mode='a', header=False, index=False)

            st.success("Cảm ơn feedback của bạn <3")

        # Display the 5 most recent feedbacks
        if os.path.isfile('feedback.csv'):
            all_feedbacks = pd.read_csv('feedback.csv')
            all_feedbacks.sort_values('Time', ascending=False, inplace=True)
            st.write("### 5 Feedbacks gần đây nhất:")
            st.write(all_feedbacks.head(5))

    else:
        st.write("Không có dữ liệu khả dụng. Vui lòng tải lên một file trong phần 'Tìm hiểu dữ liệu'.")

elif choice == 'Dự đoán':
    
    if 'model_exported' in st.session_state and st.session_state.model_exported:
        # Tải lại mô hình và cluster_stats
        with open('kmeans_model.pkl', 'rb') as f:
            model, cluster_stats = pickle.load(f)

        st.subheader('Thống kê theo từng Cụm')
        st.dataframe(cluster_stats)
        
        # Phần mới thêm để nhận dữ liệu từ người dùng và dự đoán
        st.subheader("Dự đoán Cụm cho một Khách hàng mới")
                
        # Nhận dữ liệu từ người dùng
        customer_name = st.text_input('Tên Khách hàng:')
        recent_date = st.date_input('Ngày mua hàng gần nhất:')
        quantity = st.number_input('Số lượng:', min_value=0)
        monetary = st.number_input('Số tiền:', min_value=0.0)
        
        if 'df_new' not in st.session_state:
            st.session_state['df_new'] = pd.DataFrame(columns=['Customer_id', 'day', 'Quantity', 'Sales'])

        if st.button("Add"):
            new_data = pd.DataFrame({'Customer_id': [customer_name], 'day': [recent_date], 'Quantity': [quantity], 'Sales': [monetary]})
            if 'df_new' not in st.session_state:
                st.session_state['df_new'] = new_data
            else:
                st.session_state['df_new'] = pd.concat([st.session_state['df_new'], new_data], ignore_index=True)
            
        st.write("Dữ liệu đã thêm:")
        st.dataframe(st.session_state['df_new'])  # Hiển thị DataFrame sau khi người dùng nhấn "Add"

        # Khi người dùng nhấn nút "Dự đoán", tiến hành dự đoán cụm
        if st.button("Dự đoán"):
            # Tính toán giá trị Recency, Frequency, và Monetary
            recent_date = pd.Timestamp.now().date()  # Cập nhật ngày hiện tại
            df_RFM = st.session_state['df_new'].groupby('Customer_id').agg({
                'day': lambda x: (recent_date - x.max()).days,  # Recency
                'Customer_id': 'count',  # Frequency
                'Sales': 'sum'  # Monetary
            }).rename(columns={'day': 'Recency', 'Customer_id': 'Frequency', 'Sales': 'Monetary'})

            # Dự đoán cụm sử dụng mô hình đã huấn luyện
            cluster_pred = model.predict(df_RFM)
            
            # Thêm cột dự đoán vào df_RFM
            df_RFM['Cluster'] = cluster_pred

            # Hiển thị DataFrame kết quả
            st.write("Kết quả dự đoán:")
            st.dataframe(df_RFM)
            
            # Cho phép người dùng tải xuống kết quả dưới dạng CSV
            csv_download_link(df_RFM, 'RFM_prediction_results.csv', 'Tải xuống kết quả dự đoán')
        
    else:
        st.write("Bạn phải xuất mô hình trước khi tiến hành dự đoán.")

    # User Feedback section
    st.write("### Feedback")
    user_feedback = st.text_area("Hãy để lại bình luận và đóng góp của bạn ở đây:", value='')

    if st.button("Submit"):
        # Store the feedback with timestamp in a DataFrame
        current_time = datetime.now()
        feedback_df = pd.DataFrame({
            'Time': [current_time],
            'Feedback': [user_feedback]
        })

        # Check if feedback file already exists
        if not os.path.isfile('feedback.csv'):
            feedback_df.to_csv('feedback.csv', index=False)
        else: # Append the new feedback without writing headers
            feedback_df.to_csv('feedback.csv', mode='a', header=False, index=False)

        st.success("Cảm ơn feedback của bạn <3")
    # Display the 5 most recent feedbacks
        if os.path.isfile('feedback.csv'):
            all_feedbacks = pd.read_csv('feedback.csv')
            all_feedbacks.sort_values('Time', ascending=False, inplace=True)
            st.write("### 5 Feedbacks gần đây nhất:")
            st.write(all_feedbacks.head(5))
