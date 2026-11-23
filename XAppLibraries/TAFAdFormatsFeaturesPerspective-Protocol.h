//
#ifndef TAFAdFormatsFeaturesPerspective_Protocol_h
#define TAFAdFormatsFeaturesPerspective_Protocol_h
@import Foundation;

#include "TFNTwitterUser.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@protocol TAFAdFormatsFeaturesPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (retain, nonatomic) TFNTwitterUser *fromUser;
@property (readonly, nonatomic) id <TAFAdFormatsFeaturesPerspective> representedStatus;

/* required instance methods */
- (id)entityForURL:(id)url;

@optional

@end

#endif /* TAFAdFormatsFeaturesPerspective_Protocol_h */
