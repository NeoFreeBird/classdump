//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTStateArchiver_h
#define TLTStateArchiver_h
@import Foundation;

@class NSObject;

@interface TLTStateArchiver : NSObject

/* class methods */
+ (id)unarchiverDelegate;
+ (void)setUnarchiverDelegate:(id)delegate;
+ (_Bool)archiveObject:(id)object toFile:(id)file;
+ (_Bool)archiveObject:(id)object toFile:(id)file dataWritingOptions:(unsigned long long)options;
+ (_Bool)archiveObject:(id)object toFile:(id)file didEncodeObject:(id /* block */)object;
+ (_Bool)_writeArchivedData:(id)data toFile:(id)file dataWritingOptions:(unsigned long long)options;
+ (id)unarchivedObjectWithFile:(id)file loadingSentinelType:(long long)type;
+ (id)unarchivedObjectWithFile:(id)file loadingSentinelType:(long long)type didDecodeObject:(id /* block */)object;
+ (id)_unarchivedObjectWithFile:(id)file loadingSentinelType:(long long)type unarchiverDelegate:(id)delegate;

@end

#endif /* TLTStateArchiver_h */
