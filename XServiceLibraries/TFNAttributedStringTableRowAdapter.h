//
#ifndef TFNAttributedStringTableRowAdapter_h
#define TFNAttributedStringTableRowAdapter_h
@import Foundation;

#include "TFNItemsTableRowAdapter.h"

@interface TFNAttributedStringTableRowAdapter : TFNItemsTableRowAdapter

@property (nonatomic) _Bool cellAccessibilityEnabled;

/* instance methods */
- (id)initWithCellAccessibilityEnabled:(_Bool)enabled;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)isCellAccessibilityEnabled;

@end

#endif /* TFNAttributedStringTableRowAdapter_h */
