//
#ifndef TFNTwitterCompositionUploadPollOperationDelegate_Protocol_h
#define TFNTwitterCompositionUploadPollOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterCompositionUploadPollOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)compositionUploadPollOperation:(id)operation didUploadPoll:(id)poll;
- (void)compositionUploadPollOperation:(id)operation didFailUploadPoll:(id)poll error:(id)error;

@end

#endif /* TFNTwitterCompositionUploadPollOperationDelegate_Protocol_h */
