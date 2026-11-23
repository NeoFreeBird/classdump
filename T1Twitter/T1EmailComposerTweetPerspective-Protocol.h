//
#ifndef T1EmailComposerTweetPerspective_Protocol_h
#define T1EmailComposerTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@protocol T1EmailComposerTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

/* required instance methods */
- (id)emailSubject;
- (id)emailBody;

@optional

@end

#endif /* T1EmailComposerTweetPerspective_Protocol_h */
