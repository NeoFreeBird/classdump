//
#ifndef TFSTwitterAPIURLBaseProvider_h
#define TFSTwitterAPIURLBaseProvider_h
@import Foundation;

#include "TFSTwitterAPIURLBaseProvider-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterAPIURLBaseProvider : NSObject <TFSTwitterAPIURLBaseProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)baseURLStringForBaseURLType:(unsigned long long)urltype endpointPath:(id)path;

@end

#endif /* TFSTwitterAPIURLBaseProvider_h */
