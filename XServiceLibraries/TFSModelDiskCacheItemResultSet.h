//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelDiskCacheItemResultSet_h
#define TFSModelDiskCacheItemResultSet_h
@import Foundation;

@class NSData, NSObject, NSSet;

@interface TFSModelDiskCacheItemResultSet : NSObject

@property (readonly, nonatomic) long long retentionReason;
@property (readonly, nonatomic) long long usageTimestamp;
@property (readonly, nonatomic) long long codecIdentifier;
@property (readonly, nonatomic) NSData *archivedObjectData;
@property (readonly, nonatomic) NSSet *ownedKeys;

/* instance methods */
- (id)initWithRetentionReason:(id)reason usageTimestamp:(id)timestamp codecIdentifier:(id)identifier archivedObjectData:(id)data ownedKeys:(id)keys;

@end

#endif /* TFSModelDiskCacheItemResultSet_h */
