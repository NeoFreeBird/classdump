//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAMFBool_h
#define PTVAMFBool_h
@import Foundation;

@class NSObject;

@interface PTVAMFBool : NSObject

@property _Bool value;

/* class methods */
+ (id)createWithBool:(_Bool)_bool;

/* instance methods */
- (id)initWithBool:(_Bool)_bool;

@end

#endif /* PTVAMFBool_h */
