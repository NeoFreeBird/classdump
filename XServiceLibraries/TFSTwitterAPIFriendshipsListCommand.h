//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIFriendshipsListCommand_h
#define TFSTwitterAPIFriendshipsListCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIFriendshipsListCommand : TFSTwitterAPICommandWithResponseModelBuilder { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 userIDs;
    B24@0:8@"NSString"16 screenNames;
}

/* instance methods */
- (id)initWithTest:(_Bool)test error:(id *)error;
- (id)initWithAccountID:(id)id userIDs:(id)ids screenNames:(id)names context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;

@end

#endif /* TFSTwitterAPIFriendshipsListCommand_h */
