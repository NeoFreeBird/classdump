//
#ifndef T1TweetDetailsRedesignedConversationControlView_h
#define T1TweetDetailsRedesignedConversationControlView_h
@import Foundation;

@class UIView;

@interface T1TweetDetailsRedesignedConversationControlView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *iconImageView;
    NSNumber"16@0:8 *textLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_tapRecognizer;
}

@property (nonatomic, copy) id /* block */ tapAction;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFits:(double)fits attributedText:(id)text;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)updateWith:(id)with iconName:(id)name;
- (void)didTapBanner;

@end

#endif /* T1TweetDetailsRedesignedConversationControlView_h */
