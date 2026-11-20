//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TDTChannelLoggingOutputStreamDelegate_Protocol_h
#define TDTChannelLoggingOutputStreamDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TDTChannelLoggingOutputStreamDelegate <NSObject>

@required

/* required instance methods */
- (void)stream:(id)stream didAppendLogEntries:(unsigned long long)entries didPruneLogEntries:(unsigned long long)entries;

@optional

@end

#endif /* TDTChannelLoggingOutputStreamDelegate_Protocol_h */
