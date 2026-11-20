//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SignInScribe_h
#define T1SignInScribe_h
@import Foundation;

@class NSObject;

@interface T1SignInScribe : NSObject

/* class methods */
+ (void)scribeOverallLoginSuccessWithAccount:(id)account;

@end

#endif /* T1SignInScribe_h */
