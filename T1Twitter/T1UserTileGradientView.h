//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserTileGradientView_h
#define T1UserTileGradientView_h
@import Foundation;

#include "T1UserTileView-Protocol.h"
#include "T1UserViewModel-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSString, TFNFlexibleLayoutView, TIPImagePipeline, UIButton, UIView;

@interface T1UserTileGradientView : UIView <T1UserTileView> {
    /* instance variables */
    id /* block */ _buttonTapAction;
    TFNFlexibleLayoutView *_contentView;
    TIPImagePipeline *_imagePipeline;
    id <TPSFeatureSwitchesAccess> _featureSwitches;
    UIButton *_button;
}

@property (nonatomic) _Bool buttonSelected;
@property (retain, nonatomic) id <T1UserViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model imagePipeline:(id)pipeline featureSwitches:(id)switches buttonTapAction:(id /* block */)action avatarTapAction:(id /* block */)action;
- (_Bool)isButtonSelected;
- (id)private_contentView;
- (id)private_avatarView;
- (id)private_gradientView;
- (id)private_textOverlayView;
- (id)private_tappableViewWithAction:(id /* block */)action;
- (id)private_button;
- (id)private_fullNameView;
- (id)private_badgeView;
- (id)private_usernameView;
- (id)private_parodyLabelView;
- (id)private_textViewWithAttributedString:(id)string maxLines:(unsigned long long)lines;
- (void)private_buttonTapped:(id)tapped;

@end

#endif /* T1UserTileGradientView_h */
