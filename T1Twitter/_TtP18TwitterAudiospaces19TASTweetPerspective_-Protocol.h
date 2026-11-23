//
#ifndef _TtP18TwitterAudiospaces19TASTweetPerspective__Protocol_h
#define _TtP18TwitterAudiospaces19TASTweetPerspective__Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSNumber;

@protocol TwitterAudiospaces.TASTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) long long displayReplyCount;
@property (nonatomic, readonly) NSNumber *statusIDNumber;

@optional

@end

#endif /* _TtP18TwitterAudiospaces19TASTweetPerspective__Protocol_h */
