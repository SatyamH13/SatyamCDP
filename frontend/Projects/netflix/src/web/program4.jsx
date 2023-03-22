import React,{useState} from 'react';
import Api4 from './API/api4';

function Program4(props) {
    const [data,setdata]=useState(Api4);
    return (
       
       <>
        
    
       <div className=' container-fluid program1'>
           {
            data.map((ele)=>{
              return(
                <>
         <div className="row">
         <div className="col-md-6 col-12 ">
                <div className="tv mobile">
                   <img src={ele.img1} className="mobileimg" alt="" />
                  
                   
                       
                </div>
            </div>
            <div className="col-md-6 col-12 detail detail2">
                <div>
                <h1>{ele.title}</h1>
                   <h4>{ele.info}</h4>
                </div>
                  
         </div>
          
             </div>
                </>
              )
            })
           }
       </div>
       <div className='b1'></div>
       </>
    );
}

export default Program4;