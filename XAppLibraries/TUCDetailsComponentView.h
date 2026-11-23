//
#ifndef TUCDetailsComponentView_h
#define TUCDetailsComponentView_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TUCButton.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCLayoutableView.h"
#include "TUCRatingsView.h"
#include "TUCUnifiedCard.h"

@class NSString, TFNTappableHighlightView, TIPImagePipeline, UILabel, UIView;

@interface TUCDetailsComponentView : TUCLayoutableView <TFNPreviewable, TUCComponentView>

@property (retain, nonatomic) TFNTappableHighlightView *fallbackHighlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TFNTappableHighlightView *titleHighlightView;
@property (retain, nonatomic) TUCRatingsView *ratingsView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) TFNTappableHighlightView *subtitleHighlightView;
@property (retain, nonatomic) TUCButton *button;
@property (retain, nonatomic) UILabel *priceLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TUCUnifiedCard *unifiedCard;
@property (retain, nonatomic) id <TUCComponentModel> component;
@property (weak, nonatomic) id <TUCComponentViewEventDelegate> eventDelegate;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) UIView *autoplayableContainerView;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)init;
- (id)accessibilityLabel;
- (void)layoutSublayersOfLayer:(id)layer;
- (void)_tuc_updateBorderFrameAndPath;
- (struct CGPath *)_tuc_viewMaskPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })path;
- (void)changeButtonStyleOnLingerCtaExperiment;
- (void)resetLingerButtonCtaExperiment;
- (void)setupVisitButtonWithButtonData:(id)data dominantColor:(id)color;
- (id)accessibilityCustomUCActions;
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_tuc_didTapDetail:(id)detail;
- (void)_tuc_didTapButtonAsComponentTap:(id)tap;

@end

#endif /* TUCDetailsComponentView_h */
