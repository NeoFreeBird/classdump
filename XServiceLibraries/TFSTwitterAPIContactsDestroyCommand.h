//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIContactsDestroyCommand_h
#define TFSTwitterAPIContactsDestroyCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSArray;

@interface TFSTwitterAPIContactsDestroyCommand : TFSTwitterAPICommand

@property (readonly, nonatomic) _Bool liveSyncRequest;
@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id contactIdentifiers:(id)identifiers isLiveSyncRequest:(_Bool)request context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;
- (_Bool)isLiveSyncRequest;

@end

#endif /* TFSTwitterAPIContactsDestroyCommand_h */
