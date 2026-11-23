//
#ifndef TFNTwitterStatusDisplayTextAttachment_h
#define TFNTwitterStatusDisplayTextAttachment_h
@import Foundation;

@class NSTextAttachment;
@protocol TFNTwitterStatusDisplayTextAttachmentDelegate;

@interface TFNTwitterStatusDisplayTextAttachment : NSTextAttachment

@property (weak, nonatomic) id <TFNTwitterStatusDisplayTextAttachmentDelegate> delegate;

/* instance methods */
- (id)viewProviderForParentView:(id)view location:(id)location textContainer:(id)container;

@end

#endif /* TFNTwitterStatusDisplayTextAttachment_h */
