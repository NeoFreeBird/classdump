//
#ifndef TFSTwitterLiveEventMetadataBuilder_h
#define TFSTwitterLiveEventMetadataBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterLiveEventMetadataBuilder : NSObject <TFSModel.TFSModelBuilder> // (Swift)

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterLiveEventMetadataBuilder_h */
