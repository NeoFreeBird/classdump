//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
