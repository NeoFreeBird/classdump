//
#ifndef PTVEncoderAudioBlock_h
#define PTVEncoderAudioBlock_h
@import Foundation;

@class NSData, NSObject;

@interface PTVEncoderAudioBlock : NSObject

@property char * data;
@property unsigned long long length;
@property (readonly) struct opaqueCMSampleBuffer * sample;
@property double pts;
@property (retain) NSData *dataObject;

/* instance methods */
- (void)dealloc;
- (void)clearAndReleaseSample;
- (id)initWithData:(char *)data Length:(unsigned long long)length SampleBuffer:(struct opaqueCMSampleBuffer *)buffer Pts:(double)pts DataObject:(id)object;

@end

#endif /* PTVEncoderAudioBlock_h */
