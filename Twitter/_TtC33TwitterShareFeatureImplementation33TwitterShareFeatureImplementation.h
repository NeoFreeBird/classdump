//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC33TwitterShareFeatureImplementation33TwitterShareFeatureImplementation_h
#define _TtC33TwitterShareFeatureImplementation33TwitterShareFeatureImplementation_h
@import Foundation;

#include "TFSTwitterFeature-Protocol.h"

@class NSString, _$sSS, _TtCs12_SwiftObject;

@interface TwitterShareFeatureImplementation.TwitterShareFeatureImplementation : Swift._SwiftObject <TFSTwitterFeature> // (Swift)

@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (void)removedAccountWithAccountID:(id)id;
- (id)accountScopedFeatureWithAccountContext:(id)context;

@end

#endif /* _TtC33TwitterShareFeatureImplementation33TwitterShareFeatureImplementation_h */
