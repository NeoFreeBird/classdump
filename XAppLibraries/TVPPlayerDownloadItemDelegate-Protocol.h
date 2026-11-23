//
#ifndef TVPPlayerDownloadItemDelegate_Protocol_h
#define TVPPlayerDownloadItemDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TVPPlayerDownloadItemDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)playerDownloadItemDidFinish:(id)finish;

@end

#endif /* TVPPlayerDownloadItemDelegate_Protocol_h */
