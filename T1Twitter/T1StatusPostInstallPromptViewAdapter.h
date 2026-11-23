//
#ifndef T1StatusPostInstallPromptViewAdapter_h
#define T1StatusPostInstallPromptViewAdapter_h
@import Foundation;

#include "T1StatusPostInstallPromptViewDelegate-Protocol.h"

@class NSString, TFNComposableViewAdapter;

@interface T1StatusPostInstallPromptViewAdapter : TFNComposableViewAdapter <T1StatusPostInstallPromptViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)setLayoutState:(id)state forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)feedbackConfigForViewModel:(id)model state:(long long)state;
- (void)_t1_scribeAction:(id)action element:(id)element;
- (void)_t1_resetModelWithAnimation;
- (void)_t1_updateViewConfigWithState:(long long)state;
- (void)didSelectAlreadyInstalled;

@end

#endif /* T1StatusPostInstallPromptViewAdapter_h */
