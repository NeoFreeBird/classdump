//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVOutputViewHosting_Protocol_h
#define TAVOutputViewHosting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVOutputViewHosting <NSObject>

@required

/* required instance methods */
- (void)player:(id)player didChangeToOutputView:(id)view;
- (void)playerWillChangeOutputHost:(id)host;
- (id)presentationStateForPlayer:(id)player;
- (void)playerWasDeallocated;

@optional

/* optional instance methods */
- (_Bool)outputViewHostIsNativePictureInPicturePossible:(id)possible;
- (void)outputViewHostStartNativePictureInPicture:(id)picture;
- (void)outputViewHostStopNativePictureInPicture:(id)picture;
- (_Bool)outputViewHostIsNativePictureInPictureActive:(id)active;

@end

#endif /* TAVOutputViewHosting_Protocol_h */
