//
#ifndef TNUSimpleDownload_Protocol_h
#define TNUSimpleDownload_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol TNUSimpleDownloadDelegate;

@protocol TNUSimpleDownload <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *downloadId;
@property (readonly, copy, nonatomic) NSURL *downloadURL;
@property (weak, nonatomic) id <TNUSimpleDownloadDelegate> delegate;
@property (readonly, nonatomic) float downloadProgress;

/* required instance methods */
- (void)cancelWithSource:(id)source;

@optional

@end

#endif /* TNUSimpleDownload_Protocol_h */
