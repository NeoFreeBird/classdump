//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1URLProtocolDefaultHandlerEvent_h
#define T1URLProtocolDefaultHandlerEvent_h
@import Foundation;

#include "T1URLProtocolDefaultHandlerContext.h"

@class NSObject, NSURL;

@interface T1URLProtocolDefaultHandlerEvent : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) T1URLProtocolDefaultHandlerContext *context;

/* instance methods */

@end

#endif /* T1URLProtocolDefaultHandlerEvent_h */
