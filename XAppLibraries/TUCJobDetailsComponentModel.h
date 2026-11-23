//
#ifndef TUCJobDetailsComponentModel_h
#define TUCJobDetailsComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSNumber, NSObject, NSString, TFSTwitterUser;

@interface TUCJobDetailsComponentModel : NSObject <TUCComponentModel>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSNumber *salaryMin;
@property (readonly, nonatomic) NSNumber *salaryMax;
@property (readonly, nonatomic) NSNumber *salaryInterval;
@property (readonly, nonatomic) NSString *formattedSalary;
@property (readonly, nonatomic) NSString *employmentType;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) TFSTwitterUser *owner;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;
+ (id)conditionallyApplyPromotedContentClickID:(id)id toDestination:(id)destination;

/* instance methods */
- (id)initWithDestination:(id)destination title:(id)title location:(id)location salaryMin:(id)min salaryMax:(id)max salaryInterval:(id)interval formattedSalary:(id)salary employmentType:(id)type shortDescription:(id)description owner:(id)owner;
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCJobDetailsComponentModel_h */
