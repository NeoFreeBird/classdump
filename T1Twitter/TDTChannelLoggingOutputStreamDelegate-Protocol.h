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
