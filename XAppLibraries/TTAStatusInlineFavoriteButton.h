//
#ifndef TTAStatusInlineFavoriteButton_h
#define TTAStatusInlineFavoriteButton_h
@import Foundation;

#include "TTAHashflagAnimationTypeProvider-Protocol.h"
#include "TTAStatusInlineActionButton.h"

@class NSString;

@interface TTAStatusInlineFavoriteButton : TTAStatusInlineActionButton {
    /* instance variables */
    NSString *_dismissImageName;
    _Bool _seenAsFavorited;
}

@property (nonatomic) long long showDisabledEducationForReason;
@property (retain, nonatomic) id <TTAHashflagAnimationTypeProvider> animationTypeProvider;

/* class methods */
+ (id)buttonImageNameForUIControlState:(unsigned long long)state viewModel:(id)model options:(unsigned long long)options account:(id)account;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)initWithPillStyleAndOptions:(unsigned long long)options overrideSize:(id)size account:(id)account;
- (id)initWithEmbeddedDismissStyleAndOptions:(unsigned long long)options overrideSize:(id)size account:(id)account dismissPossible:(_Bool)possible;
- (id)initWithSeparateDismissStyleAndOptions:(unsigned long long)options overrideSize:(id)size account:(id)account dismissPossible:(_Bool)possible;
- (id)initWithOptions:(unsigned long long)options overrideSize:(id)size account:(id)account style:(long long)style withEmbeddedDismissButton:(_Bool)button;
- (_Bool)shouldShowCount;
- (id)actionSheetTitle;
- (void)statusDidUpdate:(id)update options:(unsigned long long)options displayTextOptions:(unsigned long long)options animated:(_Bool)animated featureSwitches:(id)switches;
- (id)animationTypeForTransitionToSelectedState;
- (id)createImageView;
- (id)titleColorForUIControlState:(unsigned long long)state;
- (id)tintColorForUIControlState:(unsigned long long)state;
- (id)_t1_generateBrandedLikeHashFlagAnimation;
- (id)_t1_firstLikeAnimation;
- (_Bool)isEligibleForBrandedLike;
- (_Bool)shouldShowZeroCountText;
- (id)zeroCountText;

@end

#endif /* TTAStatusInlineFavoriteButton_h */
