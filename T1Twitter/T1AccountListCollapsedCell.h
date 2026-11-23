//
#ifndef T1AccountListCollapsedCell_h
#define T1AccountListCollapsedCell_h
@import Foundation;

#include "T1AccountListCollapsedItem.h"

@class NSMutableArray, TFNTextCell;

@interface T1AccountListCollapsedCell : TFNTextCell {
    /* instance variables */
    NSMutableArray *_avatarViews;
    long long _avatarSize;
}

@property (retain, nonatomic) T1AccountListCollapsedItem *accountsCollapsedItem;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;

@end

#endif /* T1AccountListCollapsedCell_h */
