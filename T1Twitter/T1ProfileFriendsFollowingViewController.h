//
#ifndef T1ProfileFriendsFollowingViewController_h
#define T1ProfileFriendsFollowingViewController_h
@import Foundation;

#include "T1ProfileFriendsFollowingViewModel.h"
#include "T1ResizableHeaderSubheader-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSString, TFNAttributedTextView, TFNFlexibleLayoutView, TFNSolidColorView, TFNTappableHighlightView, TFNViewController, TIPImagePipeline, TUIUserFacepileView;

@interface T1ProfileFriendsFollowingViewController : TFNViewController <TFNAttributedTextViewDelegate, TFNLayoutMetricsEnvironment, T1ResizableHeaderSubheader>

@property (retain, nonatomic) T1ProfileFriendsFollowingViewModel *viewModel;
@property (retain, nonatomic) TFNSolidColorView *backgroundView;
@property (retain, nonatomic) TUIUserFacepileView *facepileView;
@property (retain, nonatomic) TFNFlexibleLayoutView *flexibleLayoutView;
@property (retain, nonatomic) TFNAttributedTextView *followCountsTextView;
@property (retain, nonatomic) TFNAttributedTextView *friendsFollowingTextView;
@property (retain, nonatomic) TFNTappableHighlightView *highlightView;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id subheaderInfo;
@property (copy, nonatomic) id /* block */ preferredHeightCheckBlock;

/* instance methods */
- (id)initWithAccount:(id)account profileViewModel:(id)model imagePipeline:(id)pipeline;
- (void)dealloc;
- (void)viewDidLoad;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)tfn_fontSizeChanged;
- (void)_t1_layoutSubviews;
- (void)_t1_didTapButton:(id)button;
- (void)_t1_logAction:(id)action;
- (void)_t1_presentViewController:(id)controller;
- (id)_t1_segmentedViewControllerWithTab:(long long)tab;
- (void)_t1_profileViewModelDidInvalidate:(id)invalidate;
- (void)_t1_setNeedsUpdate;
- (void)showFollowersWithTab:(unsigned long long)tab;
- (void)showFollowing;
- (id)miniProfileTransitionFollowCountsView;
- (id)miniProfileTransitionFacepileView;
- (id)miniProfileTransitionSocialProofTextView;
- (void)showSuperFollowing;
- (void)showCreatorSubscriptions;
- (void)showAffiliates;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)preferredHeight;

@end

#endif /* T1ProfileFriendsFollowingViewController_h */
