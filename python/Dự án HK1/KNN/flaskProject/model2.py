import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import MinMaxScaler
from sklearn.neighbors import KNeighborsClassifier

class hear_predict:
    def __init__(self):
        self.df = pd.read_csv('heart.csv')
        self.scaler = MinMaxScaler()

    def PreprocessingData(self):
        df = self.df
        a = pd.get_dummies(df['cp'], prefix = "cp")
        b = pd.get_dummies(df['thal'], prefix = "thal")
        c = pd.get_dummies(df['slope'], prefix = "slope")
        frames = [df, a, b, c]
        df = pd.concat(frames, axis = 1)
        df = df.drop(columns = ['cp', 'thal', 'slope'])
        self.y = df.target.values
        x_data = df.drop(['target'], axis = 1)
        x = self.scaler.fit_transform(x_data)
        x = pd.DataFrame(x, 
            columns=['age','sex','trestbps','chol','fbs','restecg','thalach','exang','oldpeak','ca','cp_0','cp_1','cp_2','cp_3','thal_0','thal_1','thal_2','thal_3','slope_0','slope_1','slope_2'])
        self.x = x
    
    def TrainModel(self):
        x_train, x_test, y_train, y_test = train_test_split(self.x,self.y,test_size = 0.2,random_state=0)
        x_train = x_train.T
        y_train = y_train.T
        x_test = x_test.T
        y_test = y_test.T
        self.knn = KNeighborsClassifier(n_neighbors = 2)
        self.knn.fit(x_train.T,y_train.T)
    
    def scale(self, input):
        colunms = ['age','sex','trestbps','chol','fbs','restecg','thalach','exang','oldpeak','ca','cp_0','cp_1','cp_2','cp_3','thal_0','thal_1','thal_2','thal_3','slope_0','slope_1','slope_2']
        a = pd.get_dummies(input['cp'], prefix = "cp")
        b = pd.get_dummies(input['thal'], prefix = "thal")
        c = pd.get_dummies(input['slope'], prefix = "slope")
        frames = [input, a, b, c]
        l = ['cp_0','cp_1','cp_2','cp_3','thal_0', 'thal_1', 'thal_2', 'thal_3','slope_0', 'slope_1', 'slope_2']
        p_input = {}
        for colunm in range(0,10):
            p_input[colunms[colunm]] = input[colunms[colunm]][0]

        for i in range(0,4):
            p_input[l[i]] = False
            if i - 0 == input['cp'][0]:
                p_input[l[i]] = True

        for i in range(4,8):
            p_input[l[i]] = False
            if i - 4 == input['thal'][0]:
                p_input[l[i]] = True

        for i in range(8,11):
            p_input[l[i]] = False
            if i - 8 == input['slope'][0]:
                p_input[l[i]] = True
        for colunm in colunms:
            p_input[colunm] = [p_input[colunm]]
        p_input = pd.DataFrame(data=p_input)
        input = self.scaler.transform(p_input)
        return(pd.DataFrame(input, columns=['age','sex','trestbps','chol','fbs','restecg','thalach','exang','oldpeak','ca','cp_0','cp_1','cp_2','cp_3','thal_0','thal_1','thal_2','thal_3','slope_0','slope_1','slope_2']))

    def predict(self, input):
        return self.knn.predict(input)
    
model = hear_predict()
model.PreprocessingData()
model.TrainModel()
p_input = model.scale(pd.DataFrame(
    data=[[52,1,0,125,212,0,1,168,0,1,2,2,3]],
    columns=['age','sex','cp','trestbps','chol','fbs','restecg','thalach','exang','oldpeak','slope','ca','thal']
))
print(p_input)
print(model.predict(p_input))