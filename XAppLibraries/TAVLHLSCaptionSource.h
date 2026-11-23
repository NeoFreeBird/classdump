//
#ifndef TAVLHLSCaptionSource_h
#define TAVLHLSCaptionSource_h
@import Foundation;

#include "TAVCaptionSink-Protocol.h"
#include "TAVCaptionSource-Protocol.h"
#include "TAVCaptionStyle.h"

@class NSObject;

@interface TAVLHLSCaptionSource : NSObject <TAVCaptionSource>

@property (retain, nonatomic) TAVCaptionStyle *captionStyle;
@property (weak, nonatomic) id <TAVCaptionSink> captionSink;
@property (nonatomic) _Bool captionsEnabled;

/* instance methods */
- (id)init;
- (void)onCaption:(id)caption;
- (void)refreshCaptionsStyle;

@end

#endif /* TAVLHLSCaptionSource_h */
