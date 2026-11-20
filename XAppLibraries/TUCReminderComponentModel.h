//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCReminderComponentModel_h
#define TUCReminderComponentModel_h
@import Foundation;

#include "TUCDestinationModel.h"
#include "TUCDetailsAdaptable-Protocol.h"
#include "TUCReminderData.h"

@class NSArray, NSObject, NSString;

@interface TUCReminderComponentModel : NSObject <TUCDetailsAdaptable>

@property (readonly, nonatomic) TUCReminderData *data;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
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
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (id)initWithData:(id)data destination:(id)destination;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCReminderComponentModel_h */
