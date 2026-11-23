//
#ifndef TFNLegacyFormBaseCell_h
#define TFNLegacyFormBaseCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNLegacyFormAppearance.h"

@class NSString, UIAccessibilityElement, UIImageView, UILabel, UIView;

@interface TFNLegacyFormBaseCell : TFNCollectionViewCell <TFNLayoutMetricsEnvironment> {
    /* instance variables */
    id _formItem;
}

@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;
@property (nonatomic) _Bool borderless;
@property (readonly, nonatomic) UIAccessibilityElement *accessibilityElement;
@property (readonly, nonatomic) _Bool combinesWithNextCell;
@property (readonly, nonatomic) _Bool combinesWithPreviousCell;
@property (readonly, nonatomic) _Bool hidesFlushEdges;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) UIImageView *disclosureView;
@property (readonly, nonatomic) UIView *dividerCoverView;
@property (readonly, nonatomic) UIView *underlineView;
@property (readonly, nonatomic) UIImageView *separatorCoverView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) _Bool canHighlight;
@property (readonly, nonatomic) _Bool hasTitle;
@property (readonly, nonatomic) _Bool hasDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellForCollectionView:(id)view withItem:(id)item reuseIdentifier:(id)identifier indexPath:(id)path;
+ (double)elementPaddingForLayoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setSectionBreaks:(unsigned long long)breaks;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)highlighted;
- (void)updateBackgroundImageForSectionBreaks:(unsigned long long)breaks highlighted:(_Bool)highlighted layoutMetrics:(id)metrics;
- (void)setSuperHighlighted:(_Bool)highlighted;
- (double)heightOfPermanentContentForLayoutMetrics:(id)metrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })innerContentPaddingWithLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })innerErrorContentPaddingWithLayoutMetrics:(id)metrics;
- (void)layoutBackgroundViewWithMetrics:(id)metrics;
- (void)layoutContentWithMetrics:(id)metrics;
- (void)layoutAccessoryViewWithMetrics:(id)metrics;
- (void)layoutSeparatorCoverViewWithMetrics:(id)metrics;
- (void)layoutDividerCoverView;
- (void)layoutUnderlineViewWithMetrics:(id)metrics;
- (id)formItem;
- (void)setFormItem:(id)item;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })private_contentFrameForCellHeight:(double)height withLayoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })private_layoutSubviewsForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutMetrics:(id)metrics titleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame detailFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame accessoryFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame;
- (id)private_createLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })private_verticallyCenteredFrameForLabel:(id)label inContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })private_innerContentPaddingForEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets withLayoutMetrics:(id)metrics;

@end

#endif /* TFNLegacyFormBaseCell_h */
