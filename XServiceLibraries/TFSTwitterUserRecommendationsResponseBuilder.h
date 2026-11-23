//
#ifndef TFSTwitterUserRecommendationsResponseBuilder_h
#define TFSTwitterUserRecommendationsResponseBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject;

@interface TFSTwitterUserRecommendationsResponseBuilder : NSObject <TFSModel.TFSModelBuilder> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 userBuilder;
}

/* instance methods */
- (id)init;
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;
- (id)recommendationFromJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterUserRecommendationsResponseBuilder_h */
