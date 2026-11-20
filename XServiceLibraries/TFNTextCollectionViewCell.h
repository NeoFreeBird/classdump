//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTextCollectionViewCell_h
#define TFNTextCollectionViewCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"
#include "TFNTextDataViewCell-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface TFNTextCollectionViewCell : TFNCollectionViewCell <TFNTextDataViewCell>

@property (nonatomic) long long style;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } horizontalIconPadding;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) _Bool multipleTextLines;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (nonatomic) _Bool multipleDetailTextLines;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) double detailTextPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellForCollectionView:(id)view style:(long long)style reuseIdentifier:(id)identifier indexPath:(id)path initialization:(id /* block */)initialization;
+ (id)cellForCollectionView:(id)view indexPath:(id)path withText:(id)text;
+ (id)subtitleCellForCollectionView:(id)view indexPath:(id)path withText:(id)text detailText:(id)text;
+ (id)subtitleCellForCollectionView:(id)view indexPath:(id)path withText:(id)text detailText:(id)text reuseIdentifier:(id)identifier;
+ (id)value1CellForCollectionView:(id)view indexPath:(id)path withText:(id)text detailText:(id)text;
+ (id)value2CellForCollectionView:(id)view indexPath:(id)path withText:(id)text detailText:(id)text;
+ (id)iconCellForCollectionView:(id)view indexPath:(id)path withText:(id)text icon:(id)icon;
+ (id)iconCellForCollectionView:(id)view indexPath:(id)path withText:(id)text detailText:(id)text icon:(id)icon;
+ (id)iconCellForCollectionView:(id)view indexPath:(id)path withText:(id)text detailText:(id)text icon:(id)icon horizontalIconPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (id)_cellForCollectionView:(id)view style:(long long)style reuseIdentifier:(id)identifier indexPath:(id)path withText:(id)text detailText:(id)text;
+ (struct CGSize { double x0; double x1; })sizeForStyle:(long long)style text:(id)text multipleLines:(_Bool)lines detailText:(id)text multipleLines:(_Bool)lines constrainedToSize:(struct CGSize { double x0; double x1; })size contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (struct CGSize { double x0; double x1; })sizeForStyle:(long long)style text:(id)text font:(id)font multipleLines:(_Bool)lines detailText:(id)text font:(id)font multipleLines:(_Bool)lines padding:(double)padding constrainedToSize:(struct CGSize { double x0; double x1; })size contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (struct CGSize { double x0; double x1; })sizeForStyle:(long long)style text:(id)text font:(id)font multipleLines:(_Bool)lines detailText:(id)text font:(id)font multipleLines:(_Bool)lines padding:(double)padding icon:(id)icon constrainedToSize:(struct CGSize { double x0; double x1; })size contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (struct CGSize { double x0; double x1; })sizeForStyle:(long long)style text:(id)text font:(id)font multipleLines:(_Bool)lines detailText:(id)text font:(id)font multipleLines:(_Bool)lines padding:(double)padding icon:(id)icon horizontalIconPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding constrainedToSize:(struct CGSize { double x0; double x1; })size contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
+ (id)detailFontForStyle:(long long)style;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)initializeStyle:(long long)style;
- (void)layoutSubviews;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end

#endif /* TFNTextCollectionViewCell_h */
