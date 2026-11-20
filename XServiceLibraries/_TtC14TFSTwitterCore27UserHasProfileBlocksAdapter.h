//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore27UserHasProfileBlocksAdapter_h
#define _TtC14TFSTwitterCore27UserHasProfileBlocksAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UserHasProfileBlocksAdapter : NSObject // (Swift)

/* class methods */
+ (id)retrieveHasProfileBlocksWithActionService:(id)service userID:(long long)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore27UserHasProfileBlocksAdapter_h */
