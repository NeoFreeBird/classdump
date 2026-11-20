//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRelationshipCreateResults_h
#define TFSTwitterRelationshipCreateResults_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterRelationshipCreateResults : NSObject

@property (readonly, nonatomic) NSArray *resultsArray;

/* instance methods */
- (id)initWithResultsArray:(id)array;
- (id)init;

@end

#endif /* TFSTwitterRelationshipCreateResults_h */
