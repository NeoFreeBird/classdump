//
#ifndef T1MessageMeCardViewLayoutDelegate_h
#define T1MessageMeCardViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1MessageMeCardViewLayoutDelegate : TUICardViewLayoutDelegate

/* class methods */
+ (id)ctaLabelFont;
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (struct CGSize { double x0; double x1; })_sizeOfCTAButtonForViewModel:(id)model;

@end

#endif /* T1MessageMeCardViewLayoutDelegate_h */
