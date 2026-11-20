//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestViewDelegate_Protocol_h
#define PTVGuestViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)guestView:(id)view videoSizeDidChange:(struct CGSize { double x0; double x1; })change;
- (void)guestView:(id)view renderingDidChange:(_Bool)change;

@end

#endif /* PTVGuestViewDelegate_Protocol_h */
