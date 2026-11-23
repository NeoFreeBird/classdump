//
#ifndef GDTCORStorageMetadata_h
#define GDTCORStorageMetadata_h
@import Foundation;

@class NSObject;

@interface GDTCORStorageMetadata : NSObject

@property (readonly, nonatomic) unsigned long long currentCacheSize;
@property (readonly, nonatomic) unsigned long long maxCacheSize;

/* class methods */
+ (id)metadataWithCurrentCacheSize:(unsigned long long)size maxCacheSize:(unsigned long long)size;

/* instance methods */
- (id)initWithCurrentCacheSize:(unsigned long long)size maxCacheSize:(unsigned long long)size;

@end

#endif /* GDTCORStorageMetadata_h */
