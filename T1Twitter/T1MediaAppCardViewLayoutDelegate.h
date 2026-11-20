//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MediaAppCardViewLayoutDelegate_h
#define T1MediaAppCardViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1MediaAppCardViewLayoutDelegate : TUICardViewLayoutDelegate

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (struct CGSize { double x0; double x1; })targetImageSizeForViewModel:(id)model cardWidth:(double)width;

@end

#endif /* T1MediaAppCardViewLayoutDelegate_h */
