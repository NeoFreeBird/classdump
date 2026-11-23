//
#ifndef TTSRecentSearchCollectionItemAdapterDelegate_Protocol_h
#define TTSRecentSearchCollectionItemAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSRecentSearchCollectionItemAdapterDelegate <NSObject>

@required

/* required instance methods */
- (void)recentSearchCollectionItemAdapter:(id)adapter didSelectItem:(id)item;

@optional

@end

#endif /* TTSRecentSearchCollectionItemAdapterDelegate_Protocol_h */
