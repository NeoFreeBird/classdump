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
