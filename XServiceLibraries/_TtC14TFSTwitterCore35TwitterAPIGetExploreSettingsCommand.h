//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore35TwitterAPIGetExploreSettingsCommand_h
#define _TtC14TFSTwitterCore35TwitterAPIGetExploreSettingsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterCore.TwitterAPIGetExploreSettingsCommand : TFSTwitterAPICommandWithResponseModelBuilder // (Swift)

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;

@end

#endif /* _TtC14TFSTwitterCore35TwitterAPIGetExploreSettingsCommand_h */
