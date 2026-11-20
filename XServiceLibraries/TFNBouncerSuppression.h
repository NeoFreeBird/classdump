//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBouncerSuppression_h
#define TFNBouncerSuppression_h
@import Foundation;

@class NSObject;

@interface TFNBouncerSuppression : NSObject // (Swift)

/* class methods */
+ (_Bool)isSuppressedWithAccountID:(id)id;
+ (id)tokenFor:(id)_for;

/* instance methods */
- (id)init;

@end

#endif /* TFNBouncerSuppression_h */
