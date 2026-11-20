//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsScribeClientEventParametersBuilder_h
#define TAVAnalyticsScribeClientEventParametersBuilder_h
@import Foundation;

#include "TAVAnalyticsScribeClientEventParametersBuilder-Protocol.h"

@class NSObject, NSString;

@interface TAVAnalyticsScribeClientEventParametersBuilder : NSObject <TAVAnalyticsScribeClientEventParametersBuilder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)scribeParametersForEvent:(id)event playlistMetadata:(id)metadata;

@end

#endif /* TAVAnalyticsScribeClientEventParametersBuilder_h */
