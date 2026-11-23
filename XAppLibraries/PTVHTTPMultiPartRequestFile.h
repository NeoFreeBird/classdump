//
#ifndef PTVHTTPMultiPartRequestFile_h
#define PTVHTTPMultiPartRequestFile_h
@import Foundation;

@class NSData, NSObject, NSString;

@interface PTVHTTPMultiPartRequestFile : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *data;

/* class methods */
+ (id)MultipartRequestFileWith:(id)with Filename:(id)filename ContentType:(id)type Data:(id)data;

/* instance methods */

@end

#endif /* PTVHTTPMultiPartRequestFile_h */
