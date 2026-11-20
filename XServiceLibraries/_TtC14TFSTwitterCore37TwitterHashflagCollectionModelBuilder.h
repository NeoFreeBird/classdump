//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore37TwitterHashflagCollectionModelBuilder_h
#define _TtC14TFSTwitterCore37TwitterHashflagCollectionModelBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, TFSTwitterCore.TwitterHashflagModelBuilder, _$s10Foundation4DateVMn, _$sSS;

@interface TFSTwitterCore.TwitterHashflagCollectionModelBuilder : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    Swift.String configVersion;
    nominal type descriptor for Foundation.Date lastRefreshedAt;
    TFSTwitterCore.TwitterHashflagModelBuilder hashflagBuilder;
}

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore37TwitterHashflagCollectionModelBuilder_h */
