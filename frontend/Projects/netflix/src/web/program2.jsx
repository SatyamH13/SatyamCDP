import React,{useState} from 'react';
import Api2 from './API/api2';

function Program1(props) {
    const [data,setdata]=useState(Api2);
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
                   <div className='thing'>
                    <img src={ele.img2} height="90%" alt="" />
                    <div className="text">
                        <h4>Stranger Things</h4>
                        <p>Downloading...</p>
                    </div>
                    <img src={ele.img3} height="60%" alt="" />
                   </div>
                       
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

export default Program1;