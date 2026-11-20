//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFCrashlyticsInterfaceMediator_h
#define TAFCrashlyticsInterfaceMediator_h
@import Foundation;

#include "TAFCrashlyticsInterface-Protocol.h"

@class NSObject;

@interface TAFCrashlyticsInterfaceMediator : NSObject <TAFCrashlyticsInterface> // (Swift)

/* instance methods */
- (void)recordError:(id)error customKeysAndValues:(id)values;
- (id)init;

@end

#endif /* TAFCrashlyticsInterfaceMediator_h */
