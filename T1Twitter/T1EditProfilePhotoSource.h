//
#ifndef T1EditProfilePhotoSource_h
#define T1EditProfilePhotoSource_h
@import Foundation;

#include "T1EditProfileViewController.h"

@class NSObject;

@interface T1EditProfilePhotoSource : NSObject

@property (weak, nonatomic) T1EditProfileViewController *editProfileViewController;

/* instance methods */
- (id)initWithEditProfileViewController:(id)controller;
- (id)actionItemsForType:(long long)type;

@end

#endif /* T1EditProfilePhotoSource_h */
