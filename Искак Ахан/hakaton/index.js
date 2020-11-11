const fs = require('fs');
const express =require('express');
var cors = require('cors')
const { json } = require('express');
const app = express();
app.use(json())
app.use(cors())
app.get ('/',(req,res)=>{
   res.send({
      totalTons,
      categories,
     key: arr1,
     str:str,
     sumarr,
     
   })
})
app.listen(8080,()=>console.log('server is listening'))
 

let arr = [],namesarr=[], arrobj=[],autoPbg=[[],[]],km=[],totalKm=[]

let calculateTotal=(index,autoPbg,startIndexInProbeg,endIndexInProbeg,co2)=>{
   let sum = 0 
   for(let i = 0;i<autoPbg[0][index].numbers.length*1;i++){
      for(let j = startIndexInProbeg;j<=endIndexInProbeg;j++){
         sum =   autoPbg[0][index].numbers[i]*1*autoPbg[1][i].numbers[j] +sum 
      }  
   }
   return sum/1000*co2  ;
}


let calcVehRegion=(index,autoPbg,startIndexInProbeg,endIndexInProbeg,co2,reg)=>{
   let sum = 0
   for(let j = startIndexInProbeg;j<=endIndexInProbeg;j++){
      sum =   autoPbg[0][index].numbers[reg]*1*autoPbg[1][0].numbers[j] +sum 
   }  
   return     sum/1000*co2  ;
}
let calc =(filenames)=>{
   let arr = [ ];
   for(let i =0 ; i <filenames.length ; i++){

   }
   return arr;
  
}




let filenames=fs.readdirSync('./info')


for(let i=0 ;i<filenames.length;i++ ){
   arr.push(  fs.readFileSync('./info/'+filenames[i],'utf-8'))
   namesarr[i]=filenames[i]
}
for(let i = 0 ; i<arr.length;i++){
   arr [i]= arr[i].match(/\d+/g)
}

for(let i =0;i<arr.length;i++){
   arrobj[i]={name :namesarr[i],numbers:arr[i]}
}
for(let i = 0 ;i<arrobj.length;i++){
if(arrobj[i].name.includes('к_авто')){
   autoPbg[0].push({name:arrobj[i].name,numbers:arrobj[i].numbers})
}else    autoPbg[1].push({name:arrobj[i].name,numbers:arrobj[i].numbers})
}
//calculate total pollution
//bus pollution 


let co2Q = []
let totalTons=0
let categories=[[],[]]//bus light middleLight bike lorry
totalTons =calculateTotal(0,autoPbg,36,47,.24)//bbus
categories[0].push( calculateTotal(0,autoPbg,36,47,.24))


 totalTons= calculateTotal(1,autoPbg,24,35,.3)//lorry
 categories[0].push( calculateTotal(1,autoPbg,24,35,.3))

totalTons=calculateTotal(2,autoPbg,0,11,.16)+totalTons//legkovushka

categories[0].push(calculateTotal(2,autoPbg,0,11,.16))


totalTons=calculateTotal(3,autoPbg,12,23,.2)+totalTons//middle legkovushka
categories[0].push(calculateTotal(3,autoPbg,12,23,.2))


totalTons=calculateTotal(4,autoPbg,48,59,.14)+totalTons//bicycle
categories[0].push(calculateTotal(4,autoPbg,48,59,.14))
categories[1].push(["bus"],["lorry or heavy vehicle"],["lightcar"],["middlelightcar"],["bike"])
// console.log(categories)

console.log(totalTons + "  - всего выброшено за год ")
// console.log(totalTons/12+ "  - всего выброшено за месяц ")
// console.log(totalTons/365+ "  - всего выброшено за день ")

// console.log(autoPbg[0][0])
// console.log(autoPbg[1][0])

// console.log(autoPbg[0][0])
// console.log(autoPbg[1][0])
// console.log(calcVehRegion(0 , autoPbg , 36 , 47 , .24,0))

let arr2= [],arr1=[]
arr2.push([1,2])
// console.log(arr2)
filenames.splice(0,5);

for(let i = 0 ; i<filenames.length;i++){
arr1.push([])
   arr1[i].push(calcVehRegion(0 , autoPbg , 36 , 47 , .24,i))//bus
   arr1[i].push(calcVehRegion(1,autoPbg,24,35,.3,i))//lorry
   arr1[i].push(calcVehRegion(3,autoPbg,12,23,.2,i))//middle
   arr1[i].push(calcVehRegion(4,autoPbg,48,59,.14,i))//bike
   arr1[i].push(calcVehRegion(2,autoPbg,0,11,.16,i));//lightcar
   arr1[i].push(filenames[i])

}

let names = ['bus','lorry','middlelightcar or freight car','bike','lightcar']
let str,sm=0
for(let i =1 ;i<arr1.length;i++){
   
   for(let j =0;j<arr1[i].length;j++){
      str = arr1[i][j] +" "+ names[j]+"<br>"+str
      
   }
}
var items = [5,3,7,6,2,9];
function swap(items, leftIndex, rightIndex){
    var temp = items[leftIndex];
    items[leftIndex] = items[rightIndex];
    items[rightIndex] = temp;
}
function partition(items, left, right) {
    var pivot   = items[Math.floor((right + left) / 2)], //middle element
        i       = left, //left pointer
        j       = right; //right pointer
    while (i <= j) {
        while (items[i] < pivot) {
            i++;
        }
        while (items[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(items, i, j); //sawpping two elements
            i++;
            j--;
        }
    }
    return i;
}

function quickSort(items, left, right) {
    var index;
    if (items.length > 1) {
        index = partition(items, left, right); //index returned from partition
        if (left < index - 1) { //more elements on the left side of the pivot
            quickSort(items, left, index - 1);
        }
        if (index < right) { //more elements on the right side of the pivot
            quickSort(items, index, right);
        }
    }
    return items;
}
// first call to quick sort
var sortedArray = quickSort(items, 0, items.length - 1);
console.log(sortedArray); //prints [2,3,5,6,7,9]

let suma = 0,sumarr=[],onlynum=[]
function regionSuma(i){
   suma = 0
   for(let q = 0 ; q<arr1[0].length-1;q++){
      suma = arr1[i][q]+suma
   }
   sumarr.push([suma,arr1[i][5]])
 onlynum.push(suma)
   return sumarr
}
for(let i = 0 ; i <arr1.length;i++ ){
   regionSuma(i)
}
function Comparator(a, b) {
   if (a[1] < b[1]) return -1;
   if (a[1] > b[1]) return 1;
   return 0;
 }
 sumarr.sort(((a,b) => a[0]-b[0]));
 console.log(sumarr)
 console.log(categories)