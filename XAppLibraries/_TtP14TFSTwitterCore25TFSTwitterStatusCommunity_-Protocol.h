//
#ifndef _TtP14TFSTwitterCore25TFSTwitterStatusCommunity__Protocol_h
#define _TtP14TFSTwitterCore25TFSTwitterStatusCommunity__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, TFSTweetCommunityRelationship, TFSTwitterCommunityMembership, TFSTwitterCommunityReference, TFSTwitterUserCommunityRelationshipRole;

@protocol TFSTwitterCore.TFSTwitterStatusCommunity <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *communityID;
@property (readonly, nonatomic) TFSTwitterCommunityReference *communityReference;
@property (readonly, nonatomic) TFSTwitterCommunityMembership *communityMembership;
@property (retain, nonatomic) TFSTweetCommunityRelationship *communityRelationship;
@property (readonly, nonatomic) TFSTwitterUserCommunityRelationshipRole *authorCommunityRelationship;
@property (nonatomic) _Bool hasModeratedReplies;

@optional

@end

#endif /* _TtP14TFSTwitterCore25TFSTwitterStatusCommunity__Protocol_h */
