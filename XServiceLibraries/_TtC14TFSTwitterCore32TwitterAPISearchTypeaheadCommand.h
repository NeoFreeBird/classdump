//
#ifndef _TtC14TFSTwitterCore32TwitterAPISearchTypeaheadCommand_h
#define _TtC14TFSTwitterCore32TwitterAPISearchTypeaheadCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class Swift.Bool, _$s10Foundation4DateVMn ?, _$sSSSg, _$sSo8NSNumberCSg, __C.TFSTwitterAPISearchTypeaheadRequestResultType, __C.TFSTwitterAPISearchTypeaheadRequestSourceType, __C.TFSTwitterAPISearchTypeaheadRequestTopicType;

@interface TFSTwitterCore.TwitterAPISearchTypeaheadCommand : TFSTwitterAPICommand { // (Swift)
    /* instance variables */
    __C.TFSTwitterAPISearchTypeaheadRequestResultType resultType;
    Swift.String? query;
    __C.NSNumber? count;
    __C.TFSTwitterAPISearchTypeaheadRequestSourceType sourceType;
    Swift.Bool prefetch;
    Swift.Bool mediaTaggingInPrefetch;
    nominal type descriptor for Foundation.Date ? usersCacheAge;
    Swift.Bool geoRequestFilter;
    Swift.String? contextText;
    __C.TFSTwitterAPISearchTypeaheadRequestTopicType topicType;
    Swift.String? communityId;
}

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;

@end

#endif /* _TtC14TFSTwitterCore32TwitterAPISearchTypeaheadCommand_h */
