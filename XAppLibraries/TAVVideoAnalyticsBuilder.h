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
