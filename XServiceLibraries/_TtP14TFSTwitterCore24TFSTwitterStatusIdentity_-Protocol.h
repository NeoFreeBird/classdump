//
#ifndef _TtP14TFSTwitterCore24TFSTwitterStatusIdentity__Protocol_h
#define _TtP14TFSTwitterCore24TFSTwitterStatusIdentity__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSDate, NSNumber, NSString;

@protocol TFSTwitterCore.TFSTwitterStatusIdentity <NSObject>

@required

@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) NSNumber *statusIDNumber;
@property (nonatomic, readonly) NSString *statusIDString;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSDate *comparableDate;
@property (nonatomic, readonly) long long fromUserID;
@property (nonatomic, readonly) NSString *fromUserFullName;
@property (nonatomic, readonly) NSString *fromUserName;
@property (nonatomic, readonly) long long inReplyToStatusID;
@property (nonatomic, readonly) long long inReplyToUserID;
@property (nonatomic, readonly) NSString *inReplyToUsername;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) long long selfThreadID;
@property (nonatomic, readonly) long long retweetID;
@property (nonatomic, readonly) long long quoteID;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *unifiedID;
@property (nonatomic, readonly) long long draftTweetID;
@property (nonatomic, readonly) _Bool isWithheld;
@property (nonatomic, readonly) _Bool isSelfThreadStatus;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSArray *unmentionedIDs;

@optional

@end

#endif /* _TtP14TFSTwitterCore24TFSTwitterStatusIdentity__Protocol_h */
