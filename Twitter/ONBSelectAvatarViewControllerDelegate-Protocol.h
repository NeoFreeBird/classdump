//
#ifndef ONBSelectAvatarViewControllerDelegate_Protocol_h
#define ONBSelectAvatarViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBSelectAvatarViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)selectAvatarViewController:(id)controller didTapNextWithPhoto:(id)photo;
- (void)selectAvatarViewControllerDidTapSkip:(id)skip;
- (void)selectAvatarViewControllerDidTapAddImage:(id)image;

@optional

@end

#endif /* ONBSelectAvatarViewControllerDelegate_Protocol_h */
