//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADExtras_h
#define GADExtras_h
@import Foundation;

#include "GADAdNetworkExtras-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface GADExtras : NSObject <GADAdNetworkExtras>

@property (readonly, nonatomic) NSDictionary *JSONSafeAdditionalParameters;
@property (copy, nonatomic) NSDictionary *additionalParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* GADExtras_h */
