//import logo from './logo.svg';
//this is the main code where everything is called
import './App.css';
import FunctionalComp from './FunctionalComp';
//here i have defined a function app which consists of the login heading and i have called a function to import the rest of the buttons
function App() {
  return (
    <body>    
    <div className="App">
      LOGIN
      </div>
      <div classname="mecenary">
        <FunctionalComp/>
      </div>
    </body>
  );
}

export default App;

