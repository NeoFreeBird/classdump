//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSAAuthorizationStore_Protocol_h
#define TSAAuthorizationStore_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TSAAuthorizationStore <NSObject>

@required

/* required instance methods */
- (void)updateRecord:(id)record withAffectedUserID:(long long)id responseBlock:(id /* block */)block;
- (void)removeRecordsForUserID:(long long)id;
- (void)sendRecordForServiceType:(long long)type context:(id)context responseBlock:(id /* block */)block;

@optional

@end

#endif /* TSAAuthorizationStore_Protocol_h */
