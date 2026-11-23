//
#ifndef ObjCGrokXChatMessageAttachmentFile_h
#define ObjCGrokXChatMessageAttachmentFile_h
@import Foundation;

@class NSData, NSObject, NSString;

@interface ObjCGrokXChatMessageAttachmentFile : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *name;

/* instance methods */
- (id)initWithData:(id)data mimeType:(id)type name:(id)name;

@end

#endif /* ObjCGrokXChatMessageAttachmentFile_h */
