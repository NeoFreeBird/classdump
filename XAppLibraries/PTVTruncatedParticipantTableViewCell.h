//
#ifndef PTVTruncatedParticipantTableViewCell_h
#define PTVTruncatedParticipantTableViewCell_h
@import Foundation;

#include "PTVTableViewCell.h"

@class UILabel, UIView;

@interface PTVTruncatedParticipantTableViewCell : PTVTableViewCell {
    /* instance variables */
    UILabel *_titleLabel;
    UILabel *_truncationCountLabel;
    UIView *_truncationCountBackground;
}

/* class methods */
+ (double)HeightForTitle:(id)title Secondary:(id)secondary SuperViewWidth:(double)width;
+ (id)TitleColor;
+ (id)ForegroundColor;
+ (id)BackgroundColor;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setNTruncated:(id)ntruncated;
- (void)setTitle:(id)title secondary:(id)secondary;

@end

#endif /* PTVTruncatedParticipantTableViewCell_h */
