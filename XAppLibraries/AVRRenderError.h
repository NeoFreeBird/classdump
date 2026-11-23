//
#ifndef AVRRenderError_h
#define AVRRenderError_h
@import Foundation;

@class NSError;

@interface AVRRenderError : NSError

/* instance methods */
- (id)initWithCode:(long long)code userInfo:(id)info;

@end

#endif /* AVRRenderError_h */
