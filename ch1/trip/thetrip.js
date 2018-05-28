//Not the greatest solution but works adequately well.

function trip(){
  var len= arguments.length, i = 0, temp=[], n, j, bool = false,tracker;

  for(i; i < len ; i++ ){
      if(!bool){
       temp =[];
       n = arguments[i];
       tracker = i;
       bool = true;
     } else if (bool && (i - tracker > n)){
        var sumAve = temp.reduce((sum, point)=> {
              return sum + point;
            }, 0), newNum = 0;
            sumAve /= n;
        for(j = 0; j < temp.length ; j++){
          newNum += ((temp[j] < sumAve) ? (sumAve - temp[j]) : 0 );
        }
        console.log(newNum.toFixed(2));
        temp =[];
        n = arguments[i];
        tracker = i;
     }else {
       if ( arguments[i] != 0){
            temp.push(arguments[i]);
       }
     }
  }
}

trip(3, 10.00, 20.00, 30.00, 4, 15.00, 15.01, 3.01, 3.02, 3, 14.02, 15.02, 2.32, 0);
