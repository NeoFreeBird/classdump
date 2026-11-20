//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLeaveBehindFeedbackManager_h
#define TFSTwitterLeaveBehindFeedbackManager_h
@import Foundation;

@class NSObject;

@interface TFSTwitterLeaveBehindFeedbackManager : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 accountID;
    B24@0:8@"NSString"16 dismissedConversationModulesByTimelineUID;
}

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterLeaveBehindFeedbackManager_h */
