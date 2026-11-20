//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVUIAutoplayManagerNotifications_h
#define TAVUIAutoplayManagerNotifications_h
@import Foundation;

@class NSObject;

@interface TAVUIAutoplayManagerNotifications : NSObject // (Swift)

/* class methods */
+ (id)debugOverlayWasEnabled;
+ (id)debugOverlayWasDisabled;

/* instance methods */
- (id)init;

@end

#endif /* TAVUIAutoplayManagerNotifications_h */
