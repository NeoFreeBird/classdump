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
