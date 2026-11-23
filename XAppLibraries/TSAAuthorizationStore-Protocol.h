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
