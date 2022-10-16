var total=document.getElementById("total").innerHTML;

function print(){ 
    var x = document.getElementById("input-one").value;
    var y = document.getElementById("input-two").value;
    y=y/100;
    console.log(y);
    total =  Math.floor(x) + Math.floor(x*y);
    document.getElementById("total").innerHTML=total;
}

var people=1;

function incriment(){
    var x=document.getElementById("people").innerText;
    console.log(x);
    x++;
    document.getElementById("people").innerText=x;
    people=x;
    // total=total/x;
    // console.log(total);
    // document.getElementById("total").innerHTML=total;
    totalperperson();
}

function decriment(){
    var y=document.getElementById("people").innerText;

    if(y==1){
        return 1;
    }

    console.log(y);
    y--;
    document.getElementById("people").innerText=y;
    people=y;
    // total=total/(y+1);
    // console.log(total);
    // document.getElementById("total").innerHTML=total;
    totalperperson();
}

function totalperperson(){
    var people2=document.getElementById("people").innerText;
    var totalamount=total;
    totalamount=total/people2;
    console.log(totalamount);

    document.getElementById("total").innerHTML=totalamount;

    
}



// console.log(amount.innerText);

