import React, { Component } from 'react';
import Reusep from './reuse_price';

class price extends Component {
    render() {
        return (
            <div className='prices'>
                <div className="container">
                    <div className="row">
                    <div className="col-4">
                       <Reusep img="/img/pizza1.jpg" name=" Pizza Margeritta" price="$39.00" />
                    </div>
                    <div className="col-4">
                       <Reusep img="/img/pizza2.jpg" name=" Beer Pizza Crust" price="$25.00" />
                    </div>
                    <div className="col-4">
                       <Reusep img="/img/pizza3.jpg" name=" Pizza Biscuit Bake" price="$49.00" />
                    </div>
                    <div className="col-4">
                       <Reusep img="/img/pizza4.jpg" name=" Pizza Prosciutto" price="$25.00" />
                    </div>
                    <div className="col-4">
                       <Reusep img="/img/pizza5.jpg" name=" Crazy Crust Pizza" price="$29.00" />
                    </div>
                    <div className="col-4">
                       <Reusep img="/img/pizza6.jpg" name=" Low Carb Pizza" price="$49.00" />
                    </div>
                </div>
                </div>
            </div>
        );
    }
}

export default price;