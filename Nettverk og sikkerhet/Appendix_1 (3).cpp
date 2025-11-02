//Dette er min psudo kode for oppgave 3a

//danner serveren, med adressen
var server_socket = socket(AF_INET, SOCK_STEAM);
var adresse = adresse_info;

//setter en kobling sammen og lytter
bind(server_socket, &addr);
listen(server_socket);

while(true){
  //klienten har akseptert koblingen og leser inn
  var client_socket = accept(server_socket);
  var respons = read(client_socket);
  
  try(){
    //bygger en funksjon for klient og sender og stenger client
    var msg = Buildpaylod(handleclient(msg_payloyd, msg_method));
    send(client_socket, msg);
    close(client_socket);
  }
  //kaster meldigen som er sendt til skjerm
  throw{
    send(unknown_msg);
  }
}

handleClient(int payloyd, string method){
  
  //få ut verdiene 
  var val1;
  var val2;
  //implementer de 4 metodene add,sub,multi og divide
  var ADD = val1 + val2;
  var SUB = val1 - val2;
  var MUL = val1 * val2;
  var DIV = val1 % val2;
  //kaste ut til skjerm
  throw(server_socket,respons);
  
  //stenger server socketen
  close(server_socket);
}