total_second = int(input("Masukkan detik: "))

day = total_second // 86400
remainder = total_second % 86400

hour = remainder // 3600
remainder = remainder % 3600

minute = remainder // 60
second = remainder % 60

print(day, "hari", hour, ":", minute, ":", second)