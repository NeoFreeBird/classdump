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
