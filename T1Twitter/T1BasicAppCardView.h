//
#ifndef T1BasicAppCardView_h
#define T1BasicAppCardView_h
@import Foundation;

#include "T1AppCardDetailsView.h"
#include "T1AppCardRatingsView.h"
#include "T1BasicAppCardViewEventRegistry.h"
#include "T1BasicAppCardViewModel.h"
#include "TUICardViewDelegate-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TFNButton, TFNSolidColorView, TFNTappableHighlightView, TUIAvatarImageView, TUICardView, UIImageView, UILabel, UIView;

@interface T1BasicAppCardView : TUICardView <TUIImageViewFetchHelperDelegate> {
    /* instance variables */
    id <TUICardViewDelegate> _delegate;
}

@property (retain, nonatomic) T1BasicAppCardViewModel *viewModel;
@property (retain, nonatomic) T1BasicAppCardViewEventRegistry *viewEventRegistry;
@property (retain, nonatomic) TFNTappableHighlightView *containerHighlightView;
@property (retain, nonatomic) TFNSolidColorView *dominantColorView;
@property (retain, nonatomic) TUIAvatarImageView *avatarView;
@property (retain, nonatomic) UILabel *fullNameLabel;
@property (retain, nonatomic) TFNTappableHighlightView *userHighlightView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) TFNTappableHighlightView *imageHighlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) T1AppCardRatingsView *ratingsView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *secondDetailLabel;
@property (retain, nonatomic) TFNTappableHighlightView *titleHighlightView;
@property (retain, nonatomic) TFNButton *callToActionButton;
@property (retain, nonatomic) TFNTappableHighlightView *infoAndActionHighlightView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) T1AppCardDetailsView *detailsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)setDelegate:(id)delegate;
- (void)cardContextDidUpdate;
- (void)prepareForReuse;
- (void)_cardViewModelDidUpdate:(id)update;
- (void)_update;
- (double)_thresholdForStandardLayout;
- (void)_cleanup;
- (void)setImagePipeline:(id)pipeline;
- (id)imageFetchingViews;
- (void)fetchImages;
- (id)delegate;

@end

#endif /* T1BasicAppCardView_h */
