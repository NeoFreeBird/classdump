//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
