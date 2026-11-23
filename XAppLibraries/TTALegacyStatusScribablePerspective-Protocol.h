//
#ifndef TTALegacyStatusScribablePerspective_Protocol_h
#define TTALegacyStatusScribablePerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@protocol TTALegacyStatusScribablePerspective <TAPTweet.TAPTweetPerspective>

@required

/* required instance methods */
- (id)scribeItem;
- (id)scribeParameters;
- (id)scribeElementAccountingForQuoteTweet;
- (id)scribeItemForQuotedTweet;

@optional

@end

#endif /* TTALegacyStatusScribablePerspective_Protocol_h */
