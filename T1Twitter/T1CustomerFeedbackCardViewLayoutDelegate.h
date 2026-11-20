//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CustomerFeedbackCardViewLayoutDelegate_h
#define T1CustomerFeedbackCardViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1CustomerFeedbackCardViewLayoutDelegate : TUICardViewLayoutDelegate

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } closeButtonSize;

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)init;
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (double)_layoutRatingView:(id)view forViewModel:(id)model ratingViewMaxWidth:(double)width startOrigin:(struct CGPoint { double x0; double x1; })origin;
- (void)_setupViewOrHide:(id)hide withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })_sizeForCTAButtonWithTitle:(id)title;

@end

#endif /* T1CustomerFeedbackCardViewLayoutDelegate_h */
