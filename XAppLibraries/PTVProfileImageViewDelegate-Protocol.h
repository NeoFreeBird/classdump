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
