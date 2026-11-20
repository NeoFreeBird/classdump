//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBlockComposableViewAdapter_h
#define TFNBlockComposableViewAdapter_h
@import Foundation;

#include "TFNComposableViewAdapter.h"

@interface TFNBlockComposableViewAdapter : TFNComposableViewAdapter

@property (readonly, nonatomic) TFNComposableViewAdapter *defaultBehavior;
@property (copy, nonatomic) id /* block */ shouldBeVisibleBlock;
@property (copy, nonatomic) id /* block */ initializeViewBlock;
@property (copy, nonatomic) id /* block */ deinitializeViewBlock;
@property (copy, nonatomic) id /* block */ viewWillMoveToHostViewBlock;
@property (copy, nonatomic) id /* block */ setViewModelBlock;
@property (copy, nonatomic) id /* block */ unsetViewModelBlock;
@property (copy, nonatomic) id /* block */ viewModelDidUpdateBlock;
@property (copy, nonatomic) id /* block */ setLayoutStateBlock;
@property (copy, nonatomic) id /* block */ layoutStateBlock;
@property (copy, nonatomic) id /* block */ isLayoutStateValidBlock;

/* instance methods */
- (id)initWithDefaultBehavior:(id)behavior;
- (void)setHostView:(id)view;
- (void)setMaximumSizeBlock:(id /* block */)block;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (_Bool)deinitializeView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setLayoutState:(id)state forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* TFNBlockComposableViewAdapter_h */
