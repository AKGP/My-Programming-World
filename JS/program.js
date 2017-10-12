function ShowName(firstname, lastname){
    var nameIntro = "Your Name is ";
    function MakeFullName(){
        return nameIntro + firstname+" "+lastname;
    }
    return MakeFullName();
}

var MyName = new ShowName();

console.log(MyName);


console.log(ShowName("Ajay", "Kumar"));