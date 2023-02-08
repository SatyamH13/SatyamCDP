import React, { Component } from 'react'
import Rec from './reusecompo'

export default class compo extends Component {
  render() {
    return (
        <>
        <div className="container">
    <div className="row mt-5">
        <div className="col-3">
           <Rec imgsrc="https://rukminim1.flixcart.com/image/612/612/xif0q/shoe/3/3/w/-original-imaggcb3yyfn2hpz.jpeg?q=70" title="Nike Shoes" oldprice = "9000" newprice="8000"/>
        </div>
        <div className="col-3">
           <Rec imgsrc="https://images.puma.com/image/upload/f_auto,q_auto,b_rgb:fafafa,w_300,h_300/global/194514/01/fnd/IND/fmt/png/Softride-Rift-Bold-Men's-Slip-On-Walking-Shoes" title="Puma Shoes" oldprice = "8000" newprice="7000"/>
        </div>
        <div className="col-3">
           <Rec imgsrc="https://www.jiomart.com/images/product/original/rvyyucg0ab/lucasa-stylish-party-wear-loafer-shoes-for-men-casual-loafers-for-boys-loafers-for-men-dark-blue-product-images-rvyyucg0ab-0-202209111108.jpg" title="Loffer Shoes" oldprice = "9000" newprice="8000"/>
        </div>
        <div className="col-3">
           <Rec imgsrc="https://rukminim1.flixcart.com/image/832/832/ktizdzk0/shoe/y/b/x/7-ws-9310-tying-grey-original-imag6ut3hzm2zyqm.jpeg?q=70" title="Sport Shoes" oldprice = "5000" newprice="4000"/>
        </div>
    </div>
   </div>
   </>
    )
  }
}


