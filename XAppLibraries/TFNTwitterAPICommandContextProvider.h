//
#ifndef TFNTwitterAPICommandContextProvider_h
#define TFNTwitterAPICommandContextProvider_h
@import Foundation;

#include "TFSTwitterAPICommandContextProvider-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterAPICommandContextProvider : NSObject <TFSTwitterAPICommandContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)apiCommandContextWithAPIConfiguration:(id)apiconfiguration scribeIntegration:(id)integration;

@end

#endif /* TFNTwitterAPICommandContextProvider_h */
