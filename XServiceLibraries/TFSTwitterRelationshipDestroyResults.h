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
