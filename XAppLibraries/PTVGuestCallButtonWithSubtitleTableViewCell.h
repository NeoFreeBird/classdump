//
#ifndef PTVGuestCallButtonWithSubtitleTableViewCell_h
#define PTVGuestCallButtonWithSubtitleTableViewCell_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVGuestCallButtonWithSubtitleTableViewCellDelegate-Protocol.h"

@class NSString, UIColor, UILabel, UITableViewCell;

@interface PTVGuestCallButtonWithSubtitleTableViewCell : UITableViewCell {
    /* instance variables */
    PTVExtendedButton *_guestCallButton;
    UILabel *_guestCallSubtitle;
}

@property (weak, nonatomic) id <PTVGuestCallButtonWithSubtitleTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *buttonColor;

/* class methods */
+ (double)HeightThatFits;
+ (double)CondensedHeightThatFits;

/* instance methods */
- (void)layoutSubviews;
- (void)adjustButtonContentEdgeInsetsIfNeeded;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)buttonPressed;
- (id)attributedButtonTitleForString:(id)string;
- (id)attributedSubtitleForString:(id)string;
- (id)subtitleFont;

@end

#endif /* PTVGuestCallButtonWithSubtitleTableViewCell_h */
