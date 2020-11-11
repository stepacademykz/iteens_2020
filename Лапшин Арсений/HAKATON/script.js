/*Количество разного транспорта*/
let carsS = 3755890
let trucksS = 446475
let carsMediumS = 241259
let motorcyclesS = 63058
let busesS = 59516

/*Пробег разного транспорта за разное время*/
let carsMPD = 42
let trucksMPD = 55
let carsMediumMPD = 69
let motorcyclesMPD = 110
let busesMPD = 21

let carsMPM = 1252
let trucksMPM = 1700
let carsMediumMPM = 2100
let motorcyclesMPM = 3500
let busesMPM = 625

let carsMPY = 15000
let trucksMPY = 25000
let carsMediumMPY = 20000
let motorcyclesMPY = 40000
let busesMPY = 7500

/*Выделяемый CO2 за 1 км езды на разном транспорте*/
let carsC1K = 0.158642
let truckC1K = 0.290802
let carsMediumC1K = 0.199352
let motorcyclesC1K = 0.1398
let busesC1K = 0.24021

/*Население РК*/
let peopleQ = 18632169

/*Статистика за 1 еденицу разного транспорт за разный период времени*/
let cars1CD = carsMPD * carsC1K
let cars1CM = carsMPM * carsC1K
let cars1CY = carsMPY * carsC1K
let trucks1CD = trucksMPD * truckC1K
let trucks1CM = trucksMPM * truckC1K
let trucks1CY = trucksMPY * truckC1K
let carsMedium1CD = carsMediumMPD * carsMediumC1K
let carsMedium1CM = carsMediumMPM * carsMediumC1K
let carsMedium1CY = carsMediumMPY * carsMediumC1K
let motorcycles1CD = motorcyclesMPD * motorcyclesC1K
let motorcycles1CM = motorcyclesMPM * motorcyclesC1K
let motorcycles1CY = motorcyclesMPY * motorcyclesC1K
let buses1CD = busesMPD * busesC1K
let buses1CM = busesMPM * busesC1K
let buses1CY = busesMPY * busesC1K

/*Статистика всего транспорта разного типа за разный период времени*/
let carsAD = cars1CD * carsS
let carsAM = cars1CM * carsS
let carsAY = cars1CY * carsS
let trucksAD = trucks1CD * trucksS
let trucksAM = trucks1CM * trucksS
let trucksAY = trucks1CY * trucksS
let carsMediumAD = carsMedium1CD * carsMediumS
let carsMediumAM = carsMedium1CD * carsMediumS
let carsMediumAY = carsMedium1CD * carsMediumS
let motorcyclesAD = motorcycles1CD * motorcyclesS
let motorcyclesAM = motorcycles1CD * motorcyclesS
let motorcyclesAY = motorcycles1CD * motorcyclesS
let busesAD = buses1CD * busesS
let busesAM = buses1CD * busesS
let busesAY = buses1CD * busesS

/*Общая статистика за разный период времени*/
let alltsD = carsAD + trucksAD + carsMediumAD + motorcyclesAD + busesAD
let alltsM = carsAM + trucksAM + carsMediumAM + motorcyclesAM + busesAM
let alltsY = carsAY + trucksAD + carsMediumAY + motorcyclesAY + busesAY

/*Выделение CO2 на одного жителя РК за разный период*/
let allts1PD = alltsD / peopleQ
let allts1PM = alltsM / peopleQ
let allts1PY = alltsY / peopleQ

console.log(cars1CY)
console.log(carsMedium1CY)