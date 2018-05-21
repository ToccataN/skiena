var count =0;
function rec(x){
  count += 1;
  if(x == 1){
    return count;
  } else {
    return ((x%2==0) ? rec(x/2) : rec(((3*x)+1)));
  }
}

((i, j)=>{
  var max = 0, p=i, temp=0;
  while(p <= j){
    count = 0;
    temp = rec(p);
    if (temp > max){
      max = 0;
      max = temp;
    }
    p += 1;
  }
  console.log(i + " " + j + " " + max);
})(900,1000)
