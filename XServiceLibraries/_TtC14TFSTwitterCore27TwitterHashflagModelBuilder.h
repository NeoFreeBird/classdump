//
#ifndef _TtC14TFSTwitterCore27TwitterHashflagModelBuilder_h
#define _TtC14TFSTwitterCore27TwitterHashflagModelBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, TFSTwitterCore.TwitterHashflagKeys;

@interface TFSTwitterCore.TwitterHashflagModelBuilder : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    TFSTwitterCore.TwitterHashflagKeys keys;
}

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore27TwitterHashflagModelBuilder_h */
