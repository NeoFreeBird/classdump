//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRelationshipDestroyResults_h
#define TFSTwitterRelationshipDestroyResults_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterRelationshipDestroyResults : NSObject

@property (readonly, nonatomic) NSArray *resultsArray;

/* instance methods */
- (id)initWithResultsArray:(id)array;
- (id)init;

@end

#endif /* TFSTwitterRelationshipDestroyResults_h */
