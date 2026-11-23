//
#ifndef T1LiveEventCardViewGuideHeroLayoutDelegate_h
#define T1LiveEventCardViewGuideHeroLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1LiveEventCardViewGuideHeroLayoutDelegate : TUICardViewLayoutDelegate

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })targetImageSizeForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;

@end

#endif /* T1LiveEventCardViewGuideHeroLayoutDelegate_h */
