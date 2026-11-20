//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAttributedTextCell_h
#define TFNAttributedTextCell_h
@import Foundation;

#include "TFNAttributedTextCellLayoutDelegate-Protocol.h"
#include "TFNAttributedTextView.h"
#include "TFNTableViewCell.h"

@interface TFNAttributedTextCell : TFNTableViewCell <TFNAttributedTextCellLayoutDelegate> {
    /* instance variables */
    long long _style;
}

@property (weak, nonatomic) id <TFNAttributedTextCellLayoutDelegate> layoutDelegate;
@property (nonatomic) _Bool useTilingTextView;
@property (nonatomic) _Bool useHorizontallyCenteredTextView;
@property (nonatomic) long long iconVerticalAlignment;
@property (readonly, nonatomic) TFNAttributedTextView *attributedTextView;
@property (copy, nonatomic) id /* block */ accessoryButtonTappedBlock;

/* class methods */
+ (id)cellForTableView:(id)view indexPath:(id)path withAttributedText:(id)text accessoryType:(long long)type;
+ (id)badgeCellForTableView:(id)view indexPath:(id)path withAttributedText:(id)text badgeText:(id)text;
+ (id)imageBadgeCellForTableView:(id)view indexPath:(id)path withAttributedText:(id)text badgeImage:(id)image;
+ (id)iconCellForTableView:(id)view indexPath:(id)path withAttributedText:(id)text icon:(id)icon accessoryType:(long long)type;
+ (id)_cellForTableView:(id)view reuseIdentifier:(id)identifier indexPath:(id)path withAttributedText:(id)text accessoryType:(long long)type initialization:(id /* block */)initialization;
+ (double)heightForAttributedText:(id)text image:(id)image layoutMetrics:(id)metrics;
+ (double)fullHeightForAttributedText:(id)text image:(id)image layoutMetrics:(id)metrics;
+ (double)heightForStyle:(long long)style attributedText:(id)text badgeText:(id)text detailText:(id)text detailFont:(id)font image:(id)image layoutMetrics:(id)metrics ignoringMaxHeight:(_Bool)height;
+ (double)heightForStyle:(long long)style attributedText:(id)text badgeText:(id)text detailText:(id)text detailFont:(id)font image:(id)image layoutMetrics:(id)metrics ignoringMaxHeight:(_Bool)height detailMultiline:(_Bool)multiline;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)cleanup;
- (void)layoutSubviews;
- (void)accessoryButtonTapped:(id)tapped;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAttributedTextView:(id)view withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAccessoryView:(id)view;
- (id)accessibilityIdentifier;

@end

#endif /* TFNAttributedTextCell_h */
