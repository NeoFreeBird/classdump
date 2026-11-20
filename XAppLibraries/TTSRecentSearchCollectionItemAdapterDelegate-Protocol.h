//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
