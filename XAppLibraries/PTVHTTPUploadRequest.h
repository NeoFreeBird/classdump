//
#ifndef PTVHTTPUploadRequest_h
#define PTVHTTPUploadRequest_h
@import Foundation;

@class NSObject;

@interface PTVHTTPUploadRequest : NSObject

/* class methods */
+ (id)RequestWithURL:(id)url contentType:(id)type ContentLength:(id)length AdditionalHeaderFields:(id)fields;

@end

#endif /* PTVHTTPUploadRequest_h */
