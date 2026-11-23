//
#ifndef _TtP14TFSTwitterCore25TFSTwitterStatusScribable__Protocol_h
#define _TtP14TFSTwitterCore25TFSTwitterStatusScribable__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterScribeTweetDetailsItem.h"

@class NSDictionary, NSNumber, NSString;

@protocol TFSTwitterCore.TFSTwitterStatusScribable <NSObject>

@required

@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) NSDictionary *scribeItemForQuotedTweet;
@property (nonatomic, readonly) NSDictionary *scribeGuideDetails;
@property (nonatomic, readonly) NSDictionary *extraScribeItem;
@property (nonatomic, readonly) NSString *scribeElementAccountingForQuoteTweet;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSString *scribeItemFirstImpressionID;
@property (nonatomic, readonly) NSString *scribeItemContentID;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) TFSTwitterScribeTweetDetailsItem *tweetDetailsScribeItem;
@property (nonatomic, readonly) NSString *scribeReferringEvent;
@property (nonatomic, readonly) NSNumber *scribePercentScreenHeight;
@property (nonatomic, readonly) NSString *mediaScribeContentID;
@property (nonatomic, readonly) NSNumber *mediaScribePublisherID;
@property (nonatomic, readonly) NSNumber *mediaScribeType;
@property (nonatomic, readonly) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic, readonly) unsigned long long isCurrentlyFirstImpression;

@optional

@end

#endif /* _TtP14TFSTwitterCore25TFSTwitterStatusScribable__Protocol_h */
