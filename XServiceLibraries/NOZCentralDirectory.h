//
#ifndef NOZCentralDirectory_h
#define NOZCentralDirectory_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface NOZCentralDirectory : NSObject {
    /* instance variables */
    long long _endOfCentralDirectoryRecordPosition;
    struct _NOZEndOfCentralDirectoryRecordT { unsigned short diskNumber; unsigned short startDiskNumber; unsigned short recordCountForDisk; unsigned short totalRecordCount; unsigned int centralDirectorySize; unsigned int archiveStartToCentralDirectoryStartOffset; unsigned short commentSize; } _endOfCentralDirectoryRecord;
    NSArray *_records;
    long long _lastCentralDirectoryRecordEndPosition;
}

@property (readonly, copy, nonatomic) NSString *globalComment;
@property (readonly, nonatomic) unsigned long long recordCount;
@property (readonly, nonatomic) long long totalCompressedSize;
@property (readonly, nonatomic) long long totalUncompressedSize;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithKnownFileSize:(long long)size;

@end

#endif /* NOZCentralDirectory_h */
