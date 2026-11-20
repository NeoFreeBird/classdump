//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentModel_Protocol_h
#define TUCComponentModel_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSArray, TUCDestinationModel;

@protocol TUCComponentModel <NSObject, NSCopying>

@required

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) TUCDestinationModel *destination;
@property (nonatomic, readonly) NSArray *axDestinations;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* required instance methods */
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;

@optional

@end

#endif /* TUCComponentModel_Protocol_h */
