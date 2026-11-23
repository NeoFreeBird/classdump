//
#ifndef TUCProfileComponentModel_h
#define TUCProfileComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentWithUsers-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSObject, NSString, TFSTwitterUser;

@interface TUCProfileComponentModel : NSObject <TUCComponentModel, TUCComponentWithUsers>

@property (readonly, nonatomic) TFSTwitterUser *user;
@property (readonly, copy, nonatomic) NSString *socialContextString;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *allUsers;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* instance methods */
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (id)initWithDestination:(id)destination user:(id)user socialContextString:(id)string;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCProfileComponentModel_h */
