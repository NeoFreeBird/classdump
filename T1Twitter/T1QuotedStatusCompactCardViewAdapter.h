//
#ifndef T1QuotedStatusCompactCardViewAdapter_h
#define T1QuotedStatusCompactCardViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1QuotedStatusCompactCardViewAdapter : TFNComposableViewAdapter // (Swift)

/* class methods */
+ (_Bool)shouldShowCompactArticleCardForViewModel:(id)model;
+ (_Bool)shouldShowCompactLinkCardForViewModel:(id)model;
+ (id)compactCardTitleForViewModel:(id)model;
+ (id)compactCardDomainForViewModel:(id)model;

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setLayoutState:(id)state forView:(id)view;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1QuotedStatusCompactCardViewAdapter_h */
