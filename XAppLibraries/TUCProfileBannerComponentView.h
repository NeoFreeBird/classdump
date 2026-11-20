//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCProfileBannerComponentView_h
#define TUCProfileBannerComponentView_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCLayoutableView.h"
#include "TUCUnifiedCard.h"

@class TIPImagePipeline, UIView;

@interface TUCProfileBannerComponentView : TUCLayoutableView <TUCComponentView> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 scribe;
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 imageView;
}

@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, retain) UIView *autoplayableContainerView;
@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, retain) id <TUCComponentModel> component;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (void)t1_didTap;
- (id)initWithScribe:(id)scribe scribeContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)accessibilityCustomUCActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCProfileBannerComponentView_h */
