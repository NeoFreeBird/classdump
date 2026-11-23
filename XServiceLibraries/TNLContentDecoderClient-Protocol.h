//
#ifndef TNLContentDecoderClient_Protocol_h
#define TNLContentDecoderClient_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLContentDecoderClient <NSObject>

@required

/* required instance methods */
- (_Bool)tnl_dataWasDecoded:(id)decoded error:(out id *)error;

@optional

@end

#endif /* TNLContentDecoderClient_Protocol_h */
