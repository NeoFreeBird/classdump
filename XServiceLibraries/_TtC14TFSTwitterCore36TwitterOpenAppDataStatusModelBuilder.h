//
#ifndef _TtC14TFSTwitterCore36TwitterOpenAppDataStatusModelBuilder_h
#define _TtC14TFSTwitterCore36TwitterOpenAppDataStatusModelBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, _$sSo22NSISO8601DateFormatterCSg;

@interface TFSTwitterCore.TwitterOpenAppDataStatusModelBuilder : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    __C.NSISO8601DateFormatter? $__lazy_storage_$_dateFormatter;
}

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore36TwitterOpenAppDataStatusModelBuilder_h */
