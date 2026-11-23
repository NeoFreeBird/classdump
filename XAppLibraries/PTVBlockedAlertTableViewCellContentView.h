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
