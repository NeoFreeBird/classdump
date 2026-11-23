//
#ifndef T1LiveEventCarouselCollectionViewCell_h
#define T1LiveEventCarouselCollectionViewCell_h
@import Foundation;

#include "T1LiveEventCarouselChromeView.h"
#include "T1LiveEventCarouselEntryCellViewModel.h"
#include "T1LiveEventRoundedPaddedView.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TFNBadgesImageView, TFNCollectionViewCell, TIPImagePipeline, TUIAvatarImageView, TUIUserBadger, UIImageView, UILabel, UIView;

@interface T1LiveEventCarouselCollectionViewCell : TFNCollectionViewCell <TUIImageViewFetchHelperDelegate>

@property (readonly, nonatomic) UIImageView *entryImageView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) TUIAvatarImageView *avatarImageView;
@property (readonly, nonatomic) UILabel *displayNameLabel;
@property (readonly, nonatomic) UILabel *usernameLabel;
@property (readonly, nonatomic) TFNBadgesImageView *verifiedImageView;
@property (readonly, nonatomic) T1LiveEventRoundedPaddedView *nowPlayingView;
@property (readonly, nonatomic) T1LiveEventCarouselChromeView *chromeView;
@property (readonly, nonatomic) UIView *highlightView;
@property (retain, nonatomic) T1LiveEventCarouselEntryCellViewModel *entryCellViewModel;
@property (nonatomic) _Bool nowSelected;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) TUIUserBadger *userBadger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_t1_displayNameFont;
+ (id)_t1_usernameFont;
+ (struct CGSize { double x0; double x1; })contentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)highlighted;
- (void)_t1_updateSubviews;
- (void)_t1_setContainerViewSelected:(_Bool)selected;
- (id)_t1_badgeFont;
- (id)_t1_selectedColor;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (_Bool)isNowSelected;

@end

#endif /* T1LiveEventCarouselCollectionViewCell_h */
