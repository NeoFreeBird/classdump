//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVProfileImageViewDelegate_Protocol_h
#define PTVProfileImageViewDelegate_Protocol_h
@import Foundation;

#include "PTVLoadingImageViewDelegate-Protocol.h"

@protocol PTVProfileImageViewDelegate <PTVLoadingImageViewDelegate>

@required

@optional

/* optional instance methods */
- (void)profileImagePressed:(id)pressed;
- (void)didPressAccessoryLabelOfProfileImageView:(id)view;

@end

#endif /* PTVProfileImageViewDelegate_Protocol_h */
