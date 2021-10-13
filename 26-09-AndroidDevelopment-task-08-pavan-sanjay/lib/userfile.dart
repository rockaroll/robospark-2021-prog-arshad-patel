import 'package:flutter/cupertino.dart';

//vlass defination for all variables
class User {
  final String imagepath;
  final String name;
  final String email;
  final String about;
  final bool inDarkMode;

  const User({
    required this.imagepath,
    required this.name,
    required this.email,
    required this.about,
    required this.inDarkMode,
  });
}
