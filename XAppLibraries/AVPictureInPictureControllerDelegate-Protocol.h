//
#ifndef AVPictureInPictureControllerDelegate_Protocol_h
#define AVPictureInPictureControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVPictureInPictureControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)picture;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)picture;
- (void)pictureInPictureController:(id)controller failedToStartPictureInPictureWithError:(id)error;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)picture;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)picture;
- (void)pictureInPictureController:(id)controller restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)handler;

@end

#endif /* AVPictureInPictureControllerDelegate_Protocol_h */
