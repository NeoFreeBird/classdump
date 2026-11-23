//
#ifndef TLSFileOutputStreamEvent_Protocol_h
#define TLSFileOutputStreamEvent_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLSFileOutputStreamEvent <NSObject>

@required

/* required instance methods */
- (void)tls_fileOutputEventBegan:(long long)began info:(id)info;
- (void)tls_fileOutputEventFinished:(long long)finished info:(id)info;
- (void)tls_fileOutputEventFailed:(long long)failed info:(id)info error:(id)error;

@optional

@end

#endif /* TLSFileOutputStreamEvent_Protocol_h */
