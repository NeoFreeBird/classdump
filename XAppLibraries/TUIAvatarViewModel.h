//
#ifndef TUIAvatarViewModel_h
#define TUIAvatarViewModel_h
@import Foundation;

#include "TUIAvatarImageViewModel.h"

@class NSObject, NSString;

@interface TUIAvatarViewModel : NSObject

@property (readonly, copy, nonatomic) TUIAvatarImageViewModel *imageViewModel;
@property (readonly, nonatomic) _Bool shouldUse2DHeart;
@property (copy, nonatomic) NSString *avatarIdentifier;

/* instance methods */
- (id)initWithAvatarImage:(id)image shouldUse2DHeart:(_Bool)dheart;
- (id)initWithMediaEntity:(id)entity;
- (id)initWithMediaEntity:(id)entity accessibilityValue:(id)value;
- (id)initWithAvatarImage:(id)image;

@end

#endif /* TUIAvatarViewModel_h */
