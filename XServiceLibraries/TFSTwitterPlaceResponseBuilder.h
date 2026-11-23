//
#ifndef TFSTwitterPlaceResponseBuilder_h
#define TFSTwitterPlaceResponseBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterPlaceResponseBuilder : NSObject <TFSModel.TFSModelBuilder> // (Swift)

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterPlaceResponseBuilder_h */
