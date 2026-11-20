//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRelationshipBuilder_h
#define TFSTwitterRelationshipBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterRelationshipBuilder : NSObject <TFSModel.TFSModelBuilder> // (Swift)

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)relationshipWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterRelationshipBuilder_h */
