//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIFriendshipsUpdateWantRetweetsCommand_h
#define TFSTwitterAPIFriendshipsUpdateWantRetweetsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIFriendshipsUpdateWantRetweetsCommand : TFSTwitterAPICommandWithResponseModelBuilder { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 userID;
    B24@0:8@"NSString"16 screenName;
    B24@0:8@"NSString"16 wantRetweets;
    B24@0:8@"NSString"16 impressionID;
    B24@0:8@"NSString"16 earned;
}

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id screenName:(id)name wantRetweets:(_Bool)retweets impressionID:(id)id earned:(_Bool)earned context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;

@end

#endif /* TFSTwitterAPIFriendshipsUpdateWantRetweetsCommand_h */
