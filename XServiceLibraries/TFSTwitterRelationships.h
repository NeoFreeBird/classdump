//
#ifndef TFSTwitterRelationships_h
#define TFSTwitterRelationships_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterRelationships : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *relationshipsArray;

/* instance methods */
- (id)initWithRelationshipsArray:(id)array;
- (id)init;

@end

#endif /* TFSTwitterRelationships_h */
