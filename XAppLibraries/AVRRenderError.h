//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
