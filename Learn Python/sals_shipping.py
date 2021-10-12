weight = 2

#Ground Shipping
if (weight <= 2):
  shipping_cost = (weight*1.50) + 20
  total = '%.2f' % shipping_cost
  print('Ground Shipping Cost = $' + total)

elif (weight <= 6):
  shipping_cost = (weight*3) + 20
  total = '%.2f' % shipping_cost
  print('Ground Shipping Cost = $' + total)

elif (weight <= 10):
  shipping_cost = (weight*4) + 20
  total = '%.2f' % shipping_cost
  print('Ground Shipping Cost = $' + total)

else:
  shipping_cost = (weight*4.75) + 20
  total = '%.2f' % shipping_cost
  print('Ground Shipping Cost = $' + total)

ground_premium = 125
print('Premium Ground Shipping Cost = $' + str(ground_premium))

#Drone Shipping
if (weight <= 2):
  shipping_cost = (weight*4.50)
  total = '%.2f' % shipping_cost
  print('Drone Shipping Cost = $' + total)

elif (weight <= 6):
  shipping_cost = (weight*9)
  total = '%.2f' % shipping_cost
  print('Drone Shipping Cost = $' + total)

elif (weight <= 10):
  shipping_cost = (weight*12)
  total = '%.2f' % shipping_cost
  print('Drone Shipping Cost = $' + total)
  
else:
  shipping_cost = (weight*14.25)
  total = '%.2f' % shipping_cost
  print('Drone Shipping Cost = $' + total)