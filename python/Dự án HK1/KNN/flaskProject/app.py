import sqlite3
from flask import Flask, render_template, request, url_for, flash, redirect
from werkzeug.exceptions import abort
from model2 import hear_predict
import pandas as pd

model = hear_predict()
model.PreprocessingData()
model.TrainModel()

app = Flask(__name__)
app.config['SECRET_KEY'] = 'fdssak;lasflksl;kfsda!@((@)#(@))'

def get_db_connection():
    conn = sqlite3.connect('database.db')
    conn.row_factory = sqlite3.Row
    return conn

@app.route('/')
def index():
    return render_template('instruction.html')

@app.route('/cp')
def cp():
    return render_template('cp.html')

@app.route('/healthcare')
def healthcare():
    return render_template('healthcare.html')

@app.route('/congratulation')
def congratulation():
    return render_template('congratulation.html')

@app.route('/instruction')
def instruction():
    return render_template('instruction.html')

@app.route('/detail')
def detail():
    return render_template('detail.html')

@app.route('/create', methods=('GET', 'POST'))
def create():
    if request.method == 'POST':
        l = ['age','sex','cp','trestbps','chol','fbs','restecg','thalach','exang','oldpeak','slope','ca','thal']
        l1 = []
        for colunm in l:
            l1.append(request.form[colunm])
        print(l1)
        p_input = model.scale(pd.DataFrame(
            data=[l1],
            columns=['age','sex','cp','trestbps','chol','fbs','restecg','thalach','exang','oldpeak','slope','ca','thal']
        ))
        
        if(model.predict(p_input)[0]==0):
            return render_template('congratulation.html')
        else: return render_template('healthcare.html')

    return render_template('create.html')

def get_post(post_id):
    conn = get_db_connection()
    post = conn.execute('SELECT * FROM posts WHERE id = ?',
                        (post_id,)).fetchone()
    conn.close()
    if post is None:
        abort(404)
    return post

@app.route('/<int:post_id>')
def post(post_id):
    post = get_post(post_id)
    return render_template('post.html', post=post)