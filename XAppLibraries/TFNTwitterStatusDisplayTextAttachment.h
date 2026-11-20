//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
