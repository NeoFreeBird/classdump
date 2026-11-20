//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAPIMultipartFormPart_h
#define TFSAPIMultipartFormPart_h
@import Foundation;

@class NSData, NSObject, NSString;

@interface TFSAPIMultipartFormPart : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *file;
@property (readonly, nonatomic) NSData *data;

/* instance methods */
- (id)initWithName:(id)name data:(id)data;
- (id)initWithName:(id)name contentType:(id)type filename:(id)filename data:(id)data;
- (id)initWithName:(id)name contentType:(id)type filename:(id)filename file:(id)file;

@end

#endif /* TFSAPIMultipartFormPart_h */
