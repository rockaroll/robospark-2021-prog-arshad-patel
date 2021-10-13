import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter_application_assignment/profile_widget.dart';
import 'package:flutter_application_assignment/user_preferences.dart';
import 'package:flutter_application_assignment/userfile.dart';
import 'package:flutter_application_assignment/buld.Widget.dart';
import 'package:flutter_application_assignment/numberswidget.dart';

//this is the function where every widget is displayed.This is connected to every package
class apphome extends StatefulWidget {
  @override
  _apphomel createState() => _apphomel();
}

class _apphomel extends State<apphome> {
  @override
  final icon = CupertinoIcons.moon_stars;
  final user = userpreferences.myuser;
  //for the scaffold and basic appbar
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.black,
      ),
      //defining parameters for  image and the sizebox gives vertical space
      body: ListView(
        physics: BouncingScrollPhysics(),
        children: [
          ProfileWidget(
            imagepath: (user.imagepath),
            onClicked: () async {},
          ),
          //defining parameters for  name and email
          const SizedBox(height: 32),
          buildName(user),
          const SizedBox(
            height: 24,
          ),
          NumbersWidget(), // defining parameters for  posts,followers and following
          const SizedBox(height: 48),
          buildabout(user), // defining parameters for description about person
          const SizedBox(height: 34),
          Center(child: buildFollow()),
        ],
      ),
    );
  }

//this will recieve the name and email and print it
  Widget buildName(User user) => Column(
        children: [
          Text(
            user.name,
            style: TextStyle(fontWeight: FontWeight.bold, fontSize: 24),
          ),
          const SizedBox(height: 4),
          Text(
            user.email,
            style: TextStyle(color: Colors.grey),
          )
        ],
      );
  //this will recieve the description and print it
  Widget buildabout(User user) => Center(
          child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Text(
            'About',
            style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold),
          ),
          const SizedBox(
            height: 16,
          ),
          Text(
            user.about,
            style: TextStyle(fontSize: 16, height: 1.4),
          )
        ],
      ));
  //this will recieve the description and print it
  Widget buildFollow() => ButtonWidget(
        text: 'Follow',
        onClicked: () {},
      );
}
