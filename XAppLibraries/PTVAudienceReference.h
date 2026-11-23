//
#ifndef PTVAudienceReference_h
#define PTVAudienceReference_h
@import Foundation;

#include "PTVAmplifyProgram.h"

@class NSArray, NSObject, NSString, NSURL;

@interface PTVAudienceReference : NSObject

@property (retain, nonatomic) PTVAmplifyProgram *amplifyProgram;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) _Bool isPublic;
@property (readonly, nonatomic) _Bool isPublicHidden;
@property (readonly, nonatomic) _Bool isPrivate;
@property (readonly, nonatomic) _Bool isGroupBroadcast;
@property (nonatomic) _Bool didCreateNewChannel;
@property (readonly, nonatomic) NSArray *userIDs;
@property (readonly, nonatomic) NSArray *channelIDs;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *displayNames;
@property (readonly, nonatomic) NSString *profileImageURLString;
@property (readonly, nonatomic) NSURL *profileImageURL;

/* class methods */
+ (id)PublicAudience;
+ (id)PublicAudienceWithAmplifyProgram:(id)program;
+ (id)PrivateAudienceWithAllMutualFollowers;
+ (id)AudienceWithUsers:(id)users Channels:(id)channels;
+ (id)itemsInArray:(id)array withRemoteIDs:(id)ids;

/* instance methods */
- (id)init;
- (id)initWithType:(unsigned long long)type displayNames:(id)names profileImageURLString:(id)urlstring userIDs:(id)ids channelIDs:(id)ids;
- (void)removeAmplifyProgram;
- (id)audienceReferenceByResolvingAgainstMutualFollowers:(id)followers channels:(id)channels;

@end

#endif /* PTVAudienceReference_h */
