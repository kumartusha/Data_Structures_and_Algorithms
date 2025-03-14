#  Here we need to create the Basic Flask Application.
from flask import Flask, render_template, redirect, request, json, jsonify

# It is the entry point for the Flask App.
app = Flask(__name__)


# Here we created the Different Routes for our Flask Application.
@app.route("/", methods=["GET"])
def first():
    return render_template("index.html")


@app.route("/index", methods=["GET"])
def second():
    return "Hello Index is Here"


#  Variable Rule
@app.route("/success/<int:score>")
def success(score):
    return "The person has passed and the score  is :" + str(score)


@app.route("/form", methods=["get", "post"])
def form():
    if request.method == "get":
        return render_template("form.html")
    else:
        maths = float(request.form["maths"])
        science = float(request.form["science"])
        history = float(request.form["history"])

        average_marks = (maths + science + history) / 3

        return render_template("form.html", score=average_marks)


# Here we created the Host or the Port name.
if __name__ == "__main__":
    app.run(debug=True, port=8000)
