//
#ifndef TAVAnalyticsScribeClientEventParametersBuilder_Protocol_h
#define TAVAnalyticsScribeClientEventParametersBuilder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVAnalyticsScribeClientEventParametersBuilder <NSObject>

@required

/* required instance methods */
- (id)scribeParametersForEvent:(id)event playlistMetadata:(id)metadata;

@optional

@end

#endif /* TAVAnalyticsScribeClientEventParametersBuilder_Protocol_h */
