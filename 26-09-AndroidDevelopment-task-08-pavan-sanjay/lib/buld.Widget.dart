import 'package:flutter/material.dart';

//this file is to print  the two pins buttons
class ButtonWidget extends StatelessWidget {
  final String text;
  final VoidCallback onClicked;

  const ButtonWidget({
    Key? key,
    required this.text,
    required this.onClicked,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) => Center(
          child: Row(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          new ElevatedButton(
            style: ElevatedButton.styleFrom(
              onPrimary: Colors.white,
              padding: EdgeInsets.symmetric(horizontal: 32, vertical: 12),
            ),
            child: Text(text),
            onPressed: onClicked, //we are using elevated buttons here
          ),
          new ElevatedButton(
            style: ElevatedButton.styleFrom(
              onPrimary: Colors.white,
              padding: EdgeInsets.symmetric(horizontal: 32, vertical: 12),
            ),
            onPressed: onClicked,
            child: Text('Message'), //this is the message button
          )
        ],
      ));
}
