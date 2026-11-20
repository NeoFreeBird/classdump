//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSCEmailShareable_Protocol_h
#define TSCEmailShareable_Protocol_h
@import Foundation;

#include "TSCShareable-Protocol.h"

@class NSString;

@protocol TSCEmailShareable <TSCShareable>

@required

@property (nonatomic, readonly) NSString *htmlSubjectLine;
@property (nonatomic, readonly) NSString *htmlMessageBody;

/* required instance methods */
- (id)htmlMessageBodyLinkingToURL:(id)url;

@optional

@end

#endif /* TSCEmailShareable_Protocol_h */
