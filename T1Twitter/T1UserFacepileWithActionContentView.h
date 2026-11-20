//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserFacepileWithActionContentView_h
#define T1UserFacepileWithActionContentView_h
@import Foundation;

#include "T1OnboardingUserFacepileViewActionButton.h"
#include "T1UserFacepileWithActionViewModel-Protocol.h"
#include "T1UserFacepileWithActionViewModelObserver-Protocol.h"

@class NSObject, NSString, TFNFlexibleLayoutView, TIPImagePipeline, TUIUserFacepileView;

@interface T1UserFacepileWithActionContentView : TFNFlexibleLayoutView <T1UserFacepileWithActionViewModelObserver>

@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) T1OnboardingUserFacepileViewActionButton *actionButton;
@property (retain, nonatomic) TUIUserFacepileView *facepileView;
@property (retain, nonatomic) NSObject<T1UserFacepileWithActionViewModel> *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model imagePipeline:(id)pipeline;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutAreaEdgeInsetsForLayoutMetrics:(id)metrics;
- (void)viewModelButtonStateChanged;
- (void)viewModelRemovedUserAtIndex:(unsigned long long)index;
- (void)private_updateSubviewItems;
- (void)private_updateActionButtonWithViewModel:(id)model;
- (void)private_handleFacepileTap;
- (void)private_didTapActionButton:(id)button;

@end

#endif /* T1UserFacepileWithActionContentView_h */
