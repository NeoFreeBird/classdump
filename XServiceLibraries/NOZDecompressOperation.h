//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZDecompressOperation_h
#define NOZDecompressOperation_h
@import Foundation;

#include "NOZDecompressDelegate-Protocol.h"
#include "NOZDecompressRequest.h"
#include "NOZDecompressResult.h"
#include "NOZSyncStepOperation.h"
#include "NOZUnzipper.h"

@class NSMutableArray, NSString;

@interface NOZDecompressOperation : NOZSyncStepOperation {
    /* instance variables */
    NOZUnzipper *_unzipper;
    id <NOZDecompressDelegate> _weakDelegate;
    id <NOZDecompressDelegate> _strongDelegate;
    NSString *_sanitizedDestinationDirectoryPath;
    double _startTime;
    unsigned long long _expectedEntryCount;
    long long _expectedUncompressedSize;
    long long _bytesUncompressed;
    NSMutableArray *_entryPaths;
    struct { unsigned int delegateUpdatesProgress:1; unsigned int delegateHasOverwriteCheck:1; } _flags;
}

@property (readonly, nonatomic) NOZDecompressRequest *request;
@property (readonly, weak, nonatomic) id <NOZDecompressDelegate> delegate;
@property (readonly, nonatomic) NOZDecompressResult *result;

/* class methods */
+ (id)operationCancelledError;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request delegate:(id)delegate;
- (id)initWithRequest:(id)request completion:(id /* block */)completion;
- (void)main;
- (unsigned long long)numberOfSteps;
- (long long)weightForStep:(unsigned long long)step;
- (_Bool)runStep:(unsigned long long)step error:(out id *)error;
- (void)handleProgressUpdated:(float)updated;
- (void)handleFinishing;

@end

#endif /* NOZDecompressOperation_h */
