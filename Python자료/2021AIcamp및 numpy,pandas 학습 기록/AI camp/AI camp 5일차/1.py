from flask import Flask
from flask_ngrok import run_with_ngrok
app = Flask(__name__)
run_with_ngrok(app)

@app.route('/')
def home():
    return '<h1>Flask rocks</h1>'
@app.route('/greet')
def greet():
    return '<h1>Hello World!</h1>'
app.run()