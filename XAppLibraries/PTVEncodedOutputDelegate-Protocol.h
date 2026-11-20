//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVEncodedOutputDelegate_Protocol_h
#define PTVEncodedOutputDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVEncodedOutputDelegate <NSObject>

@required

/* required instance methods */
- (void)pipeline:(id)pipeline videoParams:(id)params;
- (void)pipeline:(id)pipeline videoData:(id)data pts:(double)pts dts:(double)dts;
- (void)pipeline:(id)pipeline audioParams:(id)params;
- (void)pipeline:(id)pipeline audioData:(id)data pts:(double)pts;
- (_Bool)pipeline:(id)pipeline shouldEncodeVideo:(double)video;
- (void)pipeline:(id)pipeline pushMetadata:(id)metadata pts:(double)pts;

@optional

@end

#endif /* PTVEncodedOutputDelegate_Protocol_h */
