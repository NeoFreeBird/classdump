//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
