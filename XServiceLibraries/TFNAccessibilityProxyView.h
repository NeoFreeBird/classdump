//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
