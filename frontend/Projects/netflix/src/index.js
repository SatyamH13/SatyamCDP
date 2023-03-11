import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import reportWebVitals from './reportWebVitals';
import 'bootstrap5/src/css/bootstrap.min.css';
import './media.css';
import Header from './web/header';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
   <Header/>
  </React.StrictMode>
);
reportWebVitals();
