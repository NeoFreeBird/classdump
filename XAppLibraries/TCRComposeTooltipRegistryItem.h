//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRComposeTooltipRegistryItem_h
#define TCRComposeTooltipRegistryItem_h
@import Foundation;

#include "TCRComposeTooltipConfiguration.h"

@class NSObject, NSString;

@interface TCRComposeTooltipRegistryItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TCRComposeTooltipConfiguration *config;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier config:(id)config;

@end

#endif /* TCRComposeTooltipRegistryItem_h */
