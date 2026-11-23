//
#ifndef TFNTwitterCompositionAttachmentsDelegate_Protocol_h
#define TFNTwitterCompositionAttachmentsDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterCompositionAttachmentsDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)attachmentsShouldAllowMixedMedia;

@optional

/* optional instance methods */
- (unsigned long long)attachmentsMaxNumberOfMediaItems;

@end

#endif /* TFNTwitterCompositionAttachmentsDelegate_Protocol_h */
