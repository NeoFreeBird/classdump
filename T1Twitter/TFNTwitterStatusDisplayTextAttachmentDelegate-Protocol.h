//
#ifndef TFNTwitterStatusDisplayTextAttachmentDelegate_Protocol_h
#define TFNTwitterStatusDisplayTextAttachmentDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterStatusDisplayTextAttachmentDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)viewProviderForTextAttachment:(id)attachment parentView:(id)view location:(id)location textContainer:(id)container;
- (id)viewProviderForTextAttachment:(id)attachment parentView:(id)view location:(id)location textContainer:(id)container;

@end

#endif /* TFNTwitterStatusDisplayTextAttachmentDelegate_Protocol_h */
