//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBUserTileFollowButtonView_h
#define ONBUserTileFollowButtonView_h
@import Foundation;

#include "T1UserTileView-Protocol.h"
#include "T1UserViewModel-Protocol.h"

@class NSString, TFNFlexibleLayoutView, TIPImagePipeline, UIButton, UIView;

@interface ONBUserTileFollowButtonView : UIView <T1UserTileView> {
    /* instance variables */
    id /* block */ _buttonTapAction;
    TFNFlexibleLayoutView *_contentView;
    TIPImagePipeline *_imagePipeline;
    UIButton *_button;
}

@property (nonatomic) _Bool buttonSelected;
@property (retain, nonatomic) id <T1UserViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)private_fullNameViewWithString:(id)string;
+ (id)private_usernameViewWithString:(id)string;
+ (id)private_singleLineTextViewWithAttributedString:(id)string;
+ (double)followButtonHeightWithPadding;
+ (double)heightForViewWithWidth:(double)width;

/* instance methods */
- (id)initWithViewModel:(id)model imagePipeline:(id)pipeline buttonTapAction:(id /* block */)action avatarTapAction:(id /* block */)action;
- (void)layoutViewsWithAvatarTapAction:(id /* block */)action;
- (_Bool)isButtonSelected;
- (id)private_contentView;
- (id)private_backgroundView;
- (id)private_avatarView;
- (id)private_fullNameAndBadgeView;
- (id)private_usernameView;
- (id)private_tappableViewWithAction:(id /* block */)action;
- (id)private_followButton;
- (id)private_badgeView;
- (void)private_buttonTapped:(id)tapped;

@end

#endif /* ONBUserTileFollowButtonView_h */
