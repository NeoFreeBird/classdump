//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PollingCardView_h
#define T1PollingCardView_h
@import Foundation;

#include "T1CardMediaView.h"
#include "T1CardMediaViewDataSource-Protocol.h"
#include "T1CardMediaViewDelegate-Protocol.h"
#include "T1PollingCardViewModel.h"
#include "T1PollingCardViewTheme.h"
#include "TUICardViewAccessible-Protocol.h"

@class NSArray, NSString, TFNInlineCalloutView, TFNTappableHighlightView, TUICardView, UILabel, UIView;

@interface T1PollingCardView : TUICardView <T1CardMediaViewDataSource, T1CardMediaViewDelegate, TUICardViewAccessible>

@property (retain, nonatomic) T1PollingCardViewModel *viewModel;
@property (retain, nonatomic) UIView *highlightProxyView;
@property (retain, nonatomic) TFNTappableHighlightView *pollChoiceContainer;
@property (retain, nonatomic) TFNTappableHighlightView *pollResultContainer;
@property (retain, nonatomic) TFNTappableHighlightView *pollStatusContainer;
@property (retain, nonatomic) NSArray *choiceButtons;
@property (retain, nonatomic) NSArray *resultViews;
@property (retain, nonatomic) T1CardMediaView *mediaView;
@property (retain, nonatomic) TFNTappableHighlightView *mediaHighlightView;
@property (retain, nonatomic) TFNInlineCalloutView *eligibilityCalloutView;
@property (retain, nonatomic) UILabel *voteCountAndTimeLabel;
@property (retain, nonatomic) T1PollingCardViewTheme *theme;
@property (nonatomic) _Bool displayingResults;
@property (nonatomic) unsigned long long resultTransitionGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)prepareForReuse;
- (void)_cleanup;
- (id)_highlightContainerWithProxy:(id)proxy addBorder:(_Bool)border pressedBackgroundColor:(id)color hasButtonAXTraits:(_Bool)axtraits;
- (id)_choiceButtonWithTheme:(id)theme;
- (void)_registerCAPIEventHandler;
- (void)_viewModelDidUpdate:(id)update;
- (void)_choiceButtonPressed:(id)pressed;
- (void)_highlightPressed:(id)pressed;
- (void)updateSubviews;
- (id)_localizedResultsString;
- (id)accessibilityStringForStatusText:(id)text;
- (id)_accessibilityPollTextForStatusText:(id)text;
- (void)_updateThemeIfNeeded;
- (void)_removeThemableSubviews;
- (void)_rebuildSubviewsWithTheme:(id)theme;
- (void)_t1_updateLayerWithTheme:(id)theme;
- (void)cardContextDidUpdate;
- (void)setResultVisible:(_Bool)visible animated:(_Bool)animated;
- (void)setImagePipeline:(id)pipeline;
- (void)fetchImages;
- (id)accessibilityElements;
- (id)cardMediaView;
- (id)playerViewContainer;
- (id)mediaHighlightViewForMediaView:(id)view;
- (void)cardMediaView:(id)view didReceivePlayButtonActionWithEvent:(id)event;
- (void)didTapVideo:(id)video event:(id)event;

@end

#endif /* T1PollingCardView_h */
