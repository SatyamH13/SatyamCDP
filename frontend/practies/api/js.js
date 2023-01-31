logindata = document.querySelector('#btn2');
userloginid = localStorage.getItem('userid');
console.log(userloginid)
if(logindata != null)   
{
    logindata.addEventListener("click",function(){
        let user = document.getElementById('uname').value;
        let pass = document.getElementById('pwd').value;
        fetch('http://localhost/api/login_get_method?username='+user+'&password='+pass).then(res=>res.json()).then(Res=>{
            console.log(Res);
            {
                if(Res.Code == 1)
                 {
                    console.log('login success');
                    window.location.href='01_intro.html'
                 }
                 else{
                    console.log('invalid data');
                 }
            }
        })
    })
}


function api()
{
    let name = document.getElementById("form3Example1c").value;
    // console.log(name);
    let email = document.getElementById("form3Example3c").value;
    // console.log(email);
    let password = document.getElementById("form3Example4c").value;
    // console.log(password);
    let mobile = document.getElementById("form3Example4cd").value;
    // console.log(mobile);
    const data = {username:name,email:email,password:password,mobile:mobile}
    console.log(data);
    fetch('http://localhost/api/registration_api',{method:'POST',headers:{'Content-Type':'application/json'},body:JSON.stringify({allData:data})})
    .then(res=>res.json()).then((Res)=>{
        console.log(Res);
        localStorage.setItem('userid',Res.data)
    })  
}