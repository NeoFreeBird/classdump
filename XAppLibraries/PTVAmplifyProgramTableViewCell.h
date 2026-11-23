//
#ifndef PTVAmplifyProgramTableViewCell_h
#define PTVAmplifyProgramTableViewCell_h
@import Foundation;

#include "PTVSelectionTableViewCell.h"

@class NSString, UILabel;

@interface PTVAmplifyProgramTableViewCell : PTVSelectionTableViewCell

@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) UILabel *titleLabel;

/* class methods */
+ (double)HeightForAmplifyProgramTableViewCellWithTitle:(id)title ContainerSize:(struct CGSize { double x0; double x1; })size;
+ (id)TitleLabelFont;
+ (id)TitleLabelColor;
+ (struct CGSize { double x0; double x1; })ProfileImageSize;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)loadTitleLabel;

@end

#endif /* PTVAmplifyProgramTableViewCell_h */
