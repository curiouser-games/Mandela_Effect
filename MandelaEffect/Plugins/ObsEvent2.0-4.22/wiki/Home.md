#Version 2.0# 
Pathching for UE 4.22 and events payload 

#Version 2.0#
 - Payload data for events (first iteration)

#Version 1.11#
- More pointers protected
- Debug call event button

#Version 1.10#
- Events instigators. Now when you invoke an event you can pass along an instigator
- You can listen for the events with the instigator variable as well.

#Version 1.9#
- New function to call an event on a single actor instead of globaly.

#Version 1.8#
- Improved unregistering from Listeners before Unreal GC

#Version 1.7#
- Fixed bug for crashes on shipable race conditions.

#Version 1.6#
- Support for version 4.19, 4.20, 4.21
- New function to remove all the listeners for one event.


#Version 1.5#

- Upgraded to version 4.21.
- Fixed bug for users crash who upgraded their version from v1.0.


#Version 1.4#

- Registering and unregistering functions are now exposed to BPs.
- Users can decide if they want the listener to register on start or not.

#Version 1.3#

- Users can now add listeners on UI Widgets.
- Interface for listeners done and ready to be extended by CPP classes.

#Version 1.2#

- Fixed packing bug on all platforms
- Interface for creating and implementing different types of listeners in development.
- Tested on older versions: 4.19

#Version 1.1#

- Users can now create events and set simple listenres for them.
- Users can add a short description inside the event.

#Version 1.0#

- Released basic functionality
- Fixed crashing bugs and more important ones
