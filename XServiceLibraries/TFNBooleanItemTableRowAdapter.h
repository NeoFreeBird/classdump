//
#ifndef TFNBooleanItemTableRowAdapter_h
#define TFNBooleanItemTableRowAdapter_h
@import Foundation;

#include "TFNItemsTableRowAdapter.h"

@class NSMapTable;

@interface TFNBooleanItemTableRowAdapter : TFNItemsTableRowAdapter {
    /* instance variables */
    NSMapTable *_viewItemMap;
}

/* instance methods */
- (id)init;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (long long)private_accessoryTypeForStyle:(long long)style enabled:(_Bool)enabled;
- (id)private_iconImageForStyle:(long long)style enabled:(_Bool)enabled;
- (id)private_attributedTextModelForItem:(id)item withOptions:(id)options;
- (id)private_attributedTextForText:(id)text font:(id)font color:(id)color alignment:(id)alignment activeRanges:(id)ranges multipleLines:(_Bool)lines;

@end

#endif /* TFNBooleanItemTableRowAdapter_h */
