//
#ifndef T1TweetDetailsHeadsUpContextView_h
#define T1TweetDetailsHeadsUpContextView_h
@import Foundation;

@class UIView;

@interface T1TweetDetailsHeadsUpContextView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *textView;
    NSNumber"16@0:8 *badgeImageView;
}

/* class methods */
+ (struct CGSize { double x0; double x1; })BadgeImageSize;
+ (id)TitleFont;
+ (id)TextFont;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)width for:(id)_for;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)updateWith:(id)with iconImage:(id)image backgroundColor:(id)color;

@end

#endif /* T1TweetDetailsHeadsUpContextView_h */
