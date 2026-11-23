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
