//
#ifndef PTVSharedOnSocialMediaTableViewCellContentView_h
#define PTVSharedOnSocialMediaTableViewCellContentView_h
@import Foundation;

@class NSString, UILabel, UIView;

@interface PTVSharedOnSocialMediaTableViewCellContentView : UIView {
    /* instance variables */
    UILabel *_alertLabel;
}

@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long shareMessageType;
@property (nonatomic) _Bool useLargeChatFont;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)usernameAttributedStringStateDidChange;
- (void)setParticipantIndex:(long long)index;

@end

#endif /* PTVSharedOnSocialMediaTableViewCellContentView_h */
