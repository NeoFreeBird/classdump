//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVAsynchronousKeyValueLoading_Protocol_h
#define AVAsynchronousKeyValueLoading_Protocol_h
@import Foundation;

@protocol AVAsynchronousKeyValueLoading

@required

/* required instance methods */
- (long long)statusOfValueForKey:(id)key error:(id *)error;
- (long long)statusOfValueForKey:(id)key error:(id *)error;
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id /* block */)handler;
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id /* block */)handler;

@optional

@end

#endif /* AVAsynchronousKeyValueLoading_Protocol_h */
