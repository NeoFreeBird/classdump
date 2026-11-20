//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1RecentSearchCollectionItemAdapterContext_h
#define T1RecentSearchCollectionItemAdapterContext_h
@import Foundation;

#include "T1FleetsContext.h"
#include "TTSRecentSearchCollectionItemAdapterContext-Protocol.h"

@class NSObject, NSString;

@interface T1RecentSearchCollectionItemAdapterContext : NSObject <TTSRecentSearchCollectionItemAdapterContext>

@property (readonly, nonatomic) T1FleetsContext *fleetsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFleetsContext:(id)context;
- (id)presenceObservableForUserID:(long long)id;

@end

#endif /* T1RecentSearchCollectionItemAdapterContext_h */
