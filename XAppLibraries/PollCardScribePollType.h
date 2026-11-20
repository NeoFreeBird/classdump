//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PollCardScribePollType_h
#define PollCardScribePollType_h
@import Foundation;

@class NSObject;

@interface PollCardScribePollType : NSObject // (Swift)

/* class methods */
+ (id)image;
+ (id)text;
+ (id)partialImages;

/* instance methods */
- (id)init;

@end

#endif /* PollCardScribePollType_h */
