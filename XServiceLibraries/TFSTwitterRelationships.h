//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
