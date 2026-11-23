//
#ifndef TFNItemsAnimatorDelegate_Protocol_h
#define TFNItemsAnimatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNItemsAnimatorDelegate <NSObject>

@required

/* required instance methods */
- (id)itemsAnimatorSectionsToAnimateFrom:(id)from;
- (void)itemsAnimator:(id)animator performChanges:(id /* block */)changes;
- (void)itemsAnimator:(id)animator didChangeItem:(id)item forChangeType:(unsigned long long)type atIndexPath:(id)path;
- (void)itemsAnimator:(id)animator didChangeSection:(id)section forChangeType:(unsigned long long)type atSectionIndex:(long long)index;

@optional

@end

#endif /* TFNItemsAnimatorDelegate_Protocol_h */
