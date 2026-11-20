//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionAttachmentsAttachmentIdentifier_Protocol_h
#define TFNTwitterCompositionAttachmentsAttachmentIdentifier_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "TTMPersistentStringConvertible-Protocol.h"

@protocol TFNTwitterCompositionAttachmentsAttachmentIdentifier

@required

@property (readonly, nonatomic) unsigned long long attachmentType;
@property (readonly, nonatomic) id <NSObject, NSCopying, NSCoding, TTMPersistentStringConvertible> objectIdentifier;

@optional

@end

#endif /* TFNTwitterCompositionAttachmentsAttachmentIdentifier_Protocol_h */
