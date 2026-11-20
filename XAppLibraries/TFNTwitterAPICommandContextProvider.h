//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
