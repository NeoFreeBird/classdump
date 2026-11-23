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
