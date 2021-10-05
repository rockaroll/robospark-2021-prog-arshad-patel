#this code executes to get message
from enigma.machine import EnigmaMachine
#we also have to import the package enigmamachine
# setup machine according to specs from a daily key sheet:
#here ia am inputting the conditions that i used along with the hints.note ring settings are got from other code
machine = EnigmaMachine.from_key_sheet(
       rotors='I II III',
       reflector='B',
       ring_settings=[1, 17, 15],
       plugboard_settings='AV BS CG DL FU HZ IN KM OW RX')

# set machine initial starting position
machine.set_display('WXC')

# decrypt the message key
msg_key = machine.process_text('KCH')

# decrypt the cipher text with the unencrypted message key
machine.set_display(msg_key)

# this is the user input
ciphertext = 'DPIWPOLLFEUPIKAKLQLC'
#this is the user output
plaintext = machine.process_text(ciphertext)

print(plaintext)