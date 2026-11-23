//
#ifndef TAVTVideoFilter_Protocol_h
#define TAVTVideoFilter_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@protocol TAVTVideoFilter <NSSecureCoding, NSCopying>

@required

@property (nonatomic, readonly) long long framesToBuffer;

/* required instance methods */
- (id)scheduleProcessingOfFrameWithPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })stamp input:(struct __CVBuffer *)input output:(struct __CVBuffer *)output error:(id *)error;

@optional

/* optional instance methods */
- (struct CGSize { double x0; double x1; })outputSizeForInputSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* TAVTVideoFilter_Protocol_h */
