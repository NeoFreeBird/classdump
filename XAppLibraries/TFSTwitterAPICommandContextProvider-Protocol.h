//
#ifndef TFSTwitterAPICommandContextProvider_Protocol_h
#define TFSTwitterAPICommandContextProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPICommandContextProvider <NSObject>

@required

/* required instance methods */
- (id)apiCommandContextWithAPIConfiguration:(id)apiconfiguration scribeIntegration:(id)integration;

@optional

@end

#endif /* TFSTwitterAPICommandContextProvider_Protocol_h */
