//
#ifndef TSEMultipartFormPart_h
#define TSEMultipartFormPart_h
@import Foundation;

@class NSData, NSObject, NSString;

@interface TSEMultipartFormPart : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *file;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } fileRange;
@property (copy, nonatomic) NSString *computeMD5Name;

/* instance methods */
- (id)init;

@end

#endif /* TSEMultipartFormPart_h */
