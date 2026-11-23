//
#ifndef TFSTwitterStatusBuilderWrapper_h
#define TFSTwitterStatusBuilderWrapper_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterStatusBuilderWrapper : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 statusBuilder;
}

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;
- (id)init;
- (id)statusWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterStatusBuilderWrapper_h */
