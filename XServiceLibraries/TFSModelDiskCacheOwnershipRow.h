//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelDiskCacheOwnershipRow_h
#define TFSModelDiskCacheOwnershipRow_h
@import Foundation;

@class NSNumber, NSObject;

@interface TFSModelDiskCacheOwnershipRow : NSObject

@property (readonly, nonatomic) NSNumber *ownerItemId;
@property (readonly, nonatomic) NSNumber *ownedItemId;

/* instance methods */
- (id)initWithOwnerItemId:(id)id ownedItemId:(id)id;

@end

#endif /* TFSModelDiskCacheOwnershipRow_h */
