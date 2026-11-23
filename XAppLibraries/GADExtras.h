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
