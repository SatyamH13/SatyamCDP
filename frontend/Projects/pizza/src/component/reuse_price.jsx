import React, { Component } from 'react';

class reuse_price extends Component {
    render() {
        return (
            <div>
                 <div className="price">
                            <div className="price__img">
                                <img src={this.props.img} alt="pizza" />
                                <h1 className="price__heading">{this.props.name} </h1>
                                <p className="price__text">
                                    Lorem ipsum dolor sit, amet consectetur adipisicing elit. Labore aspernatur dicta iste, eligendi quo dolorem alias asperiores inventore officiis nesciunt error excepturi. 
                                </p>
                                <p className="price_rs">{this.props.price}</p>
                            </div>
                        </div>
            </div>
        );
    }
}

export default reuse_price;