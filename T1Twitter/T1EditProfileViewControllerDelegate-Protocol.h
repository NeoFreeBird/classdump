//
#ifndef T1EditProfileViewControllerDelegate_Protocol_h
#define T1EditProfileViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1EditProfileViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)editProfileViewControllerWillChangeHeader:(id)header;
- (void)editProfileViewControllerWillRemoveHeader:(id)header;
- (void)editProfileViewController:(id)controller didUpdateAvatarImage:(id)image creatorName:(id)name;
- (void)editProfileViewControllerDidFinishUpdating:(id)updating;

@end

#endif /* T1EditProfileViewControllerDelegate_Protocol_h */
