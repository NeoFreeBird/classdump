//
#ifndef TCRConversationControlTableViewHeaderCell_h
#define TCRConversationControlTableViewHeaderCell_h
@import Foundation;

@class TFNTableViewCell, UIImage;

@interface TCRConversationControlTableViewHeaderCell : TFNTableViewCell

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (retain, nonatomic) UIImage *headerIcon;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* TCRConversationControlTableViewHeaderCell_h */
