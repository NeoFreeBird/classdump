//
#ifndef T1PickableAccountEntryCell_h
#define T1PickableAccountEntryCell_h
@import Foundation;

#include "T1AccountAvatarAndNameView.h"
#include "T1AccountListEntry.h"

@class TFNBadgeView, TFNPickableItemCell;

@interface T1PickableAccountEntryCell : TFNPickableItemCell {
    /* instance variables */
    T1AccountAvatarAndNameView *_avatarAndNameView;
}

@property (retain, nonatomic) T1AccountListEntry *accountEntry;
@property (retain, nonatomic) TFNBadgeView *accessoryBadgeView;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)calculatedLayoutMetrics;
- (long long)_avatarSize;
- (void)layoutSubviews;

@end

#endif /* T1PickableAccountEntryCell_h */
