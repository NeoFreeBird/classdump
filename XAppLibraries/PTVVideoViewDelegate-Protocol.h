//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoViewDelegate_Protocol_h
#define PTVVideoViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)videoView:(id)view renderingDidChange:(_Bool)change;
- (void)videoView:(id)view videoSizeDidChange:(struct CGSize { double x0; double x1; })change;

@end

#endif /* PTVVideoViewDelegate_Protocol_h */
