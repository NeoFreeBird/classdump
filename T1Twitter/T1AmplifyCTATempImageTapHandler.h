//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AmplifyCTATempImageTapHandler_h
#define T1AmplifyCTATempImageTapHandler_h
@import Foundation;

#include "T1AmplifyCTADelegate-Protocol.h"

@class NSObject, NSString, TVPVideoContextCTAInfo;
@protocol T1AmplifyUIEventHandlerDelegate;

@interface T1AmplifyCTATempImageTapHandler : NSObject <T1AmplifyCTADelegate>

@property (retain, nonatomic) TVPVideoContextCTAInfo *ctaInfo;
@property (copy, nonatomic) id /* block */ loggingBlock;
@property (weak, nonatomic) id <T1AmplifyUIEventHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCTAInfo:(id)ctainfo loggingBlock:(id /* block */)block;
- (void)ctaWasTappedOnAmplifyCTA:(id)cta;

@end

#endif /* T1AmplifyCTATempImageTapHandler_h */
