//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XDSButtonLayoutDelegate_Protocol_h
#define XDSButtonLayoutDelegate_Protocol_h
@import Foundation;

@protocol XDSButtonLayoutDelegate

@required

/* required instance methods */
- (void)buttonDidChangeIntrinsicSize:(id)size;

@optional

@end

#endif /* XDSButtonLayoutDelegate_Protocol_h */
