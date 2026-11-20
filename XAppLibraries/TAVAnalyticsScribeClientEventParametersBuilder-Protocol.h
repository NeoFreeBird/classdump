//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
