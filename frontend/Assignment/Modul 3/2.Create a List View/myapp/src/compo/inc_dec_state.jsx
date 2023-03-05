import React , {useState} from 'react';


function Inc_dec_state(props) {
      const[a,seta]=useState(0);
    return (

        <div>
           <div className='box'>
            <h1>{a}</h1>
            <button onClick={()=>{seta(a+1)}} >Increment</button>
            <button  onClick={()=>{seta(a-1)}}> decrement</button>
            <br/>
            <button  onClick={()=>{seta(0)}}>Reset</button>
           </div>
        </div>
    );
}

export default Inc_dec_state;