//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserDisplayTextFormatter_h
#define TFSTwitterUserDisplayTextFormatter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterUserDisplayTextFormatter : NSObject

/* class methods */
+ (id)mentionedUsernameWithUsername:(id)username;
+ (id)displayUsernameWithUsername:(id)username;
+ (id)displayFullNameWithFullName:(id)name username:(id)username;

@end

#endif /* TFSTwitterUserDisplayTextFormatter_h */
