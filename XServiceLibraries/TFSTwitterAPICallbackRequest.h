//
#ifndef TFSTwitterAPICallbackRequest_h
#define TFSTwitterAPICallbackRequest_h
@import Foundation;

#include "TFSTwitterAPIVersionedCallbackRequest.h"

@interface TFSTwitterAPICallbackRequest : TFSTwitterAPIVersionedCallbackRequest

/* class methods */
+ (id)private_stripVersionFromPath:(id)path;
+ (unsigned long long)baseURLType;

/* instance methods */
- (id)initWithEndpointPath:(id)path context:(id)context;

@end

#endif /* TFSTwitterAPICallbackRequest_h */
