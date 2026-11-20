//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIStatusesUpdateParameters_h
#define TFSTwitterAPIStatusesUpdateParameters_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSObject, NSString;

@interface TFSTwitterAPIStatusesUpdateParameters : NSObject <NSCopying>

@property (copy, nonatomic) NSString *status;
@property (retain, nonatomic) NSNumber *inReplyToStatusID;
@property (copy, nonatomic) NSArray *excludeReplyUserIDs;
@property (nonatomic) _Bool longform;
@property (retain, nonatomic) NSNumber *previousTweetId;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *placeID;
@property (copy, nonatomic) NSString *geotaggingMode;
@property (copy, nonatomic) NSString *geoSearchRequestID;
@property (copy, nonatomic) NSString *attachmentURL;
@property (copy, nonatomic) NSArray *mediaIDs;
@property (copy, nonatomic) NSDictionary *mediaTagsDictionary;
@property (copy, nonatomic) NSString *mediaTags;
@property (copy, nonatomic) NSString *cardURI;
@property (copy, nonatomic) NSString *impressionID;
@property (nonatomic) _Bool earned;
@property (copy, nonatomic) NSString *engagementMetadata;
@property (copy, nonatomic) NSString *semanticAnnotationIds;
@property (copy, nonatomic) NSString *periscopeBroadcastID;
@property (copy, nonatomic) NSString *periscopeBroadcastCreatorID;
@property (nonatomic) _Bool periscopeBroadcastIsLive;
@property (nonatomic) _Bool nudgeEnabled;
@property (copy, nonatomic) NSString *previousNudgeID;
@property (copy, nonatomic) NSArray *nudgeTypes;
@property (nonatomic) unsigned long long batchMode;
@property (nonatomic) unsigned long long conversationControlType;
@property (copy, nonatomic) NSArray *conversationControlTypes;
@property (copy, nonatomic) NSString *comparisonID;
@property (nonatomic) long long exclusiveTweetControlType;
@property (copy, nonatomic) NSArray *richTextTags;
@property (nonatomic) _Bool hasPaidPromotionDisclosure;
@property (nonatomic) _Bool hasAIGeneratedDisclosure;
@property (nonatomic) long long aiGeneratedDetectionSource;
@property (copy, nonatomic) NSArray *cashtagAttachmentOptions;
@property (retain, nonatomic) NSNumber *reactedToPostID;
@property (retain, nonatomic) NSNumber *reactedToUserID;

/* instance methods */
- (id)APIParameters;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isLongform;
- (_Bool)isEarned;
- (_Bool)isNudgeEnabled;

@end

#endif /* TFSTwitterAPIStatusesUpdateParameters_h */
