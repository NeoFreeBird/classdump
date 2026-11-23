//
#ifndef RTCVideoRenderer_Protocol_h
#define RTCVideoRenderer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol RTCVideoRenderer <NSObject>

@required

/* required instance methods */
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (void)renderFrame:(id)frame;

@optional

@end

#endif /* RTCVideoRenderer_Protocol_h */
