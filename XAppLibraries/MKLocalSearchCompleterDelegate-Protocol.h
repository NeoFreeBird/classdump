//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef MKLocalSearchCompleterDelegate_Protocol_h
#define MKLocalSearchCompleterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol MKLocalSearchCompleterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)completerDidUpdateResults:(id)results;
- (void)completer:(id)completer didFailWithError:(id)error;

@end

#endif /* MKLocalSearchCompleterDelegate_Protocol_h */
