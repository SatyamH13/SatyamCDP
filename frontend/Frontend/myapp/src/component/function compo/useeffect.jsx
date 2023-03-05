import React from 'react';
import { useLayoutEffect,useEffect,useState} from 'react';

function Useeffect(props) {

    const[api,setapi]=useState("");
    const[loder,setloder]=useState(true);
    
    useEffect(()=>{
        setTimeout(()=>{
            fetch('https://jsonplaceholder.typicode.com/albums').then(res=>res.json()).then(data=>{
                console.log(data);
                setapi(data)
            })
        })
        
    })
       
    useLayoutEffect(()=>{
        setTimeout(()=>{
            setloder(false)
        },2000)
       
    })


    return (
        
        <>
         
         {/* {JSON.stringify({api})} */}
         {
            loder == false?
             <> 
               <table className='table table-bordered'>    
            <thead>
                <tr>
                <th>USERID</th>
                <th>ID</th>
                <th>Title</th>
                </tr>
                </thead>   

              { 
            Object.entries(api).map(res=>{
                return <tbody key={res.id}><tr>
                    <td>{res[1].userId}</td>
                    <td>{res[1].id}</td>
                    <td>{res[1].title}</td>
                    </tr></tbody>
            })
        }
        </table>
            </> : <div class="loadingio-spinner-ball-dffukbvvyn"><div class="ldio-4m7w3289z35">
<div></div>
</div></div>
         }   
        </>
    );
}

export default Useeffect;