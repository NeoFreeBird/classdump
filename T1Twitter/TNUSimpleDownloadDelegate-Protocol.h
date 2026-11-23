//
#ifndef TNUSimpleDownloadDelegate_Protocol_h
#define TNUSimpleDownloadDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNUSimpleDownloadDelegate <NSObject>

@required

/* required instance methods */
- (void)download:(id)download didUpdateProgress:(float)progress;

@optional

@end

#endif /* TNUSimpleDownloadDelegate_Protocol_h */
