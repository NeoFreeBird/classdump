//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAccountFeaturePreferencesCoding_Protocol_h
#define TFSAccountFeaturePreferencesCoding_Protocol_h
@import Foundation;

#include "TFSAccountIdentifiable-Protocol.h"

@protocol TFSAccountFeaturePreferencesCoding <TFSAccountIdentifiable>

@required

/* required instance methods */
- (id)encode:(id)encode;
- (id)decode:(id)decode;

@optional

@end

#endif /* TFSAccountFeaturePreferencesCoding_Protocol_h */
