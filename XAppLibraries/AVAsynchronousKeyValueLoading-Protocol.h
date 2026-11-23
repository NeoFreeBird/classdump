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
