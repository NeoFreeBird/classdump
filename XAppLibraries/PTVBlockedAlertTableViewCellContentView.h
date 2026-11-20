//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBlockedAlertTableViewCellContentView_h
#define PTVBlockedAlertTableViewCellContentView_h
@import Foundation;

@class NSString, UILabel, UIView;

@interface PTVBlockedAlertTableViewCellContentView : UIView {
    /* instance variables */
    UILabel *_alertLabel;
    NSString *_blockedUsername;
}

@property (nonatomic) _Bool useLargeChatFont;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setBlockedUsername:(id)username;
- (void)attributedTextChanged;

@end

#endif /* PTVBlockedAlertTableViewCellContentView_h */
