//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
