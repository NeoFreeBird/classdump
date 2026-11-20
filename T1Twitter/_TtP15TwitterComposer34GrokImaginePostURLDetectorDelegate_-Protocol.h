//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP15TwitterComposer34GrokImaginePostURLDetectorDelegate__Protocol_h
#define _TtP15TwitterComposer34GrokImaginePostURLDetectorDelegate__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TwitterComposer.GrokImaginePostURLDetectorDelegate <NSObject>

@required

/* required instance methods */
- (void)grokImaginePostURLDetector:(id)urldetector didDetectAsset:(id)asset forPostID:(id)id;

@optional

/* optional instance methods */
- (void)grokImaginePostURLDetectorDidChangeDownloadingState:(id)state;

@end

#endif /* _TtP15TwitterComposer34GrokImaginePostURLDetectorDelegate__Protocol_h */
