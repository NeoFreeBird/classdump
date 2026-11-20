//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterCardResponseBuilder_h
#define TFSTwitterCardResponseBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterCardResponseBuilder : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cardBuilder;
}

/* instance methods */
- (id)init;
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterCardResponseBuilder_h */
