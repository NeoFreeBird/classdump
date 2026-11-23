//
#ifndef T1GrokFollowupsViewAdapter_h
#define T1GrokFollowupsViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1GrokFollowupsViewAdapter : TFNComposableViewAdapter // (Swift)

@property (nonatomic) _Bool isFocal;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setLayoutState:(id)state forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1GrokFollowupsViewAdapter_h */
