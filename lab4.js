let number = [12 , 45, 7, 23, 56, 10];
let index = number[0];
for (let i = 0; i < number.length; i++){
    if(number[i] > index){
        index = number[i];
}
}
console.log(index);