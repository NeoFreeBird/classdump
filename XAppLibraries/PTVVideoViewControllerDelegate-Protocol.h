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
