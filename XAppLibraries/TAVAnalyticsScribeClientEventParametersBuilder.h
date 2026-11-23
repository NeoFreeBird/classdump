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
