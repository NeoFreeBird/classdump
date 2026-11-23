//
#ifndef NOZDecompressResult_h
#define NOZDecompressResult_h
@import Foundation;

@class NSArray, NSError, NSObject, NSString;

@interface NOZDecompressResult : NSObject

@property (readonly, copy, nonatomic) NSString *destinationDirectoryPath;
@property (readonly, copy, nonatomic) NSArray *destinationFiles;
@property (readonly, nonatomic) NSError *operationError;
@property (readonly, nonatomic) _Bool didSucceed;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long uncompressedSize;
@property (readonly, nonatomic) long long compressedSize;

/* instance methods */
- (float)compressionRatio;
- (id)description;

@end

#endif /* NOZDecompressResult_h */
