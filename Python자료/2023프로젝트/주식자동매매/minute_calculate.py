import datetime

t = datetime.datetime.now()
start = t.replace(hour=9, minute=0, second=0, microsecond=0)
delta = t-start
print(int(delta.total_seconds()) // 60)