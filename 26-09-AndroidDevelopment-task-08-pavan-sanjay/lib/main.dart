import 'package:flutter/material.dart';
import 'package:flutter_application_assignment/apphome.dart';

void main() {
  runApp(Myapp());
}

//main code:consists of the material app and the base class apphome
class Myapp extends StatelessWidget {
  // ignore: annotate_overrides
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      theme: ThemeData(primaryColor: Colors.blue.shade300),
      home: apphome(),
    );
  }
}
