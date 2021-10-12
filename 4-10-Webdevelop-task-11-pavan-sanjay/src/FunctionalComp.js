import react from "react";
//this is the function which has all the textboxes and the widgets
function FunctionalComp(){
    return(   
       <div className="acacia">
           <form className="sw">
               <input type="text" placeholder="username" id="username"/>
               <br/>
               <br/>
               <input type="password" placeholder="password" minLength="6" maxLength="10" id="password" />
               <br/>
               <br/>
               <a href="--">Forgot your password?</a>
               <br/>
               <br/>
               <br/>
               <input type="submit" id="submit"/>
               <br/>
               <br/>
               <script>
                   
               </script>
           </form>
       </div>
      );
}
export default FunctionalComp;
