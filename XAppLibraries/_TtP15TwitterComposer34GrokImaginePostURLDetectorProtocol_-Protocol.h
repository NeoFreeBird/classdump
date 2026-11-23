//
#ifndef _TtP15TwitterComposer34GrokImaginePostURLDetectorProtocol__Protocol_h
#define _TtP15TwitterComposer34GrokImaginePostURLDetectorProtocol__Protocol_h
@import Foundation;

#include "_TtP15TwitterComposer34GrokImaginePostURLDetectorDelegate_-Protocol.h"

@protocol TwitterComposer.GrokImaginePostURLDetectorProtocol

@required

@property (nonatomic, retain) id <TwitterComposer.GrokImaginePostURLDetectorDelegate> delegate;
@property (nonatomic, readonly) _Bool isDownloading;

/* required instance methods */
- (void)cancel;
- (void)detectURLsIfNeededIn:(id)in;

@optional

@end

#endif /* _TtP15TwitterComposer34GrokImaginePostURLDetectorProtocol__Protocol_h */
