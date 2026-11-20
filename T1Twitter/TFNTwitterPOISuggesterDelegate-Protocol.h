//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterPOISuggesterDelegate_Protocol_h
#define TFNTwitterPOISuggesterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterPOISuggesterDelegate <NSObject>

@required

/* required instance methods */
- (void)POISuggester:(id)poisuggester didCompleteWithPlaces:(id)places;

@optional

@end

#endif /* TFNTwitterPOISuggesterDelegate_Protocol_h */
