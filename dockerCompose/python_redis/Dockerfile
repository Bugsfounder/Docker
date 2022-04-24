# FROM python:3.4-alpine 
ARG PYTHON_VERSION
FROM python:${PYTHON_VERSION}
ADD . /code
WORKDIR /code/
RUN pip install -r requirements.txt
CMD [ "python". "app.py" ]
