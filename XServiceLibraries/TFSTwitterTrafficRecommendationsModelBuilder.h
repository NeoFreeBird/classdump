//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTrafficRecommendationsModelBuilder_h
#define TFSTwitterTrafficRecommendationsModelBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterTrafficRecommendationsModelBuilder : NSObject <TFSModel.TFSModelBuilder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterTrafficRecommendationsModelBuilder_h */
