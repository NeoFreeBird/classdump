//
#ifndef T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentView_h
#define T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentView_h
@import Foundation;

#include "T1CardImageView.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"

@class TFNAttributedTextView, TFNTappableHighlightView, TFSTwitterScribeContext, TIPImagePipeline, TUCLayoutableView, TUCUnifiedCard, UIView;

@interface T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentView : TUCLayoutableView <TUCComponentView>

@property (retain, nonatomic) TFNTappableHighlightView *highlightView;
@property (retain, nonatomic) T1CardImageView *topicImageView;
@property (retain, nonatomic) TFNAttributedTextView *titleTextView;
@property (retain, nonatomic) TFNAttributedTextView *subtitleTextView;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (retain, nonatomic) TUCUnifiedCard *unifiedCard;
@property (retain, nonatomic) id <TUCComponentModel> component;
@property (weak, nonatomic) id <TUCComponentViewEventDelegate> eventDelegate;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) UIView *autoplayableContainerView;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityCustomUCActions;
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (void)_t1_didTapCard;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* T1UnifiedCardTwitterMediaWithDetailsHorizontalComponentView_h */
