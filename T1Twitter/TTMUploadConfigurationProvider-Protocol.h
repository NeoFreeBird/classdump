//
#ifndef TTMUploadConfigurationProvider_Protocol_h
#define TTMUploadConfigurationProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMUploadConfigurationProvider <NSObject>

@required

/* required instance methods */
- (id)configurationForDataSource:(id)source;

@optional

@end

#endif /* TTMUploadConfigurationProvider_Protocol_h */
