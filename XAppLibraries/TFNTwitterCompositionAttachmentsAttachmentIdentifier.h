//
#ifndef TFNTwitterCompositionAttachmentsAttachmentIdentifier_h
#define TFNTwitterCompositionAttachmentsAttachmentIdentifier_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "TFNTwitterCompositionAttachmentsAttachmentIdentifier-Protocol.h"
#include "TTMPersistentStringConvertible-Protocol.h"

@class NSObject;

@interface TFNTwitterCompositionAttachmentsAttachmentIdentifier : NSObject <TFNTwitterCompositionAttachmentsAttachmentIdentifier>

@property (readonly, nonatomic) unsigned long long attachmentType;
@property (readonly, nonatomic) id <NSObject, NSCopying, NSCoding, TTMPersistentStringConvertible> objectIdentifier;

/* instance methods */
- (id)initWithAttachmentType:(unsigned long long)type objectIdentifier:(id)identifier;

@end

#endif /* TFNTwitterCompositionAttachmentsAttachmentIdentifier_h */
