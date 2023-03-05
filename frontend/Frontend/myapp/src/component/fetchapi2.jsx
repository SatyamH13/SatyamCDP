import React, { Component } from 'react';

class fetchapi2 extends Component {
    constructor(){
        super();
        this.state={data:''}
      
        

    }
    componentDidMount(){
        fetch('https://jsonplaceholder.typicode.com/posts').then(res=>res.json()).then(jj=>{
            this.setState({data:jj})
        })
    }
    render() {
        
        return (
            <>
             
             {/* {JSON.stringify(this.state.data)} */}
             
             <table className='table table-bordered'>
              
                {
                    Object.entries(this.state.data).map((res,i)=>{
                        return <tbody key={i}>
                           <tr>
                            <td>{res[1].userId}</td>
                            <td>{res[1].id}</td>
                            <td>{res[1].title}</td>
                            <td>{res[1].body}</td>
                           </tr>
                        </tbody>
                    })
                }

             </table>
    
            
            </>
        );
    }
}

export default fetchapi2;