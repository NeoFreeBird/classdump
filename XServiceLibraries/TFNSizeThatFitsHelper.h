//
#ifndef TFNSizeThatFitsHelper_h
#define TFNSizeThatFitsHelper_h
@import Foundation;

@class NSObject;
@protocol TFNSizeThatFitsHelperDelegate;

@interface TFNSizeThatFitsHelper : NSObject {
    /* instance variables */
    _Bool _delegateHasSizeThatFitsHelperShouldIncludeSubviewInSizeThatFitsCalculationForView;
}

@property (weak, nonatomic) id <TFNSizeThatFitsHelperDelegate> delegate;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits forView:(id)view withBottomContentPadding:(double)padding layout:(_Bool)layout;
- (void)layoutSubviewsForView:(id)view;
- (void)invalidateLayoutForView:(id)view;
- (void)_layoutSubviewsForView:(id)view atWidth:(double)width;

@end

#endif /* TFNSizeThatFitsHelper_h */
