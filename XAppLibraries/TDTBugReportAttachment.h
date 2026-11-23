//
#ifndef TDTBugReportAttachment_h
#define TDTBugReportAttachment_h
@import Foundation;

@class NSData, NSObject, NSString, NSURL;

@interface TDTBugReportAttachment : NSObject

@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSURL *uploadURL;
@property (nonatomic) _Bool isAttachedAsSeparateFile;

/* class methods */
+ (id)attachmentWithData:(id)data mimeType:(id)type fileName:(id)name;
+ (id)attachmentWithText:(id)text fileName:(id)name;
+ (id)attachmentWithFilePath:(id)path mimeType:(id)type;

/* instance methods */
- (id)zippableEntry;

@end

#endif /* TDTBugReportAttachment_h */
