//
#ifndef TUCFacepileComponentModel_h
#define TUCFacepileComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentWithUsers-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSObject, NSString;

@interface TUCFacepileComponentModel : NSObject <TUCComponentModel, TUCComponentWithUsers>

@property (readonly, nonatomic) NSArray *users;
@property (readonly, nonatomic) unsigned long long totalUserCount;
@property (readonly, nonatomic) unsigned long long relationshipType;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *allUsers;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;
+ (unsigned long long)relationshipTypeForString:(id)string;

/* instance methods */
- (id)initWithUsers:(id)users totalUserCount:(unsigned long long)count relationshipType:(unsigned long long)type destination:(id)destination;
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCFacepileComponentModel_h */
