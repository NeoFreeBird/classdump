//
#ifndef TUCCompactCardAppStoreDetailsComponentView_h
#define TUCCompactCardAppStoreDetailsComponentView_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCLayoutableView.h"
#include "TUCUnifiedCard.h"

@class NSString, TIPImagePipeline, UIView;

@interface TUCCompactCardAppStoreDetailsComponentView : TUCLayoutableView <TUCComponentView> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 iconViewFactoryBlock;
    @40@0:8:16@24@32 $__lazy_storage_$_fallbackHighlightView;
    @40@0:8:16@24@32 $__lazy_storage_$_iconView;
    @40@0:8:16@24@32 $__lazy_storage_$_titleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_ratingsView;
    @40@0:8:16@24@32 $__lazy_storage_$_metadataLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_descriptionLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) UIView *autoplayableContainerView;
@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (void)handleTapWithSender:(id)sender;
- (id)initWithIconViewFactoryBlock:(id /* block */)block;
- (id)initWithCoder:(id)coder;
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)accessibilityCustomUCActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCCompactCardAppStoreDetailsComponentView_h */
