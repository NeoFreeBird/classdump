//
#ifndef GDTCORDirectorySizeTracker_h
#define GDTCORDirectorySizeTracker_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface GDTCORDirectorySizeTracker : NSObject

@property (readonly, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) NSNumber *cachedSizeBytes;

/* instance methods */
- (id)initWithDirectoryPath:(id)path;
- (unsigned long long)directoryContentSize;
- (void)fileWasAddedAtPath:(id)path withSize:(unsigned long long)size;
- (void)fileWasRemovedAtPath:(id)path withSize:(unsigned long long)size;
- (void)resetCachedSize;
- (unsigned long long)calculateDirectoryContentSize;
- (unsigned long long)fileSizeAtURL:(id)url;

@end

#endif /* GDTCORDirectorySizeTracker_h */
