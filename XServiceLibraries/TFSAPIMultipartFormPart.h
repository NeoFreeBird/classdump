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
