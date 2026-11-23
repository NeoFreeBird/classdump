//
#ifndef NOZCompressRequest_h
#define NOZCompressRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString;

@interface NOZCompressRequest : NSObject <NSCopying> {
    /* instance variables */
    NSMutableArray *_mutableEntries;
}

@property (copy, nonatomic) NSString *destinationPath;
@property (copy, nonatomic) NSArray *entries;
@property (readonly, nonatomic) long long totalSizeOfUncompressedEntries;
@property (copy, nonatomic) NSString *comment;

/* instance methods */
- (id)init;
- (id)initWithDestinationPath:(id)path;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addEntry:(id)entry;
- (void)addEntriesInDirectory:(id)directory compressionSelectionBlock:(id /* block */)block;
- (void)addEntriesInDirectory:(id)directory filterBlock:(id /* block */)block compressionSelectionBlock:(id /* block */)block;
- (void)addFileEntry:(id)entry;
- (void)addFileEntry:(id)entry name:(id)name;
- (void)addDataEntry:(id)entry name:(id)name;
- (id)description;

@end

#endif /* NOZCompressRequest_h */
