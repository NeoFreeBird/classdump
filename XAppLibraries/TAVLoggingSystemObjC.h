//
#ifndef TAVLoggingSystemObjC_h
#define TAVLoggingSystemObjC_h
@import Foundation;

@class NSObject;

@interface TAVLoggingSystemObjC : NSObject // (Swift)

/* class methods */
+ (void)bootstrapWithObjCBlock:(id /* block */)cblock;

/* instance methods */
- (id)init;

@end

#endif /* TAVLoggingSystemObjC_h */
