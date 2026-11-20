//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoViewControllerDelegate_Protocol_h
#define PTVVideoViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)videoViewControllerWillShowVideoView:(id)view;
- (void)videoViewControllerDidShowVideoView:(id)view;
- (void)videoViewControllerDidUpdateVideoDimensions:(id)dimensions;

@end

#endif /* PTVVideoViewControllerDelegate_Protocol_h */
