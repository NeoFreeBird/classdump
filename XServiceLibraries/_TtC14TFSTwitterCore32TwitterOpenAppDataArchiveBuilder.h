//
#ifndef _TtC14TFSTwitterCore32TwitterOpenAppDataArchiveBuilder_h
#define _TtC14TFSTwitterCore32TwitterOpenAppDataArchiveBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterCore.TwitterOpenAppDataArchiveBuilder : NSObject <TFSModel.TFSModelBuilder> // (Swift)

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore32TwitterOpenAppDataArchiveBuilder_h */
