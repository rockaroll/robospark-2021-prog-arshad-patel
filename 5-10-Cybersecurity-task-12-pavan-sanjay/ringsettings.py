from enigma.machine import EnigmaMachine

a=0
b=0
c=0


#this code is used to find the ring settings
#function inputs list combination of list settings
def enigma(list1):
    #in the question we were given the answer for one decoded message
    answer = "THISISNOTGONNABEEASY"
   #the variable machine inputs the settings for the enigma machine through this function call.note that the ring settings is equated to the list
    machine = EnigmaMachine.from_key_sheet(
       rotors='I II III',
       reflector='B',
       ring_settings=list1,
       plugboard_settings='AV BS CG DL FU HZ IN KM OW RX')
    # set machine initial starting position
    machine.set_display('WXC')

# decrypt the message key
    msg_key = machine.process_text('KCH')

# decrypt the cipher text with the unencrypted message key
    machine.set_display(msg_key)
    #inputting cyphertext
    ciphertext_question = 'FKYCEPWYRXTXDHYGUPNG'
    #receiving plaintext as an answer in this case
    plaintext_decoded = machine.process_text(ciphertext_question)
    #if the answer we decoded is equal to the answer given then we get the ring settings
    if (plaintext_decoded==answer):
        print("message = ", plaintext_decoded)
        print("ring settings= ", list1)



    #return (plaintext_decoded)


#this is the list generatede it is used to replicate the combination of ring settings possible with the enigma machine
for i in range (0,26):
    a=i
    list1 = [a, b, c]
    enigma(list1)
    for j in range (0,26):
        b = j
        list1 = [a, b, c]
        enigma(list1)
        for k in range(0, 26):
            c = k
            list1 = [a, b, c]
            enigma(list1)





#-=----------------------> def enigma over


#print("question = ",ciphertext_question)
#print("message = ",plaintext_decoded)