//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSCEmailShareable_Protocol_h
#define TSCEmailShareable_Protocol_h
@import Foundation;

#include "TSCShareable-Protocol.h"

@class NSString;

@protocol TSCEmailShareable <TSCShareable>

@required

@property (readonly, copy, nonatomic) NSString *htmlSubjectLine;
@property (readonly, copy, nonatomic) NSString *htmlMessageBody;

/* required instance methods */
- (id)htmlMessageBodyLinkingToURL:(id)url;

@optional

@end

#endif /* TSCEmailShareable_Protocol_h */
