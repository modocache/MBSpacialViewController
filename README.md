# MBSpacialViewController

![image](https://github.com/mobitar/MBSpacialViewController/blob/gh/demo.gif?raw=true)

## Overview
MBSpacialViewController lets you create an arbitrarily complex map of view controllers in 2D space. Using gestures, you can navigate up, down, left, and right from any view controller. A map is automatically generated and displayed in the bottom left corner.

## Usage
Usage is best explained by checking out the easy to follow sample code. Basically:<br>
1. Create a master view controller which inherits from MBSpacialMasterViewController.<br>
2. Set the master's root property to any view controller (must inherit from MBSpacialChildViewController).<br>
3. Set the root's left/right/upper/lower viewController property. You can do this recursively to create a complex map of view controllers in 2D space.

## License
MBAlertView is available under the MIT license.