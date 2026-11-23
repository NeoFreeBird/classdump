//
#ifndef T1StandardStatusTranslateAdapter_h
#define T1StandardStatusTranslateAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusTranslateAdapter : TFNComposableViewAdapter

@property (nonatomic) unsigned long long contextDisplayType;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier translationContextDisplayType:(unsigned long long)type;
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)_t1_handleEventType:(id)type sender:(id)sender;
- (id)_t1_manualTranslateLayoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)_t1_updateManualTranslateButtonForViewModel:(id)model forView:(id)view;
- (void)accessibilityPerformTapActionInView:(id)view;

@end

#endif /* T1StandardStatusTranslateAdapter_h */
