//
#ifndef TFNAccessibilityProxyView_h
#define TFNAccessibilityProxyView_h
@import Foundation;

@class UIView;

@interface TFNAccessibilityProxyView : UIView

@property (weak, nonatomic) UIView *view;

/* class methods */
+ (id)proxyViewForView:(id)view;

/* instance methods */
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end

#endif /* TFNAccessibilityProxyView_h */
