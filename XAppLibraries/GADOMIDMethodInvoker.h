//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDMethodInvoker_h
#define GADOMIDMethodInvoker_h
@import Foundation;

@class NSObject;

@interface GADOMIDMethodInvoker : NSObject

/* class methods */
+ (void)performSelectorAsync:(SEL)async target:(id)target;
+ (void)performSelectorAsync:(SEL)async target:(id)target argument:(id)argument;
+ (void)performSelectorSync:(SEL)sync target:(id)target argument:(id)argument;
+ (void)performOnMain:(id /* block */)main;
+ (void)performOnQueue:(id)queue block:(id /* block */)block;
+ (void)performOnQueue:(id)queue afterDelay:(double)delay block:(id /* block */)block;

@end

#endif /* GADOMIDMethodInvoker_h */
