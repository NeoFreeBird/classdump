//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchesServiceScriber_Protocol_h
#define TFSFeatureSwitchesServiceScriber_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSFeatureSwitchesServiceScriber <NSObject>

@required

/* required instance methods */
- (void)scribeAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element accountID:(id)id;

@optional

@end

#endif /* TFSFeatureSwitchesServiceScriber_Protocol_h */
