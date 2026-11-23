//
#ifndef TAVCaptionSink_Protocol_h
#define TAVCaptionSink_Protocol_h
@import Foundation;

@protocol TAVCaptionSink

@required

/* required instance methods */
- (void)captionSourceDidUpdateWithCaptionModels:(id)models;
- (void)captionSourceDidUpdateWithCaptionModels:(id)models;

@optional

@end

#endif /* TAVCaptionSink_Protocol_h */
