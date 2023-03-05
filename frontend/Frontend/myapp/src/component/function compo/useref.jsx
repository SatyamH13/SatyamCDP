import React,{useRef,useState} from 'react';

function Useref(props) {
    const[a,seta]=useState("");
    const[b,setb]=useState("");
    const[c,setc]=useState("");
    const[d,setd]=useState("");
    const[e,sete]=useState("");
    const[p1,setp1]=useState("");
    const[p2,setp2]=useState("");
    const[p3,setp3]=useState("");
    const[p4,setp4]=useState("");
    const input = useRef();
    const input2 = useRef();
    const input3 = useRef();
    const input4 = useRef();
    

    function check(){
        
       if(input.current.value == "")
       {
        input.current.focus();
      
        seta("*Required");
        return
       }
       else
       {
        seta("");
       }
     
    }
    function pattern()
    {
        var nam = /^[a-zA-Z]+$/;
       
        if(!nam.test(input.current.value))
        {
           setp1("*Enter valid name ")
         
        }
        else
        {
         setp1("")
        }



    }
    
    function check2(){
        if(input2.current.value == "")
        {
           
          input2.current.focus();
         setb("*Required");
         return
        }
        else
        {
         setb("");
        }
      
     }
     function pattern2()
     {
         var email = /^([a-zA-Z0-9._-])+@([a-zA-Z])+\.([a-zA-Z]{2,3})+$/;
      
         
      
        
         if(email.test(input2.current.value))
         {
            setp2("") 
         }
         else
         {
           
            console.log("hkg");
            setp2("*Enter valid email")
            return
          
         }
 
 
 
     }
     function check3(){
        if(input3.current.value == "")
        {
         input3.current.focus();
       
         setc("*Required");
         return
        }
        else
        {
         setc("");
        }


      
     }
     function pattern3()
     {
         var pwd = /^([a-zA-Z0-9._.@*-]{6,8})+$/;
        
         if(pwd.test(input3.current.value))
         {
            setp3("") 
         }
         else
         {   
            setp3("*Enter valid password")
            return
         }
     }

     function check4(){
        if(input4.current.value == "")
        {
         input4.current.focus();
       
         setd("*Required");
         return
        }
        else
        {
         setd("");
        }
      
     }
     function check5(){

     let aa= document.querySelectorAll(".name")
      if(!aa[0].checked && !aa[1].checked)
      {
       console.log("ukguy");
     
       sete("*Required");
       return
      }
      else
      {
       sete("");
       
      }
    
   }
     function pattern4()
     {
         var mo= /^([0-9]{10})+$/; 
         if(mo.test(input4.current.value))
         {
            setp4("") 
         }
         else
         {   
            setp4("*Enter valid num")
            return
         }
     }
 
 
 
    
 
    return (

       <>
      
        <table className='aa' cellPadding="5" border={1} cellSpacing="5px" >
         <tbody>
            <tr><th colSpan="2" className='text-center'>Registration Form</th></tr>
         <tr>
            <td>Name</td>
            <td><input type="text" ref={input} onBlur={check} onKeyUp={pattern} /><br/><span>{a}</span><span>{p1}</span> </td>
           
         
         </tr>
         <tr>
            <td>Email</td>
            <td><input type="email" name="" ref={input2} onBlur={check2} onKeyUp={pattern2} id="" /> <br/> <span>{b}</span><span>{p2}</span></td>
          
         </tr>
         <tr>
            <td>Password</td>
            <td><input type="password" name="" ref={input3} onBlur={check3} onKeyUp={pattern3}  id="" /><br /> <span>{c}</span><span>{p3}</span></td>
           
         </tr>
         <tr>
            <td>Mobile</td>
            <td><input type="mobile" name="" ref={input4} onBlur={check4} id="" onKeyUp={pattern4} /><br />  <span>{d}</span> <span>{p4}</span></td>
          
         </tr>
         <tr>
            <td>Gender</td>
            <td>
                <input type="radio" id='male' className='name' name='name'/>
                <label htmlFor="male">Male</label>&nbsp;&nbsp;
                <input type="radio" id='female' className='name' name='name'/>
                <label htmlFor="female">Female</label>
                <br />  <span>{e}</span>
            </td>
         </tr>
         <tr><td colSpan={2}><input onClick={check5} type="submit"/></td></tr>
         </tbody>
        </table>

      
       </>
    );
}

export default Useref;