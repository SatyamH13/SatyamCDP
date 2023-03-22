import React,{useState} from 'react';
import Api1 from './API/api1';

function Program1(props) {
    const [data,setdata]=useState(Api1);
    return (
       
       <>
         <div className='b1'></div>
    
       <div className=' container-fluid program1'>
           {
            data.map((ele)=>{
              return(
                <>
         <div className="row">
            <div className="col-md-6 col-12 detail">
                <div>
                <h1>{ele.title}</h1>
                   <h4>{ele.info}</h4>
                </div>
                  
         </div>
            <div className="col-md-6 col-12 ">
                <div className="tv">
                   
                        <img src={ele.img} className="img" alt="" />
                        <video className='vid' autoPlay playsInline muted loop>
                            <source src={ele.video}/>
                        </video>
                
                
                    
                      
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

export default Program1;