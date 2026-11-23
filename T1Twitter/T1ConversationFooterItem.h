//
#ifndef T1ConversationFooterItem_h
#define T1ConversationFooterItem_h
@import Foundation;

@class NSNumber, NSObject, NSString, TFSTwitterLocation, TFSTwitterPlace;

@interface T1ConversationFooterItem : NSObject

@property (copy, nonatomic) NSString *timeAgo;
@property (copy, nonatomic) NSString *accessibilityTimestamp;
@property (retain, nonatomic) TFSTwitterPlace *place;
@property (retain, nonatomic) TFSTwitterLocation *location;
@property (retain, nonatomic) NSNumber *viewCount;
@property (readonly, nonatomic) NSString *viewCountString;
@property (readonly, nonatomic) NSString *formattedViewCountString;
@property (nonatomic) _Bool isRankedTimelineTweet;
@property (nonatomic) _Bool includesTopPadding;
@property (nonatomic) _Bool showsConversationOwnerString;
@property (nonatomic) _Bool isEdited;

/* class methods */
+ (id)t1_conversationFooterItemWithViewModel:(id)model featureSwitches:(id)switches;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* T1ConversationFooterItem_h */
