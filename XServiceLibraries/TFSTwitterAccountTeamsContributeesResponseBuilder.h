//
#ifndef TFSTwitterAccountTeamsContributeesResponseBuilder_h
#define TFSTwitterAccountTeamsContributeesResponseBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterAccountTeamsContributeesResponseBuilder : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 userBuilder;
    B24@0:8@"NSString"16 accountUserBuilder;
}

/* instance methods */
- (id)init;
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterAccountTeamsContributeesResponseBuilder_h */
