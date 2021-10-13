// ignore: unused_import
import 'dart:io';
import 'package:flutter/material.dart';

//this is the place where the image function is declared and this facilates the image to be decoded
class ProfileWidget extends StatelessWidget {
  final String imagepath;
  final VoidCallback onClicked;
  @override
  const ProfileWidget({
    Key? key,
    required this.imagepath,
    required this.onClicked,
  }) : super(key: key);
  // ignore: annotate_overrides
  Widget build(BuildContext context) {
    // ignore: unused_local_variable
    final color = Theme.of(context).colorScheme.primary;

    return Center(
      child: buildImage(),
    );
  }

  Widget buildImage() {
    final image = NetworkImage(imagepath);

    return Ink.image(
      image: image,
      fit: BoxFit.cover,
      width: 280,
      height: 280,
      child: InkWell(
        onTap: onClicked,
      ),
    );
  }
}
