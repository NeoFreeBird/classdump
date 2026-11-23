//
#ifndef TFNStringDataViewAdapter_h
#define TFNStringDataViewAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@class NSNumber, NSValue, UIColor, UIFont;

@interface TFNStringDataViewAdapter : TFNItemsDataViewAdapter

@property (nonatomic) long long style;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool multipleLines;
@property (nonatomic) _Bool multipleDetailLines;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) _Bool shouldHighlight;

/* class methods */
+ (id)_textColorForStyle:(long long)style;
+ (id)_textFontForStyle:(long long)style;

/* instance methods */
- (unsigned long long)_cellAccessibilityTraitsForStyle:(long long)style;
- (id)init;
- (long long)_styleForOptions:(id)options;
- (long long)_highlightStyleForOptions:(id)options;
- (long long)_cellStyleForOptions:(id)options;
- (long long)_textAlignmentForOptions:(id)options defaultAlignment:(long long)alignment;
- (long long)_lineBreakModeForOptions:(id)options defaultAlignment:(long long)alignment;
- (id)_textFontForOptions:(id)options;
- (id)_detailFontForOptions:(id)options;
- (id)_textColorForOptions:(id)options;
- (id)_detailTextColorForOptions:(id)options;
- (_Bool)_multipleLinesForOptions:(id)options;
- (_Bool)_multipleDetailLinesForOptions:(id)options;
- (id)_sizeForOptions:(id)options;
- (long long)_defaultSeparatorTypeForOptions:(id)options;
- (long long)_defaultAccessoryTypeForOptions:(id)options;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)_dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path estimated:(_Bool)estimated;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)_applyPropertiesToTextCell:(id)cell forText:(id)text withOptions:(id)options;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNStringDataViewAdapter_h */
