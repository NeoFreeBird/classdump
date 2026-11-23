//
#ifndef TFCCardDataSourceObject_Protocol_h
#define TFCCardDataSourceObject_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSNumber, NSString;
@protocol _TtP8TAPTweet19TAPTweetPerspective_;

@protocol TFCCardDataSourceObject <NSObject>

@required

@property (nonatomic, readonly) NSNumber *sourceID;
@property (nonatomic, readonly) long long senderID;
@property (nonatomic, readonly) NSString *senderDisplayUsername;
@property (nonatomic, readonly) NSString *senderDisplayFullName;
@property (nonatomic, readonly) id <TAPTweet.TAPTweetPerspective> tweet;

@optional

@end

#endif /* TFCCardDataSourceObject_Protocol_h */
