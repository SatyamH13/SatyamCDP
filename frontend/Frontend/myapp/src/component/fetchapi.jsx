import React, { Component } from 'react';

class fetchapi extends Component {
    constructor()
    {
        super();
        console.log("Constructor Called");
        this.state={userdata:''}
    }
    componentDidMount(){
        console.log("componentDidMount");
        setTimeout(()=>{    
            fetch('https://jsonplaceholder.typicode.com/posts').then(res=>res.json()).then(Res=>{
                console.log(Res);
                this.setState({userdata:Res})
            }).catch((Error)=>{
                console.log(Error)
            })
        },3000)
    }
    render() {
        console.log("rnder called");
        return (
           <>
<div className="container">
    <div className="row">
        <div className="col">
           
              
                <table className='table table-bordered'>
                    <thead>
                    <tr>
                        <th>USER ID</th>
                        <th>ID</th>
                        <th>TITLE</th>
                        <th>BODY</th>
                    </tr>
                    </thead>
                    
                    {

                        Object.entries(this.state.userdata).map((res)=>{
                            console.log(res);
                          return   <tbody key={res.id}>
                             <tr >
                               <td>{res[1].userId}</td>
                                 <td>{res[1].id}</td>
                                 <td>{res[1].title}</td>
                                 <td>{res[1].body}</td>
                             </tr>
                        </tbody>

                        })
                      
                    }
                
                </table>
            

        </div>
    </div>
</div>
           </>
        );
    }
}

export default fetchapi;