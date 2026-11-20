//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AISignatureDetectionScribeSink_Protocol_h
#define T1AISignatureDetectionScribeSink_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AISignatureDetectionScribeSink <NSObject>

@required

/* required instance methods */
- (void)logClientAISignatureImpressionWithScribeElement:(id)element eventInfo:(id)info;
- (void)logClientAISignatureImpressionWithScribeElement:(id)element eventInfo:(id)info;

@optional

@end

#endif /* T1AISignatureDetectionScribeSink_Protocol_h */
