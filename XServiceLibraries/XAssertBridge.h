//
#ifndef XAssertBridge_h
#define XAssertBridge_h
@import Foundation;

@class NSObject;

@interface XAssertBridge : NSObject // (Swift)

/* class methods */
+ (void)assert:(_Bool)assert message:(id)message file:(id)file line:(unsigned long long)line;
+ (void)assertNever:(id)never file:(id)file line:(unsigned long long)line;
+ (void)parameterAssert:(_Bool)assert message:(id)message file:(id)file line:(unsigned long long)line;
+ (void)assertMainThreadWithFile:(id)file line:(unsigned long long)line;
+ (void)assertNotMainThreadWithFile:(id)file line:(unsigned long long)line;

/* instance methods */
- (id)init;

@end

#endif /* XAssertBridge_h */
