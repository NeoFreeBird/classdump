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
