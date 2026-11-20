//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCViewRegistryProtocol_Protocol_h
#define TUCViewRegistryProtocol_Protocol_h
@import Foundation;

#include "TUCComponentViewRegistry-Protocol.h"

@protocol TUCViewRegistryProtocol <TUCComponentViewRegistry>

@required

/* required instance methods */
- (id)viewForContainer:(id)container unifiedCard:(id)card reusableViews:(id)views eventDelegate:(id)delegate;
- (id)layoutDelegateForContainer:(id)container;

@optional

@end

#endif /* TUCViewRegistryProtocol_Protocol_h */
