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
