//
#ifndef TNUSimpleDownload_Protocol_h
#define TNUSimpleDownload_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TNUSimpleDownloadDelegate-Protocol.h"

@class NSString, NSURL;

@protocol TNUSimpleDownload <NSObject>

@required

@property (nonatomic, readonly) NSString *downloadId;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (nonatomic, weak) id <TNUSimpleDownloadDelegate> delegate;
@property (nonatomic, readonly) float downloadProgress;

/* required instance methods */
- (void)cancelWithSource:(id)source;
- (void)cancelWithSource:(id)source;

@optional

@end

#endif /* TNUSimpleDownload_Protocol_h */
