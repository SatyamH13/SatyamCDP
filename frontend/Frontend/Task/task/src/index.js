import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import Header from './head/header.jsx'
import Design from './head/style.css'
import Boot from '../node_modules/bootstrap5/src/css/bootstrap.min.css'
import Js from '../node_modules/bootstrap5/src/js/bootstrap.bundle.min.js'


const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
      
    <Header/>
    
  
  </React.StrictMode>
);  

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
