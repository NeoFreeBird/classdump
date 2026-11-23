//
#ifndef T1StatusCommunityAvatarViewDelegate_Protocol_h
#define T1StatusCommunityAvatarViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StatusCommunityAvatarViewDelegate <NSObject>

@required

/* required instance methods */
- (void)didTapCommunityAvatarView:(id)view;

@optional

@end

#endif /* T1StatusCommunityAvatarViewDelegate_Protocol_h */
