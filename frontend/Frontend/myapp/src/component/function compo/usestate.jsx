import React, {useState}  from 'react';

function Usestate(props) {

    const[a,seta]=useState("https://media.istockphoto.com/id/173240129/photo/gun-with-clipping-path.jpg?b=1&s=170667a&w=0&k=20&c=GfEthUuCO-EjpItsQ3bxRUYhQdjAbNbGxYAwpw_pcW4=")

    function btn(){
       var bb= document.querySelector(".bb")

        if( bb.src == "https://media.istockphoto.com/id/173240129/photo/gun-with-clipping-path.jpg?b=1&s=170667a&w=0&k=20&c=GfEthUuCO-EjpItsQ3bxRUYhQdjAbNbGxYAwpw_pcW4=")
        {
            
            seta("https://www.shutterstock.com/image-photo/hand-gun-ammunition-on-dark-260nw-1469077079.jpg")
        }
        else{
            seta("https://media.istockphoto.com/id/173240129/photo/gun-with-clipping-path.jpg?b=1&s=170667a&w=0&k=20&c=GfEthUuCO-EjpItsQ3bxRUYhQdjAbNbGxYAwpw_pcW4=")
        }

      
    }
    

    return (
        <>
         <img src={a} alt="" className='bb' height="100px" width="100px" />
         <button onClick={btn}>click</button>
        </>
    );
}

export default Usestate;