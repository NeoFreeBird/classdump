//
#ifndef OCFComponent_Protocol_h
#define OCFComponent_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFComponent <NSObject>

@required

/* class methods */
+ (id)componentTypeKey;
+ (long long)componentVersion;
+ (id)componentDataForDictionary:(id)dictionary error:(id *)error;
+ (id)alloc;
+ (id)componentDataForDictionary:(id)dictionary legacyPrimaryText:(id)text legacySecondaryText:(id)text error:(id *)error;

/* required instance methods */
- (id)initWithComponent:(id)component;
- (id)initWithIdentifier:(id)identifier data:(id)data;

@optional

@end

#endif /* OCFComponent_Protocol_h */
