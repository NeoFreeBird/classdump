//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
