//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCTwitterListDetailsComponentModel_h
#define TUCTwitterListDetailsComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentWithUsers-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSNumber, NSObject, NSString, TFSTwitterUser;

@interface TUCTwitterListDetailsComponentModel : NSObject <TUCComponentModel, TUCComponentWithUsers>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TFSTwitterUser *user;
@property (retain, nonatomic) NSNumber *memberCount;
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
- (id)initWithDestination:(id)destination name:(id)name memberCount:(id)count user:(id)user;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCTwitterListDetailsComponentModel_h */
