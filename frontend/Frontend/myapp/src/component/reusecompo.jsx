import React from 'react';
import { Component } from 'react';

class reusecompo extends Component {
    render() {
        return (
            <>
             <div className="card">
                    <img src={this.props.imgsrc}  height="250px" />
                    <div className="card-body">
                        <div className="row">
                            <div className="col-6">
                                <h4>{this.props.title}</h4>
                            </div>
                            <div className="col-6">
                                <p>Old Price : <del>${this.props.oldprice}</del></p>
                                <p>New Price : ${this.props.oldprice}</p>
                            </div>
                            <button className="btn btn-primary">Buy Now</button>
                        </div>
                    </div>
                </div>
            </>
        );
    }
}

export default reusecompo;




