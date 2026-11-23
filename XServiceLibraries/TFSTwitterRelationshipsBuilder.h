//
#ifndef TFSTwitterRelationshipsBuilder_h
#define TFSTwitterRelationshipsBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterRelationshipsBuilder : NSObject <TFSModel.TFSModelBuilder> // (Swift)

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterRelationshipsBuilder_h */
