//
#ifndef GADNativeAdAttributionView_h
#define GADNativeAdAttributionView_h
@import Foundation;

@class UILabel, UIView;

@interface GADNativeAdAttributionView : UIView {
    /* instance variables */
    UIView *_textPaddingLeft;
    UIView *_textPaddingRight;
}

@property (readonly, nonatomic) UIView *iconView;
@property (readonly, nonatomic) UILabel *textView;

/* instance methods */
- (id)initWithAttribution:(id)attribution;
- (void)layoutSubviews;

@end

#endif /* GADNativeAdAttributionView_h */
