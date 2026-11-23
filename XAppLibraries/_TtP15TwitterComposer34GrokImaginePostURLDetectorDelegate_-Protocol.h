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
