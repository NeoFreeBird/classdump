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
