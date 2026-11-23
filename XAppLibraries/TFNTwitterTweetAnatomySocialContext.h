//
#ifndef TFNTwitterTweetAnatomySocialContext_h
#define TFNTwitterTweetAnatomySocialContext_h
@import Foundation;

#include "TFNTwitterStatusSocialContext-Protocol.h"

@class NSArray, NSObject, NSString, TFSURTRichText;

@interface TFNTwitterTweetAnatomySocialContext : NSObject <TFNTwitterStatusSocialContext>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) TFSURTRichText *bannerText;
@property (readonly, nonatomic) TFSURTRichText *linkText;
@property (readonly, nonatomic) NSString *socialBadgeName;
@property (readonly, nonatomic) NSString *activityName;
@property (readonly, nonatomic) NSArray *allUserReferences;
@property (readonly, nonatomic) NSString *activityTitle;
@property (readonly, nonatomic) NSString *activityPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)statusHasNonConversationTweetAnatomySocialContext:(id)context;
+ (id)canonicalSocialContextForStatus:(id)status fromUserReference:(id)reference viewerUserID:(long long)id;
+ (id)socialContextForStatus:(id)status viewerUserID:(long long)id;

/* instance methods */
- (id)initWithBannerText:(id)text linkText:(id)text socialBadgeName:(id)name allUserReferences:(id)references socialContextType:(long long)type;
- (long long)contextType;
- (id)landingURL;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNTwitterTweetAnatomySocialContext_h */
