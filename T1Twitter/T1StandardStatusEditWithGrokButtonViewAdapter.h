//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusEditWithGrokButtonViewAdapter_h
#define T1StandardStatusEditWithGrokButtonViewAdapter_h
@import Foundation;

#include "T1StandardStatusEditWithGrokButtonViewDelegate-Protocol.h"

@class NSString, TFNComposableViewAdapter;

@interface T1StandardStatusEditWithGrokButtonViewAdapter : TFNComposableViewAdapter <T1StandardStatusEditWithGrokButtonViewDelegate>

@property (nonatomic) _Bool isFocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)isGrokBotReply:(id)reply;
+ (long long)modeForViewModel:(id)model;
+ (void)alignEditWithGrokButtonItemInBodyLayout:(id)layout;
+ (id)editWithGrokButtonTitleForViewModel:(id)model;
+ (id)editWithGrokButtonScribeElementForViewModel:(id)model;
+ (_Bool)isEligibleForEditWithGrok:(id)grok isFocal:(_Bool)focal;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)_t1_installedModeTitleFont;
- (void)didTapEditWithGrokButtonView:(id)view;

@end

#endif /* T1StandardStatusEditWithGrokButtonViewAdapter_h */
