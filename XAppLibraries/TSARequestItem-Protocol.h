//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSARequestItem_Protocol_h
#define TSARequestItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TSAUsageDescription.h"

@protocol TSARequestItem <NSObject>

@required

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) TSAUsageDescription *usageDescription;
@property (readonly, nonatomic) long long requestCount;
@property (readonly, nonatomic) long long requestSource;

/* required instance methods */
- (void)notNow:(id)now;
- (void)never:(id)never;
- (void)accept:(id)accept;
- (void)acceptWithoutPresentation:(id)presentation;

@optional

@end

#endif /* TSARequestItem_Protocol_h */
