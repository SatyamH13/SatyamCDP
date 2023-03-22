import React from 'react';

function footer(props) {
    return (
       <>
       <div className="container-fluid foot">
       
        <div className="container">
        <p>Questions? Call <a href="">000-800-919-1694</a></p>
            <div className="row">
                <div className="col-sm-4 col-12">
                    <ul>
                        <li> <a href="" className='clc'>FAQ</a></li>
                        <li>  <a href="" className='clc'>Account</a></li>
                        <li><a href="" className='clc'>Jobs</a></li>
                        <li> <a href="" className='clc'>Privacy</a></li>
                        <li><a href="" className='clc'>Contact Us</a></li>
                        <li><a href="" className='clc'>Only on Netflix</a></li>
                        <div className="p1 menu footdrop">
                    <span className='lan clc'>
                    <i className="fa-solid fa-globe"></i>
                    <i className="fa-solid fa-caret-down"></i>
                    <select name="" className='form-select' id="">
                        <option value="English">English</option>
                        <option value="Hindi">Hindi</option>
                    </select>
                    </span>
                </div>
                       <li className='lastli'>Netflix India</li>
                    </ul>
                </div>
                <div className="col-sm-4 col-12">
                    <ul>
                        <li><a href="" className='clc'>Gift Card Terms</a></li>
                        <li><a href="" className='clc'>Media Centre</a></li>
                        <li><a href="" className='clc'>Ways to Watch</a></li>
                        <li><a href="" className='clc'>Cookie Preferences</a></li>
                        <li><a href="" className='clc'>Speed Tes</a></li>
                    </ul>
                    </div>
                    <div className="col-sm-4 col-12">
                        <ul>
                            <li><a href="" className='clc'>Help Centre</a></li>
                            <li><a href="" className='clc'>Investor Relations</a></li>
                            <li><a href="" className='clc'>Terms of Use</a></li>
                            <li><a href="" className='clc'>Corporate Information</a></li>
                            <li><a href="" className='clc'>Legal Notices</a></li>
                        </ul>
                    </div>
            </div>
        </div>
       </div>
       </>
    );
}

export default footer;