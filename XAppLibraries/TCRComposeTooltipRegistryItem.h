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
