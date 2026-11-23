//
#ifndef NOZCompressResult_h
#define NOZCompressResult_h
@import Foundation;

@class NSError, NSObject, NSString;

@interface NOZCompressResult : NSObject

@property (readonly, copy, nonatomic) NSString *destinationPath;
@property (readonly, nonatomic) NSError *operationError;
@property (readonly, nonatomic) _Bool didSucceed;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long uncompressedSize;
@property (readonly, nonatomic) long long compressedSize;

/* instance methods */
- (float)compressionRatio;
- (id)description;

@end

#endif /* NOZCompressResult_h */
