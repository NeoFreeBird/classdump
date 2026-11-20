//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCS2TwitterUserBuilder_h
#define TFSCS2TwitterUserBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSCS2TwitterUserBuilder : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 userDesignatorInfoBuilder;
    B24@0:8@"NSString"16 checkEmptyUserName;
    B24@0:8@"NSString"16 updatedTimestamp;
}

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;
- (id)userWithJSONDictionary:(id)jsondictionary;
- (id)init;
- (id)initWithCheckEmptyUserName:(_Bool)name date:(id)date;

@end

#endif /* TFSCS2TwitterUserBuilder_h */
