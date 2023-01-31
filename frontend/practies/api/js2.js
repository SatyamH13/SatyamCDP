
let logindata = document.getElementById('lbtn2');
userloginid = localStorage.getItem('userid')

console.log(userloginid)
if(logindata != null)
{
    logindata.addEventListener("click",function(){
    luname =document.getElementById('luname').value;
    lpwd =document.getElementById('lpwd').value;

    fetch('http://localhost/api/login_get_method?username='+luname+'&password='+lpwd).then(res=>res.json()).then(ww=>{
        console.log(ww)
        
        if(ww.Code == 1)
        {
            window.location.href='01_intro.html'
        }
        else{
            console.log("invalid data")
        }
    })
})

}


let submit = document.getElementById('submit');
 
  submit.addEventListener("click",function(){
    let username = document.getElementById('username').value;
  let emailid = document.getElementById('emailid').value;
  let password = document.getElementById('password').value;
  let mobileno = document.getElementById('mobileno').value;

  const data = {username:username,email:emailid,password:password,mobile:mobileno}
  console.log(data);

  fetch('http://localhost/api/registration_api',{method:'POST',headers:{'Cotent-Type':'application/json'},
  body:JSON.stringify({allData:data})}).then(res=>res.json()).then(aa=>{
    console.log(aa);
    localStorage.setItem('userid',aa.data)
  })
           
  })
