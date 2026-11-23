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
