//
#ifndef TAVUIAutoplayLogging_h
#define TAVUIAutoplayLogging_h
@import Foundation;

@class NSObject;

@interface TAVUIAutoplayLogging : NSObject // (Swift)

/* class methods */
+ (id /* block */)loggingClosure;
+ (void)setLoggingClosure:(id /* block */)closure;

/* instance methods */
- (id)init;

@end

#endif /* TAVUIAutoplayLogging_h */
