//
#ifndef _TtP14TFSTwitterCore25TFSTwitterStatusCommunity__Protocol_h
#define _TtP14TFSTwitterCore25TFSTwitterStatusCommunity__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTweetCommunityRelationship.h"
#include "TFSTwitterCommunityMembership.h"
#include "TFSTwitterCommunityReference.h"
#include "TFSTwitterUserCommunityRelationshipRole.h"

@class NSString;

@protocol TFSTwitterCore.TFSTwitterStatusCommunity <NSObject>

@required

@property (nonatomic, readonly) NSString *communityID;
@property (nonatomic, readonly) TFSTwitterCommunityReference *communityReference;
@property (nonatomic, readonly) TFSTwitterCommunityMembership *communityMembership;
@property (nonatomic, retain) TFSTweetCommunityRelationship *communityRelationship;
@property (nonatomic, readonly) TFSTwitterUserCommunityRelationshipRole *authorCommunityRelationship;
@property (nonatomic) _Bool hasModeratedReplies;

@optional

@end

#endif /* _TtP14TFSTwitterCore25TFSTwitterStatusCommunity__Protocol_h */
