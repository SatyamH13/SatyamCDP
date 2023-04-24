import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import reportWebVitals from './reportWebVitals';
import 'bootstrap5/src/css/bootstrap.min.css';
import 'bootstrap5/src/js/bootstrap.bundle.min.js';
import './media.css';
import Header from './web/header';
import Sign from './web/signin';
import {
  BrowserRouter,
   Routes,
   Route,
 
 } from "react-router-dom";
 import Demo from './web/demo'



const root = ReactDOM.createRoot(document.getElementById('root'));

root.render(
  <React.StrictMode>
    <BrowserRouter>
    <Routes>
      <Route path='/' element={<Header/>}/>
      <Route path='/signin' element={<Sign/>} />
    </Routes>
    {/* <Demo/> */}
    </BrowserRouter>
  </React.StrictMode>
);
reportWebVitals();
