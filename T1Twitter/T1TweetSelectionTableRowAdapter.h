//
#ifndef T1TweetSelectionTableRowAdapter_h
#define T1TweetSelectionTableRowAdapter_h
@import Foundation;

#include "T1StatusTableRowAdapter.h"

@interface T1TweetSelectionTableRowAdapter : T1StatusTableRowAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *checkedAccessoryType;
    NSNumber"16@0:8 *uncheckedAccessoryType;
    NSNumber"16@0:8 *delegate;
}

/* class methods */
+ (Class)statusCellClass;

/* instance methods */
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didDeselectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)initWithAccount:(id)account scribeImpressionCache:(id)cache;

@end

#endif /* T1TweetSelectionTableRowAdapter_h */
