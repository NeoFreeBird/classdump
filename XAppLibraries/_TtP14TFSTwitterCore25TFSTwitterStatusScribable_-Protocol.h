//
#ifndef _TtP14TFSTwitterCore25TFSTwitterStatusScribable__Protocol_h
#define _TtP14TFSTwitterCore25TFSTwitterStatusScribable__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString, TFSTwitterScribeTweetDetailsItem;

@protocol TFSTwitterCore.TFSTwitterStatusScribable <NSObject>

@required

@property (readonly, copy, nonatomic) NSDictionary *scribeParameters;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, copy, nonatomic) NSDictionary *scribeItemForQuotedTweet;
@property (readonly, copy, nonatomic) NSDictionary *scribeGuideDetails;
@property (readonly, copy, nonatomic) NSDictionary *extraScribeItem;
@property (readonly, copy, nonatomic) NSString *scribeElementAccountingForQuoteTweet;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, nonatomic) TFSTwitterScribeTweetDetailsItem *tweetDetailsScribeItem;
@property (readonly, copy, nonatomic) NSString *scribeReferringEvent;
@property (readonly, nonatomic) NSNumber *scribePercentScreenHeight;
@property (readonly, copy, nonatomic) NSString *mediaScribeContentID;
@property (readonly, nonatomic) NSNumber *mediaScribePublisherID;
@property (readonly, nonatomic) NSNumber *mediaScribeType;
@property (readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;

@optional

@end

#endif /* _TtP14TFSTwitterCore25TFSTwitterStatusScribable__Protocol_h */
