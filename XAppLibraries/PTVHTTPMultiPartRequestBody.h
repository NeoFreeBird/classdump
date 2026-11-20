//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVHTTPMultiPartRequestBody_h
#define PTVHTTPMultiPartRequestBody_h
@import Foundation;

@class NSMutableData, NSObject, NSString;

@interface PTVHTTPMultiPartRequestBody : NSObject {
    /* instance variables */
    NSMutableData *_data;
    NSString *_boundaryString;
}

/* class methods */
+ (id)RequestWithURL:(id)url Parameters:(id)parameters AdditionalHeaderFields:(id)fields File:(id)file;
+ (id)GenerateBoundaryString;

/* instance methods */
- (id)init;
- (void)appendField:(id)field value:(id)value;
- (void)appendFile:(id)file data:(id)data fileName:(id)name contentType:(id)type;
- (id)contentType;
- (id)close;

@end

#endif /* PTVHTTPMultiPartRequestBody_h */
