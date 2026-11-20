//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusAskGrokButtonViewAdapter_h
#define T1StandardStatusAskGrokButtonViewAdapter_h
@import Foundation;

#include "T1StandardStatusAskGrokButtonViewDelegate-Protocol.h"

@class NSString, TFNComposableViewAdapter;

@interface T1StandardStatusAskGrokButtonViewAdapter : TFNComposableViewAdapter <T1StandardStatusAskGrokButtonViewDelegate>

@property (nonatomic) _Bool isFocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)askGrokButtonTitleForViewModel:(id)model;
+ (long long)downloadSurfaceForViewModel:(id)model;
+ (id)askGrokButtonScribeElementForViewModel:(id)model;
+ (_Bool)isEligibleForAskGrok:(id)grok isFocal:(_Bool)focal;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)didTapAskGrokButtonView:(id)view;

@end

#endif /* T1StandardStatusAskGrokButtonViewAdapter_h */
