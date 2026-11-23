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
