//
#ifndef T1StandardStatusSensitiveContentViewAdapter_h
#define T1StandardStatusSensitiveContentViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusSensitiveContentViewAdapter : TFNComposableViewAdapter

@property (readonly, nonatomic) unsigned long long displayType;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier displayType:(unsigned long long)type;
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)setViewModel:(id)model forView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)_t1_sensitiveContentRichText;
- (double)_t1_paragraphSpacing;

@end

#endif /* T1StandardStatusSensitiveContentViewAdapter_h */
