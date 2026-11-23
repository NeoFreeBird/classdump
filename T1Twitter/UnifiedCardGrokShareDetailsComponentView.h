//
#ifndef UnifiedCardGrokShareDetailsComponentView_h
#define UnifiedCardGrokShareDetailsComponentView_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"

@class TIPImagePipeline, TUCLayoutableView, TUCUnifiedCard, UIView;

@interface UnifiedCardGrokShareDetailsComponentView : TUCLayoutableView <TUCComponentView> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *$__lazy_storage_$_grokShareCard;
}

@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, readonly) UIView *autoplayableContainerView;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)accessibilityCustomUCActions;
- (void)setupActions;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (void)prepareForReuse;
- (void)didTapConversation;
- (void)didTapAskGrokYourself;

@end

#endif /* UnifiedCardGrokShareDetailsComponentView_h */
