//
#ifndef TIPXMP4DecoderConfig_Protocol_h
#define TIPXMP4DecoderConfig_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPXMP4DecoderConfig <NSObject>

@required

@property (readonly, nonatomic) unsigned long long maxDecodableFramesCount;

@optional

@end

#endif /* TIPXMP4DecoderConfig_Protocol_h */
