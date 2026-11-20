//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVVideoAnalyticsBuilder_h
#define TAVVideoAnalyticsBuilder_h
@import Foundation;

#include "TAVAnalyticsScribeClientEventParametersBuilder.h"

@interface TAVVideoAnalyticsBuilder : TAVAnalyticsScribeClientEventParametersBuilder // (Swift)

/* instance methods */
- (id)scribeParametersForEvent:(id)event playlistMetadata:(id)metadata;
- (id)init;

@end

#endif /* TAVVideoAnalyticsBuilder_h */
