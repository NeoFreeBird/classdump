//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestRoomControllerFactory_h
#define PTVGuestRoomControllerFactory_h
@import Foundation;

@class NSObject;

@interface PTVGuestRoomControllerFactory : NSObject

/* class methods */
+ (id)guestRoomControllerWithLoggedInUser:(id)user preferredLanguages:(id)languages features:(struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; })features scribe:(id)scribe participantsProvider:(id)provider;

@end

#endif /* PTVGuestRoomControllerFactory_h */
