//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCCommunityDetailsComponentModel_h
#define TUCCommunityDetailsComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface TUCCommunityDetailsComponentModel : NSObject <TUCComponentModel>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *memberCount;
@property (readonly, nonatomic) NSArray *membersFacepile;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* instance methods */
- (id)initWithDestination:(id)destination name:(id)name memberCount:(id)count membersFacepile:(id)facepile;
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCCommunityDetailsComponentModel_h */
