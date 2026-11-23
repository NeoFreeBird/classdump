//
#ifndef UITextPasteItem_Protocol_h
#define UITextPasteItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSItemProvider;

@protocol UITextPasteItem <NSObject>

@required

@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) id localObject;
@property (nonatomic, readonly) NSDictionary *defaultAttributes;

/* required instance methods */
- (void)setStringResult:(id)result;
- (void)setStringResult:(id)result;
- (void)setAttributedStringResult:(id)result;
- (void)setAttributedStringResult:(id)result;
- (void)setAttachmentResult:(id)result;
- (void)setAttachmentResult:(id)result;
- (void)setNoResult;
- (void)setDefaultResult;

@optional

@end

#endif /* UITextPasteItem_Protocol_h */
