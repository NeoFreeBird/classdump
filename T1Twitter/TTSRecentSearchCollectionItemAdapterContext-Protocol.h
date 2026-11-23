//
#ifndef TTSRecentSearchCollectionItemAdapterContext_Protocol_h
#define TTSRecentSearchCollectionItemAdapterContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSRecentSearchCollectionItemAdapterContext <NSObject>

@required

/* required instance methods */
- (id)presenceObservableForUserID:(long long)id;

@optional

@end

#endif /* TTSRecentSearchCollectionItemAdapterContext_Protocol_h */
