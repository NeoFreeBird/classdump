//
#ifndef TFSHTTPRequestScribeProvider_Protocol_h
#define TFSHTTPRequestScribeProvider_Protocol_h
@import Foundation;

#include "TFSHTTPRequestScribeMethods-Protocol.h"

@protocol TFSHTTPRequestScribeProvider

@required

@property (nonatomic, readonly) id <TFSHTTPRequestScribeMethods> httpRequestScribe;

@optional

@end

#endif /* TFSHTTPRequestScribeProvider_Protocol_h */
