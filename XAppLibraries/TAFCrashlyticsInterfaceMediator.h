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
