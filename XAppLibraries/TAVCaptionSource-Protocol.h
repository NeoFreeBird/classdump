//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVCaptionSource_Protocol_h
#define TAVCaptionSource_Protocol_h
@import Foundation;

#include "TAVCaptionSink-Protocol.h"

@protocol TAVCaptionSource

@required

@property (weak, nonatomic) id <TAVCaptionSink> captionSink;
@property (nonatomic) _Bool captionsEnabled;

@optional

@end

#endif /* TAVCaptionSource_Protocol_h */
