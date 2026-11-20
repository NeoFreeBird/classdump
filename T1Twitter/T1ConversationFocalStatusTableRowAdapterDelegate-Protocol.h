//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationFocalStatusTableRowAdapterDelegate_Protocol_h
#define T1ConversationFocalStatusTableRowAdapterDelegate_Protocol_h
@import Foundation;

#include "TFNCellVisibilityListener-Protocol.h"

@protocol T1ConversationFocalStatusTableRowAdapterDelegate <TFNCellVisibilityListener>

@required

@optional

/* optional instance methods */
- (id)tweetDetailsFocalStatusTableRowAdapterCompositionForReplyAction:(id)action;
- (id)tweetDetailsFocalStatusTableRowAdapterCompositionForReplyAction:(id)action;
- (id)scribeImpressionParameters;
- (void)focalStatusRowDidFirstDisplay;

@end

#endif /* T1ConversationFocalStatusTableRowAdapterDelegate_Protocol_h */
