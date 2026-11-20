//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusPromoteButtonViewAdapter_h
#define T1StandardStatusPromoteButtonViewAdapter_h
@import Foundation;

#include "T1StandardStatusPromoteButtonViewDelegate-Protocol.h"

@class NSString, TFNComposableViewAdapter;

@interface T1StandardStatusPromoteButtonViewAdapter : TFNComposableViewAdapter <T1StandardStatusPromoteButtonViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)promoteButtonTitleForViewModel:(id)model;
+ (id)promoteButtonScribeElementForViewModel:(id)model;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)didTapPromoteButtonView:(id)view;

@end

#endif /* T1StandardStatusPromoteButtonViewAdapter_h */
