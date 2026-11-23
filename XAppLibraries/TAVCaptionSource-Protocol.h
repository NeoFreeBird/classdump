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
