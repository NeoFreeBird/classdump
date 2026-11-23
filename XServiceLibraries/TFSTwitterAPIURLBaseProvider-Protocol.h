//
#ifndef TFSTwitterAPIURLBaseProvider_Protocol_h
#define TFSTwitterAPIURLBaseProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPIURLBaseProvider <NSObject>

@required

/* required instance methods */
- (id)baseURLStringForBaseURLType:(unsigned long long)urltype endpointPath:(id)path;

@optional

@end

#endif /* TFSTwitterAPIURLBaseProvider_Protocol_h */
