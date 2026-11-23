//
#ifndef PTVTVDIScribe_h
#define PTVTVDIScribe_h
@import Foundation;

#include "TAVScribe-Protocol.h"

@class NSObject;

@interface PTVTVDIScribe : NSObject <TAVScribe>

/* instance methods */
- (void)logClientEventWithName:(id)name parameters:(id)parameters;
- (void)logPromotedEventWithName:(id)name parameters:(id)parameters;

@end

#endif /* PTVTVDIScribe_h */
